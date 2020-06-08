#include<stdio.h>

int gcd_checker(int n1,int n2){
    int i,gcd;
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    return gcd;
}

int main() {
    int n1,n2;
    printf("Enter two numbers: \t");
    scanf("%d %d",&n1,&n2);
    printf("Greatest common divisor is %d \n",gcd_checker(n1,n2));
    return 0;
}