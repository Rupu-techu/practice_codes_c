#include<stdio.h>
#include<string.h>
int main(){
    char a[25],*ch;
    int c=0;
   printf("enter a sentence");
   gets(a);
   ch=a;
   printf("%c",*ch);
   while (*ch!='\0'){
    if(*ch==' '){
       printf("%c",*(ch+1)); //address increment 
    }
    ch++;
   }
 return 0;   
}