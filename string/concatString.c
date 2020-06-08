#include<stdio.h>
int main(){
    char a[50],b[50];
    int i=0,count=0,j=0;
    printf("\nEnter two strings :");
    gets(a);
    gets(b);

    while(a[i]!='\0'){
        count++;
        i++;
    }
    while(b[j]!='\0'){

        a[count+j]=b[j];
        j++;
    }
    printf("%s", a);
}
