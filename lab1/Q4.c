#include<stdio.h>


struct product {
    char prod_name[100];
    int id;
    float price;
    int quantity;
};


int main(){
    struct product p;
    printf("enter the product name ");
    scanf("%s",p.prod_name);
    
    printf("enter the product id ");
    scanf("%d",&p.id);
    
    printf("enter the product's price ");
    scanf("%f",&p.price);
    
    printf("enter the quantitiy ");
    scanf("%d",&p.quantity);

    printf("total cost%.3f ",p.price*p.quantity);

    return 0;
}