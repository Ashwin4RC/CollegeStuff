#include<stdio.h>

int dig(int n) {
    return n==0 ? 0 : dig(n/10)+1;
}

int main() {
    int n;
    printf("Enter the number: \t");
    scanf("%d",&n);
    printf("The no:of digits is %d \n",dig(n));
    return 0;
}