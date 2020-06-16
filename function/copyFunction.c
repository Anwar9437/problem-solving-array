#include<stdio.h>
void copy(char *a, char *b);
int main(){
    char a[50],b[50];

    gets(a);
    gets(b);
    copy(a,b);
    printf("%s", a);
}
void copy(char *a, char *b){
    int i=0,j=0;;

    while (a[i] != '\0'){
        a[i]='\0';
        i++;
    }
    while (b[j] != '\0'){
        a[j]=b[j];
        j++;
    }
}