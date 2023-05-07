#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int id;
    struct Date dob;
};

int main() {
    struct Student student1;
    
    // Input student details
    printf("Enter student name: ");
    fgets(student1.name, 50, stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0'; // remove newline character
    
    printf("Enter student ID: ");
    scanf("%d", &student1.id);
    
    printf("Enter student DOB (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &student1.dob.day, &student1.dob.month, &student1.dob.year);
    
    // Print student details
    printf("\nStudent details:\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("DOB: %02d/%02d/%d\n", student1.dob.day, student1.dob.month, student1.dob.year);
    
    return 0;
}
    