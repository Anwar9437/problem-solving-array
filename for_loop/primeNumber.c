#include<stdio.h>
int main(){
    int l,u,i,x;
    printf("Enter two numbers :");
    scanf("%d%d", &l, &u);
    for ( x = l+1; x <=u-1; x++) {
        for ( i = 2 ; i < u ; i++)
            if (x%i==0)
                break;
        if(i==x)
            printf("%d ", x);
    }
}
