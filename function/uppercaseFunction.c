#include<stdio.h>
void uppercase(char a[50]);
int main(){
    char a[100];
    gets(a);
    uppercase(a);
    printf("%s", a);
}
void uppercase(char a[50]){
    int i=0;
    while (a[i]!='\0'){
        if(a[i]>='a' && a[i]<='z'){
            a[i]= a[i] - 32;
        }
        i++;
    }
}
