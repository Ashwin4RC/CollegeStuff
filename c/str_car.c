#include<stdio.h>

int main() {
    char s1[200],s2[100];
    int i=0,j=0;
    printf("Enter the first string: \t");
    gets(s1);
    printf("Enter the second string: \t");
    gets(s2);
    while(s1[i]!='\0')
        i++;
    while(s2[j]!='\0') {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("Concatenated string is: \t %s",s1);
}