#include<stdio.h>
int main() {
    int array[100], n, position, value;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the location where you wish to insert an element\n");
    scanf("%d", &position);
    printf("Enter the value to insert\n");
    scanf("%d", &value);
    for (int j = position - 1; j < n; j++)
        array[j + 1] = array[j];
        array[position - 1] = value;

    for (int j = 0; j <=n; j++)
        printf("%d\n", array[j]);

    return 0;
}