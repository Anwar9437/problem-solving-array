#include<stdio.h>
int main() {
    int array[100], n, count, freq[100];

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i <n ; i++) {
        for (int j = i+1; j < n; j++) {
            if(array[i]==array[j]){
                count++;
                freq[i]=count;
                printf("Frequency %d = %d\n", array[i],freq[i]);
            }
        }

    }

}