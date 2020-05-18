#include<stdio.h>
int main(){
    int num,c=0;
    printf("Enter size of the array : ");
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; i++) {
        if(a[i]<0){
            c++;
        }
    }
    printf("\nTotal negative elements in array = %d", c);
}