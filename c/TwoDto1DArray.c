#include<stdio.h>

int main() {
    int n1,n2,total,i;
    printf("Enter the size of first array: \t");
    scanf("%d",&n1);
    printf("\n Enter the size of the second array: \t");
    scanf("%d",&n2);
    total=n1+n2;
    int a1[n1],a2[n2],ar[total];
    for(i=0;i<n1;i++) {
        printf("Enter element %d of 1st array \t",i+1);
        scanf("%d",&a1[i]);
        ar[i]=a1[i];

    }
    for(i=0;i<n2;i++) {
        printf("Enter element %d of 2nd array \t",i+1);
        scanf("%d",&a2[i]);
        ar[i+n1]=a2[i];
    }
    printf("The clubbed array is \t");
    for(i=0;i<total;i++)
        printf("%d \t",ar[i]);
}