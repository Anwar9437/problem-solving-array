#include<stdio.h>
int main(){
    char a[100];
    int i=0;
    gets(a);
    while (a[i]!='\0'){
        if((a[i]>='A') && (a[i]<='Z')){
            a[i]= a[i] + 32;
        }
        i++;
    }
    printf("%s", a);
}