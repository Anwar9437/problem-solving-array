#include<stdio.h>
int main(){
    int i=0,count=0;
    char a[50];
    gets(a);
    while (a[i]!='\0'){
        count++;
        i++;
    }
    printf("%d", count);

}

