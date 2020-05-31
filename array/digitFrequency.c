#include<stdio.h>
#include<string.h>
int main(){
    char ar[1000],i;
    int count;
    gets(ar);

    for ( i = 48; i <=57 ; i++) {
        count=0;
        for (int j = 0; j < strlen(ar); j++) {
            if(ar[j]==i)
            count++;
        }
        printf("%d ", count);

    }
}
