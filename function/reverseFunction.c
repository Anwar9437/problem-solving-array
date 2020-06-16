#include<stdio.h>
void reverse(char *str1, char *str2);
int main() {
    char str1[100];
    char str2[100];
    gets(str1);

    reverse(str1,str2);
    printf("%s", str2);

}
void reverse(char *str1, char *str2){

    int count=0,i=0,rev;

    while (str1[i] != '\0'){

        count++;
        i++;
    }
    rev=count-1;

    for (int j = 0, i=rev; i>=0  ;i--, j++) {
        str2[j]=str1[i];
    }
}
