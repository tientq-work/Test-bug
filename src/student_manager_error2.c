#include <stdio.h>
#define MAX 50

struct Student {
    char id[10];
    char name[30];
    float score;
};

void addStudent(struct Student students[], int *n) {
    printf("Nhap ma: ");
    scanf("%s", students[*n].id);
    printf("Nhap ten: ");
    scanf("%s", students[*n].name);
    printf("Nhap diem: ");
    scanf("%f", students[*n].score);
    *n = *n + 1;
}

void showStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s %s %f\n", students[i].id, students[i].name, students[i].score);
}

int main() {
    struct Student students[MAX];
    int n = 0;
    int ch;
    do {
        printf("1. Them\n2. Hien thi\n0. Thoat\n");
        scanf("%d", ch);
        if (ch == 1) addStudent(students, n);
        else if (ch == 2) showStudents(students, n);
    } while (ch != 0);
    return 0;
}
