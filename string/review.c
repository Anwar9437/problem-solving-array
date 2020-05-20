#include<stdio.h>
#include<string.h>

int main() {

    int num;
    scanf("%d", &num);
    while (num) {
        char input[100];
        scanf("%s", &input);
        int i = 0;
        while (input[i] != '\0') {
            if (i % 2 == 0) {
                printf("%c", input[i]);
            }

            i++;
        }
        i = 0;
        printf(" ");

        while (input[i] != '\0') {
            if (i % 2 != 0) {
                printf("%c", input[i]);
            }
            i++;
        }
        num--;
        printf("\n");

    }

}