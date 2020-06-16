#include<stdio.h>

void lowercase(char *a);

int main(){
    char a[100],b[60];
    gets(a);
    lowercase(a);
    printf("%s", a);
}

void lowercase(char *a){
    int i=0,count=0;

    while (a[i]!='\0'){
        count++;
        i++;
    }
    for (int j = 0; j < count ; j++) {
        if((a[j]>='A') && (a[j]<='Z')){
            a[j]= a[j] + 32;
        }
    }


}

