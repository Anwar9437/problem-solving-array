#include<stdio.h>
int main(){
    int a[30],n;
    printf("How Many Fibonacci Number:");
    scanf("%d", &n);
    a[0]=0;
    a[1]=1;
    for (int i = 2; i < n; i++) {
        a[i]= a [i-1] + a [i-2];
    }
    printf("\n");
    for (int j = 0; j < n ; j++) {
    printf("%d\t", a[j]);
    }
}

