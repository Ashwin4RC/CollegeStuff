#include<stdio.h>

int main() {
    int n,bin=0,i=1,j;
    printf("Enter then decimal number to convert to binary: \t");
    scanf("%d",&n);
    for(j=n;j>0;j/=2) {
        bin=bin+((n%2)*i);
        i=i*10;
        n/=2;
    }
    printf(" The binary equivalent is %d \n",bin);
}