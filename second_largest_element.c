#include<stdio.h>
int main(){
    int n, min, max1, max2;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n ; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max1 = max2 = a[0];
    for (int i = 0; i < n; i++) {
        if(min>a[i])
            min = a[i];
        else if (max1<a[i]){
            max2 = max1;
            max1 = a[i];
        }
    }

    printf("1st Maximum = %d", max1);
    printf("\n2nd Maximum = %d", max2);
    printf("\nMinimum = %d", min);
}

