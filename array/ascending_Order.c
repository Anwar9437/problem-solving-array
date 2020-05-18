#include<stdio.h>
int main(){
    int n,a[20],temp=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n ; i++) {
        for (int j = i+1; j < n ; j++) {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%d\t", a[k]);
    }

}


