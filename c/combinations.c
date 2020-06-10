#include<stdio.h>

int myFact(int n);
int nCr(int n,int r);

int main() {
    int n,r,c;
    printf("Enter n and r: \t");
    scanf("%d %d",&n,&r);
    c=nCr(n,r);
    printf("The value is: \t %d \n",c);
}

int myFact(int n) {
    int fact=1,i=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    return fact;
}

int nCr(int n,int r) {
    return myFact(n)/(myFact(r)*myFact(n-r));
}