#include<stdio.h>
int main(){
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num; i++) {
      scanf("%d", &a[i]);
    }
    for (int j = 0; j < num; j++) {
        printf("%d\t", a[j]);
    }

}

