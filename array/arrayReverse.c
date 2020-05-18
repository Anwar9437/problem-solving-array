#include<stdio.h>
int main(){
    int n,reverse = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements", n);
    for (int i = 0; i < n ; i++) {
        scanf("%d", &a[i] );
    }
    reverse=n-1;
    for (int j = reverse; j >=0 ; j--) {
        printf("%d ", a[j]);
    }

}