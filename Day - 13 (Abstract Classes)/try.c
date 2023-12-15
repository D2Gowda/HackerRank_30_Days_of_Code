#include <stdio.h>
#include <stdlib.h>

// Define Book class
typedef struct {
    char *title;
    char *author;
    void (*display)();
} Book;

// Define MyBook class
typedef struct {
    Book base;
    int price;
} MyBook;

// Implement display method for MyBook
void displayMyBook(MyBook *myBook) {
    printf("Title: %s\nAuthor: %s\nPrice: %d\n", myBook->base.title, myBook->base.author, myBook->price);
}

// Create a new MyBook instance
MyBook *createMyBook(char *title, char *author, int price) {
    MyBook *myBook = (MyBook *)malloc(sizeof(MyBook));
    myBook->base.title = title;
    myBook->base.author = author;
    myBook->price = price;
    myBook->base.display = (void (*)())displayMyBook;
    return myBook;
}

int main() {
    // Input from user
    char title[100], author[100];
    int price;

    printf("Enter title: ");
    fgets(title, sizeof(title), stdin);
    printf("Enter author: ");
    fgets(author, sizeof(author), stdin);
    printf("Enter price: ");
    scanf("%d", &price);

    // Create MyBook instance
    MyBook *newNovel = createMyBook(title, author, price);

    // Display information
    newNovel->base.display();

    // Free allocated memory
    free(newNovel);

    return 0;
}
