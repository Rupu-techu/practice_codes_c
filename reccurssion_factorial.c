#include<stdio.h>
int fact(int n){
    if (n<=0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }

}
int main(){
    int n,result;
    printf("enter the numbver");
    scanf("%d",&n);
    result=fact(n);
    if (result==1){
        printf("factorial of he number is not mpossibler");
    }
else{
    printf("factorial of he number is%d:",result);
}
return 0;
}