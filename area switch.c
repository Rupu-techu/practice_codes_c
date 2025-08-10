#include<stdio.h>
int main(){
    int opt;
    float a,b,r,ar,ac;
    printf("enter option 1 for area of rectangle");
    printf("\nenter option 2 for area of circle");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        printf("enter nther lengthy and breadth");
        scanf("%f%f",&a,&b);
        ar=a*b;
        printf("the area is:%f",ar);
        break;
    case 2:
        printf("enter nther radius");
        scanf("%f",&r);
        ac=3.14*r*r;
        printf("the area is:%f",ac);
        break;
    default:
        printf("wrong num");
        return 0;
    }

}