
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};


int main() {
    struct Employee emp[5];
    int maxIndex = 0;
    for(int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%*c%[^\n]s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    for(int i = 1; i < 5; i++) {
        if(emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("Highest Paid Employee\n");
    printf("ID: %d\n", emp[maxIndex].id);
    printf("Name: %s\n", emp[maxIndex].name);
    printf("Salary: %.2f\n", emp[maxIndex].salary);

    return 0;
}