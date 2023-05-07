#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Item {
    int code;
    char name[50];
    float price;
};



void main() {
    struct Item items[5] = {
        { 1, "Item 1", 1000 },
        { 2, "Item 2", 2000 },
        { 3, "Item 3", 3000 },
        { 4, "Item 4", 4050 },
        { 5, "Item 5", 5500 }
    };
    clrscr();
    printf("Items before price increase:\n");
    for (int i = 0; i < 5; i++) {
        printf("Code: %d, Name: %s, Price: ₹%.2f\n", items[i].code, items[i].name, items[i].price);
    }

    for (int i = 0; i < 5; i++) {
        items[i].price += (items[i].price*10/100);
    }

    printf("\nItems after price increase:\n");
    for (int i = 0; i < 5; i++) {
        printf("Code: %d, Name: %s, Price: ₹%.2f\n", items[i].code, items[i].name, items[i].price);
    }

    getch();
}
