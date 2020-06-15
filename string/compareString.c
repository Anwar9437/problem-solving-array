#include<stdio.h>

int main() {
    char str1[30], str2[30];
    int i, length1 = 0, length2 = 0,count = 0;

    printf("Enter two strings :");
    gets(str1);
    gets(str2);
    i = 0;
    while (str1[i] != '\0') {
        length1++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        length2++;
        i++;
    }
    if (length1 == length2) {
        i = 0;
        while (str2[i] != '\0') {

            if (str1[i] == str2[i]) {
                count++;
            }
            else if (str1[i] != str2 [i]) {
                printf("2 string are not same ");
                break;
            }
            i++;
        }
        if(length1 == count) {
            printf("2 string are same");
        }
    }
    else
        printf("2 string are not same");
}