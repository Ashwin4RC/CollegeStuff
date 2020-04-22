#include<stdio.h>

int main() {
    int i,up=0,low=0;
    char str[100];
    printf("Enter the string: \t");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z')
            up++;
        if(str[i]>='a' && str[i]<='z')
            low++;
    }
    printf("No: of uppercase letters: \t %d \n",up);
    printf("No: of lowercase letters: \t %d \n",low);    
}