#include<stdio.h>
int isprime(int);
int main(){
    int n,p;
    printf("enter the number ");
    scanf("%d",&n);
    p=isprime(n);
    if(p==1){
        printf("it is prime");
    }
    else{
        printf("not priem");
    }
    return 0;

}
int isprime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if(n%i==0){
        c++;
    }
}
    if (c==2){
        return 1;
    }
    else{
        return 0;
    }


}