#include <stdio.h>
#include <string.h>
#define MAX 100

struct Student {
    char id[20];
    char name[50];
    float score;
};

void addStudent(struct Student students[], int *n) {
    if (*n >= MAX) {
        printf("Danh sach day!\n");
        return;
    }
    printf("Nhap ma so sinh vien: ");
    scanf("%s", students[*n].id);
    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(students[*n].name, 50, stdin);
    students[*n].name[strcspn(students[*n].name, "\n")] = 0;
    printf("Nhap diem: ");
    scanf("%f", &students[*n].score);
    (*n)++;
}

void showStudents(struct Student students[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %s - %.2f\n", i+1, students[i].id, students[i].name, students[i].score);
    }
}

void findStudent(struct Student students[], int n) {
    char id[20];
    printf("Nhap ma so sinh vien can tim: ");
    scanf("%s", id);
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("Tim thay: %s - %s - %.2f\n", students[i].id, students[i].name, students[i].score);
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

int main() {
    struct Student students[MAX];
    int n = 0, choice;
    do {
        printf("\n1. Them sinh vien\n2. Hien thi danh sach\n3. Tim sinh vien theo ma\n0. Thoat\nChon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent(students, &n);
                break;
            case 2:
                showStudents(students, n);
                break;
            case 3:
                findStudent(students, n);
                break;
            case 0:
                printf("Thoat!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);
    return 0;
}
