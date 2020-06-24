#include<stdio.h>

void lowercase(char *a);

int main(){
    char a[100];
    gets(a);
    lowercase(a);
    printf("%s", a);
}
void lowercase(char *a){
    int i=0;
    while (a[i]!='\0'){
        if((a[i]>='A') && (a[i]<='Z')){
            a[i]= a[i] + 32;
        }
        i++;
    }
}

