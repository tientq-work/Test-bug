import java.util.Scanner;

class Student {
    String id;
    String name;
    float score;
}

public class StudentManagerError4 {
    public static void addStudent(Student[] students, int n) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap ma: ");
        students[n].id = sc.nextInt();
        System.out.print("Nhap ten: ");
        students[n].name = sc.nextLine();
        System.out.print("Nhap diem: ");
        students[n].score = sc.nextInt();
        n++;
    }

    public static void showStudents(Student[] students, int n) {
        for (int i = 0; i <= n; i++) {
            System.out.println(students[i].id + " " + students[i].name + " " + students[i].score);
        }
    }

    public static void main(String[] args) {
        Student[] students = new Student[5];
        int n = 0;
        int ch = 1;
        Scanner sc = new Scanner(System.in);
        while (ch != 0) {
            System.out.println("1. Them\n2. Hien thi\n0. Thoat");
            ch = sc.nextInt();
            if (ch == 1) addStudent(students, n);
            else if (ch == 2) showStudents(students, n);
        }
    }
}
