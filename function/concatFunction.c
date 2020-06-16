#include<stdio.h>
void concat(char *a, char *b);
int main(){
    char a[50],b[50];
    printf("Enter two strings :");
    gets(a);
    gets(b);
    concat(a,b);
    printf("%s", a);
}
void concat(char *a, char *b){
    int i=0,count=0,j=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    while(b[j]!='\0'){

        a[count+j]=b[j];
        j++;
    }
}