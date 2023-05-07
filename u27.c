#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    int marks;
    char grade;
};

void calculate_grade(struct student *s) {
    int marks = s->marks;
    if (marks >= 75) {
        s->grade = 'A';
    } else if (marks >= 60) {
        s->grade = 'B';
    } else if (marks >= 50) {
        s->grade = 'C';
    } else if (marks >= 35) {
        s->grade = 'D';
    } else {
        s->grade = 'F';
    }
}

int main() {
    struct student stu[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll no: ");
        scanf("%d", &stu[i].rollno);
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Marks: ");
        scanf("%d", &stu[i].marks);
        calculate_grade(&stu[i]);
    }

    printf("Details of students with grades:\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll no: %d, Name: %s, Marks: %d, Grade: %c\n", stu[i].rollno, stu[i].name, stu[i].marks, stu[i].grade);
    }

    return 0;
}
