#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        printf("Name: ");
        scanf("%*c%[^\n]s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("\n");
    }
    printf("Students with CGPA >= 8.0 \n");
    for(int i = 0; i < 5; i++) {
        if(s[i].cgpa >= 8.0) {
            printf("Roll Number: %d, Name: %s, CGPA: %.2f\n", s[i].rollNumber, s[i].name, s[i].cgpa);
        }
    }

    return 0;
}