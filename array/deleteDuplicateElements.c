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
               array[j]=-1;
            }

        }

    }
   printf("\nArray elements after deleting duplicates : ");
    for (int i = 0; i < size ; i++) {
        if(array[i]!=-1){
            printf("%d\t", array[i]);
        }

    }

}