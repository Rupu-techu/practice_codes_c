//checking of age
#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",& age);
    if (age>=1 && age<=5){
    printf("baby");    
    }else if (age>=6 && age<=12){
    printf("infant");    
    }else if (age>=13 && age<=19){
    printf("teen");
    }else if (age>=20 && age<=40){
    printf("adult");
    }else{
    printf("old");    
    }return 0;
}