//CALL BY VALUE(NON VOID RETURN)
#include<stdio.h>
int fact(int);
int main(){
int n,result;
printf("enter the number:");
scanf("%d",&n);
if (n<=0){
    printf("negative number");
}
else{
    result=fact(n);
printf("the factorial of ther number %d is %d:",n,result);
}
return 0;
}
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f=f*i;
    }
    return f;

}