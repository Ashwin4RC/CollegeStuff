#include<stdio.h>

int main() {
    long int n;
    double i,sum=0.0;
    printf("Enter the number: \t");
    scanf("%li",&n);
    for(i=1.0;i<=n;i++) {
        sum=sum+(1/i);
    }
    printf("Sum of reciprocals upto %li is %lf",n,sum);
}