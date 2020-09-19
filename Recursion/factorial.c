#include<stdio.h>
int factorial (int x);
int main(){
         int fact, num, result;
         printf("input number:\n");
         scanf("%d", &num);
         result = factorial (num);
         printf("%d", result);
 }
 int factorial (int x){
        int r = 1;
        if (x==1){
            return 1;
        }
        else
            r = x * factorial (x-1);
            return r;
}
