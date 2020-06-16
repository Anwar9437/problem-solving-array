#include<stdio.h>
void uppercase(char a[50]);
int main(){
    char a[100];
    gets(a);
    uppercase(a);

    printf("%s", a);
}
void uppercase(char a[50]){
    int i=0,count=0;
    while (a[i]!='\0'){
        count++;
        i++;
    }
    for (int j = 0; j < count ; j++) {
        if(a[j]>='a' && a[j]<='z'){
            a[j]= a[j] - 32;
        }

    }
}
