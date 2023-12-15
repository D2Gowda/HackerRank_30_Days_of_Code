import java.util.Scanner;

abstract class Book {
    protected String title;
    protected String author;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    public abstract void display();
}

class MyBook extends Book {
    private int price;

    public MyBook(String title, String author, int price) {
        super(title, author);
        this.price = price;
    }

    @Override
    public void display() {
        System.out.println("Title: " + title + "\nAuthor: " + author + "\nPrice: " + price);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String title = scanner.nextLine();
        String author = scanner.nextLine();
        int price = Integer.parseInt(scanner.nextLine());

        MyBook newNovel = new MyBook(title, author, price);
        newNovel.display();
    }
}
