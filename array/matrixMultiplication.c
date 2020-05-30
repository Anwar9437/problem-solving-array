#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],column1,row1,column2,row2,sum=0;

    printf("Enter A matrix Row and column :");
    scanf("%d%d", &row1, &column1);

    printf("Enter B matrix Row and column :");
    scanf("%d%d", &row2, &column2);

    if(column1==row2) {

        printf("input  matrix A:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                printf("A[%d][%d]", i, j);
                scanf("%d", &a[i][j]);

            }

        }

        printf("input  matrix B:");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                printf("B[%d][%d]", i, j);
                scanf("%d", &b[i][j]);

            }

        }
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                for (int k = 0; k < column1; k++) {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j]=sum;
                sum=0;

            }

        }
        printf("\n\n A matrix:\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");

        }
        printf("\n\n B matrix:\n");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                printf("%d\t", b[i][j]);
            }
            printf("\n");

        }

        printf("\n\nmultiplication matrix:\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }

    } else
        printf("!!!Again input A matrix and B matrix");

}

