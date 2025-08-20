package src;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Library library = new Library();
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.println("1. Add book");
            System.out.println("2. Remove book");
            System.out.println("3. Find book");
            System.out.println("4. Print all books");
            System.out.println("5. Exit");
            System.out.print("Choose: ");
            int choice = scanner.nextInt();
            scanner.nextLine();
            if (choice == 1) {
                System.out.print("Title: ");
                String title = scanner.nextLine();
                System.out.print("Author: ");
                String author = scanner.nextLine();
                System.out.print("Year: ");
                int year = scanner.nextInt();
                scanner.nextLine();
                Book book = new Book(title, author, year);
                library.addBook(book);
            } else if (choice == 2) {
                System.out.print("Title to remove: ");
                String title = scanner.nextLine();
                library.removeBook(title);
            } else if (choice == 3) {
                System.out.print("Title to find: ");
                String title = scanner.nextLine();
                Book book = library.findBook(title);
                if (book != null) {
                    System.out.println(book);
                } else {
                    System.out.println("Not found");
                }
            } else if (choice == 4) {
                library.printAllBooks();
            } else if (choice == 5) {
                break;
            } else {
                System.out.println("Invalid");
            }
        }
    }
}
