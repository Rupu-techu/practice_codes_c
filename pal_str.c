#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
      char str1[100];
    int i, len=1;

    printf("Enter a string: ");
   gets(str) ;// handles one word only
   printf("Enter a string: ");
   gets(str1) ;
   whiel(str[i] !='\0'&&str1[i] !='\0');
   if (str[i]!=str1[i]){
    len=0;
   }
   i++;
    if (str[i]=='\0' || str1[i]=='\0'){
        len=0;
    }
}





  