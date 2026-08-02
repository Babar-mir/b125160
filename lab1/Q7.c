#include<stdio.h>


struct student {
    char name[20];
    int roll_no;
    int C_marks;
    int maths_marks;
    int phy_marks;
};

int main(){
    struct student s;
    float avg, total;

    printf("enter the student name ");
    scanf("%s",s.name);
    
    printf("enter the student roll number ");
    scanf("%d",&s.roll_no);
    printf("enter the student's marks in C ");
    scanf("%d",&s.C_marks);
    printf("enter the student's marks in maths ");
    scanf("%d",&s.maths_marks);
    printf("enter the student's marks in physics ");
    scanf("%d",&s.phy_marks);

    total = s.C_marks+s.maths_marks+s.phy_marks;
    avg = total / 3.0;
    printf("\nStudent Report Card \n");
    printf("Roll Number : %d\n", s.roll_no);
    printf("Name  : %s\n", s.name);
    printf("C Mark: %.2f\n", s.C_marks);
    printf("Math Mark: %.2f\n", s.maths_marks);
    printf("Physics Marks: %.2f\n", s.phy_marks);
    printf("Total Marks : %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}