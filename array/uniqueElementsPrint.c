#include<stdio.h>
int main() {
    int array[100], n,count, unique[100];

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        unique[i]=-1;
    }

    for (int i = 0; i < n; i++) {

        count=1;
        for (int j = i + 1; j < n; j++) {
                if (array[i]==array[j]){
                    count++;
                    unique[j]=0;
                }
        }
        if(unique[i] != 0){
            unique[i]=count;
        }
    }
    for (int i = 0; i < n; i++) {
        if(unique[i] == 1){
            printf("%d\n", array[i]);
        }

    }

}