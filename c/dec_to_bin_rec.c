#include<stdio.h>

int toBin(int n){
    return n==0 ? 0 : (n%2+10*toBin(n/2)); 
}

int main() {
    int n;
    printf("Enter the decimal number: \t");
    scanf("%d",&n);
    printf("The binary equivalent is %d \n",toBin(n));
    return 0;
}