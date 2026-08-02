#include<stdio.h>

typedef struct rectangle{
    float length;
    float breadth;
}rect;


int main(){
    rect r;
    printf("enter the length of rectangle ");
    scanf("%f",&r.length);

    printf("enter the breadth of rectangle ");
    scanf("%f",&r.breadth);
     
    float area= r.breadth*r.length;
    float perimeter = 2*(r.length+r.breadth);

    printf("area of given rectangle %.3f\n",area);
    printf("perimeter of given rectangle %.3f",perimeter);

    return 0;
}

