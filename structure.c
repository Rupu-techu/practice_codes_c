#include<stdio.h>
struct student{
    char name[25];
    int m1,m2;
}s1,s2;
int main(){
    int avg1,avg2;
    printf("enter name of student 1:\n");
    gets (s1.name);
    printf("enter marks 1st sub\n");
    scanf("%d",& s1.m1);
    printf("enter marks 2nd sub\n");
    scanf("%d",& s1.m2);
    getchar();
    printf("enter name of student 2:\n");
    gets (s2.name);
    printf("enter marks 1st sub\n");
    scanf("%d",& s2.m1);
    printf("enter marks 2nd sub\n");
    scanf("%d",& s2.m2);
    avg1=(s1.m1+s1.m2)/2;
    avg2=(s2.m1+s2.m2)/2;
    if(avg1>avg2){
        printf("highest marks obtained%s\n",s1.name);
        printf("highest marks%d\n",avg1);
    }
    else{
        printf("highest marks obtained%s\n",s2.name);
        printf("highest marks%d\n",avg2);

    }

    return 0;
}