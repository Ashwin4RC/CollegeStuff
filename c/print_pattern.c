/* Print the pattern
1
1 2
1 2 3
1 2 3 4
4 3 2 1
3 2 1
2 1
1 
*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++) {
        for(j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}