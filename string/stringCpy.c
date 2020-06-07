#include<stdio.h>
int main(){
    char a[50],b[50];
    int i=0,j=0;;
    gets(a);
    gets(b);
    while (a[i] != '\0'){
        a[i]='\0';
        i++;
    }
    while (b[j] != '\0'){
        a[j]=b[j];
        j++;
    }
    printf("%s", a);
}
