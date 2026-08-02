#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNumber;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter Name: ");
    scanf("%*c%[^\n]s", s.name);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %02d/%02d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}