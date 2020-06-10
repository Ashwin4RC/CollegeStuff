#include<stdio.h>

int gcd(int n1,int n2) {
    return n2==0 ? n1 : gcd(n2, n1 % n2);
}

int main() {
    int n1,n2;
    printf("Enter the numbers: \t");
    scanf("%d %d",&n1,&n2);
    printf("The gcd is %d \n",gcd(n1,n2));
    return 0;
}