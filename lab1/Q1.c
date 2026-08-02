#include<stdio.h>


struct student {
    char name[20];
    int roll_no;
    int age;
    float cgpa;
};
int main(){
    struct student s;
    printf("enter your name ");
    scanf("%s",s.name);
    printf("enter your roll number ");
    scanf("%d",&s.roll_no);
    printf("enter your age ");
    scanf("%d",&s.age);
    printf("enter your cgpa ");
    scanf("%f",&s.cgpa);

    printf("entered details of the students\n");
    printf("name %s\n",s.name);
    printf("roll number %d\n",s.roll_no);
    printf("age: %d\n",s.age);
    printf("cgpa %.2f\n",s.cgpa);
    return 0;
}