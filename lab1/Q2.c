#include<stdio.h>


typedef struct employee {
    char name[20];
    int id;
    float salary;
}emp;

int main(){
    emp e[3];
    for(int i=0;i<3;i++){
        printf("enter the name of employee ");
        scanf("%s",e[i].name);
        printf("enter the id of employee ");
        scanf("%d",&e[i].id);
        printf("enter the salary of employee ");
        scanf("%f",&e[i].salary);

    }

    printf("entered details of given employees\n");
    for(int i=0;i<3;i++){
        printf("name :%s  id :%d  salary :%f \n",e[i].name,e[i].id,e[i].salary);

    }
    return 0;
}