#include <stdio.h>

int main() {
    int n,digit,dec=0,i=1,j,k=1;
    printf("Enter the binary number: \t");
    scanf("%d",&n);
    for(j=n;j>0;j=j/10) {
        digit=j%10;
        if(i!=1)
            k=k*2;
        dec=dec+(digit*k);
        i++;
    }
    printf("Decimal equivalent is: \t %d \n",dec);
    return 0;
}