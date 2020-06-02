#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers : \t");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b) {
        if(a<=c)
            printf("%d is the smallest \n",a);
        else
            printf("%d is the smallest \n",c);
    }
    else {
        if(b<=c)
            printf("%d is the smallest \n",b);
        else
            printf("%d is the smallest \n",c);
    }
    return 0;
}