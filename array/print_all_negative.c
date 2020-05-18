#include<stdio.h>
int main(){
    int num;
    printf(" How many number :");
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num ; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nAll negative elements in array are : ");
    for (int i = 0; i < num; i++) {
        if(a[i]<0)
        {
            printf("%d\t", a[i]);
        }
    }

}
