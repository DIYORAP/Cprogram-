#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    int year;
    int pages;
    float price;
};

void main() {
    int num_books;
    printf("Enter the number of books: ");
    scanf("%d", &num_books);

    struct Book books[num_books];
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d\n", i+1);
        printf("\nTitle: ");
        scanf("%s", books[i].title);
        printf("\nAuthor: ");
        scanf("%s", books[i].author);
        printf("\nPublisher: ");
        scanf("%s", books[i].publisher);
        printf("\nYear: ");
        scanf("%d", &books[i].year);
        printf("\nPages: ");
        scanf("%d", &books[i].pages);
        printf("\nPrice: ");
        scanf("%f", &books[i].price);
    }

    printf("\nList of Books:\n");
    for (int i = 0; i < num_books; i++) {
        printf("\n---|Book %d|---\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Year: %d\n", books[i].year);
        printf("Pages: %d\n", books[i].pages);
        printf("Price: %f\n", books[i].price);
    }

   getch();
}
