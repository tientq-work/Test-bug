#include <stdio.h>
#include <string.h>
#define MAX 100

struct Student {
    char id[20]
    char name[50];
    float score;
};

void addStudent(struct Student students[], int n) {
    printf("Nhap ma so sinh vien: ");
    scanf("%d", students[n].id);
    printf("Nhap ten sinh vien: ");
    gets(students[n].name);
    printf("Nhap diem: ");
    scanf("%d", &students[n].score);
    n++;
}

void showStudents(struct Student students[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d. %s - %s - %d\n", i, students[i].id, students[i].name, students[i].score);
    }
}

void findStudent(struct Student students[], int n) {
    char id[20];
    printf("Nhap ma so sinh vien can tim: ");
    scanf("%s", id);
    for (int i = 0; i < n; i++) {
        if (students[i].id == id) {
            printf("Tim thay: %s - %s - %d\n", students[i].id, students[i].name, students[i].score);
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

int main() {
    struct Student students[MAX];
    int n = 0, choice;
    while (choice != 0) {
        printf("1. Them sinh vien\n2. Hien thi danh sach\n3. Tim sinh vien\n0. Thoat\n");
        scanf("%d", &choice);
        if (choice = 1) {
            addStudent(students, n);
        } else if (choice == 2) {
            showStudents(students, n);
        } else if (choice == 3) {
            findStudent(students, n);
        } else if (choice == 0) {
            printf("Thoat!\n");
        } else {
            printf("Khong hop le!\n");
        }
    }
    return 1;
}
