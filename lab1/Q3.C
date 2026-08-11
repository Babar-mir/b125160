#include<stdio.h>


struct book {
    char title[100];
    char Auth_name[50];
    int id;
    float price;
};


int main(){
    struct book b;
    printf("enter the tittle of the book ");
    scanf("%s",b.title);

    printf("enter the author's name of the book ");
    scanf("%s",b.Auth_name);

    printf("enter the id of the book ");
    scanf("%d",&b.id);

    printf("enter the price of the book ");
    scanf("%f",&b.price);
    

    printf("\nentered detail of the book\n");
    printf("title: %s\n",b.title);
    printf("name of author:%s\n",b.Auth_name);
    printf("book id: %d\n",b.id);
    printf("price%.3f\n",b.price);
    return 0;
}