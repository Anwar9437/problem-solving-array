#include<stdio.h>
#include<string.h>
int main() {
    char a[900];
    int num;
    scanf("%d", &num);
    for (int i = 0; i <num; i++) {
        scanf("%s", &a[i]);

        for (int i = 0; i <= strlen(a); i++) {
            if (i % 2 == 0) {
                printf("%c", a[i]);
            }
        }
        printf(" ");

        for (int i = 0; i <= strlen(a); i++) {
            if (i % 2 == 1) {
                printf("%c", a[i]);
            }

        }
        printf("\n");
        i--;
    }

}