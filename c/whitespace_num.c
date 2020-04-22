#include<stdio.h>

int main() {
    int i,n=0;
    char str[200];
    printf("Enter the sentence: \t");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            n++;
    }
    printf("Number of whitespaces: \t %d \n",n);
}