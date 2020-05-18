#include<stdio.h>
int main() {
    int array[100], size, count=0;

    printf("Enter number of elements in array\n");
    scanf("%d", &size);
    printf("Enter %d elements", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size ; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i]==array[j]){
                count++;
                break;
            }

        }

    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
}