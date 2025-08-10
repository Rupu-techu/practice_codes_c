#include<stdio.h>
int isprime(int);
int main (){
    int n,result;
    printf("enter the number:");
scanf("%d",&n);
result=isprime(n);
if (result==1){
    printf("prime number");
}
else{
    printf("not prime number");
}
isprime(n);
return 0;
}
int isprime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            c=c+1;
        }
    }
if (c==2){
    return 1;
    }

}