#include<stdio.h>
int iskris(int);
    int main(){
        int n,p;
        printf("enter the number:");
        scanf("%d",&n);
        p=iskris(n);
        if (p==1){
            printf("krishnamurthy number");
        }
        else{
            printf("not krishnamurthy");
        }
        return 0;
    }
int iskris(int n){
    int f=1,cpy=n,s=0,r;
    while (n>0){
        r=n%10;
        n=n/10;
        for(int i=1;i<=r;i++){
            f*=i;
        }
        s=s+f;
        f=1;
    }
if (s==cpy){
    return 1;
}
return 0;
}