#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    float gpa;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Danh sách đầy!\n");
        return;
    }
    Student s;
    printf("Nhập ID: ");
    scanf("%d", &s.id);
    printf("Nhập tên: ");
    scanf(" %[^"]", s.name);
    printf("Nhập GPA: ");
    scanf("%f", &s.gpa);
    students[student_count++] = s;
    printf("Đã thêm sinh viên!\n");
}

void list_students() {
    printf("\nDanh sách sinh viên:\n");
    for (int i = 0; i < student_count; ++i) {
        printf("ID: %d, Tên: %s, GPA: %.2f\n", students[i].id, students[i].name, students[i].gpa);
    }
}

void find_student() {
    int id;
    printf("Nhập ID cần tìm: ");
    scanf("%d", &id);
    for (int i = 0; i < student_count; ++i) {
        if (students[i].id == id) {
            printf("Tìm thấy: ID: %d, Tên: %s, GPA: %.2f\n", students[i].id, students[i].name, students[i].gpa);
            return;
        }
    }
    printf("Không tìm thấy sinh viên!\n");
}

int main() {
    int choice;
    do {
        printf("\n1. Thêm sinh viên\n2. Xem danh sách\n3. Tìm sinh viên\n0. Thoát\nChọn: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add_student(); break;
            case 2: list_students(); break;
            case 3: find_student(); break;
            case 0: printf("Thoát chương trình.\n"); break;
            default: printf("Lựa chọn không hợp lệ!\n");
        }
    } while (choice != 0);
    return 0;
}
