#include<stdio.h>
int main(){
    int num;
    printf("Enter the size of an array \n");
    scanf("%d", &num);
    int a[num];
    printf("Enter the elements of the array \n");
    for (int i = 0; i < num ; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEven number in the array are :");
    for (int i = 0; i < num; ++i) {
        if(a[i] %2==0){
            printf("%d\t", a[i]);
        }
    }
    printf("\nOdd numbers in the array are :");
    for (int i = 0; i < num; ++i) {
        if(a[i]%2 == 1){
            printf("%d\t", a[i]);
        }

    }
}

