#include<stdio.h>

int main() {
    int n,fact=1,i=1;
    printf("Enter the number: \t");
    scanf("%d",&n);
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("The factorial of %d is %d \n",n,fact);
}