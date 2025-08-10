#include<stdio.h>
#include<string.h>
int main(){
    char a[25],*ch;
    int c=0;
   printf("enter a sentence");
   gets(a);
   ch=a;
   while (*ch!='\0'){
    if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'||*ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U'){
        c=c+1;
    }
    ch++;
   }
   printf("total number of vowels%d",c);
 return 0;   
}