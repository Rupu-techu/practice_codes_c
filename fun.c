#include<stdio.h>
void fact(int *);
int main(){
    int *a;
    printf("enter the number for fact");
    scanf("%d",&*a);
    fact(a);
    return 0;
}
void fact (int *a){
    int f=1;
    for(int i=1;i<=*a;i++){
        f=f*i;
    }
    printf("the factorial of %d is %d",*a,f);

}  
