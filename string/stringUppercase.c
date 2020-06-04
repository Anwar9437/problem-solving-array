#include<stdio.h>
int main(){
    char a[100];
    int i=0,count=0;
    gets(a);
    while (a[i]!='\0'){
        count++;
        i++;
    }
    for (int j = 0; j < count ; j++) {
        if(a[j]>='a' && a[j]<='z'){
            a[j]= a[j] - 32;
        }

    }
    printf("%s", a);

}

