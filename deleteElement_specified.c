#include<stdio.h>
int main() {
    int array[100], n, position;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the location where you wish to delete an element\n");
    scanf("%d", &position);
    for (int j = position-1 ; j < n-1  ; j++) {
        array[j] = array[j+1];
    }
    for (int k = 0; k < n-1 ; k++) {
        printf("%d\n", array[k]);
    }


}