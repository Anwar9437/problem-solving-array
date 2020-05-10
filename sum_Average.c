#include<stdio.h>
int main(){
    int n;
    float sum=0,average;
    printf(" How many numbers :");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n ; i++) {
        printf(" %d. Enter number  :", i+1 );
        scanf("%f", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    for (int i = 0; i < n; i++) {
        printf(" %d. Enter number : %f \n", i+1, a[i]);

    }
    printf("\n");
    average = sum / n;
    printf(" Average = %.2f", average);
}