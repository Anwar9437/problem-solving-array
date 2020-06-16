#include<stdio.h>
int stringlenght(char *a);

int main(){
    char a[50];
    int count;
    gets(a);
    count = stringlenght(a);

    printf("%d", count);
}
int stringlenght(char *a){
    int i=0,count=0;
    while (a[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

