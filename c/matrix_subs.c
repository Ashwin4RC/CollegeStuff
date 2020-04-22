#include<stdio.h>

int main() {
    int n,i,j;
    printf("Enter the length or width of array \t");
    scanf("%d",&n);
    int a1[n][n],a2[n][n],ar[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("Enter element %d x %d of array A \t",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("Enter element %d x %d of array B \t",i,j);
            scanf("%d",&a2[i][j]);
            ar[i][j]=a1[i][j]-a2[i][j];
        }
    }
    printf("The substracted array is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d \t",ar[i][j]);
        printf("\n");
    }
}