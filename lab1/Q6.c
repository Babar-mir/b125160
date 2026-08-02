#include<stdio.h>

typedef struct distance{
    int feet;
    int inch;
}dist;


int main(){
    dist d[2];
    for(int i=0;i<2;i++){

        printf("enter distance %d in feets ",i+1);
        scanf("%d",&d[i].feet);
        
        printf("enter distance %d in inchs ",i+1);
        scanf("%d",&d[i].inch);
    }

    int total_feet = d[0].feet+d[1].feet;
    int total_inchs = d[0].inch+d[1].inch;

    printf("total distance =  %d feets and %d inchs", total_feet,total_inchs );
    return 0;

}