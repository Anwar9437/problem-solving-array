#include<stdio.h>
int main() {
    int array[100], n, count = 0, freq[100];

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
          count = 1;
        if (array[i] != -1) {

            for (int j = i + 1; j <=n; j++) {
                if (array[i] == array[j]) {

                    count++;

                    array[j] = -1;
                }
                {
                    freq[i] = count;
                    }
            }

        }
    }

    for (int k = 0; k < n ; k++) {
        if(array[k]!=-1){
            printf("no of %d is %d\n", array[k],freq[k]);
        }
        
    }
}