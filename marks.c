#include<stdio.h>

int main() {
    int n, sum = 0;
    char gender;
    int mark[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &mark[i]);

    }


    scanf(" %c", &gender);

    if (gender == 'g') {
        for (int i = 1; i < n; i = i + 2) {
            sum = sum + mark[i];
        }
    } else if (gender == 'b') {
        for (int i = 0; i < n; i = i + 2) {
            sum = sum + mark[i];
        }
    }
    printf("%d", sum);


}