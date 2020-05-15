#include<stdio.h>

#include <math.h>

int main()
{
    float price[50];
    int i,number;
    float sum=0, mean, varsum =0, differ,variance, SD;
    printf("\nPlease Enter the N Value\n");
    scanf("%d", &number);
    printf("\nPlease Enter %d real numbers\n", number);
    for(i=0; i<number ; i++)
    {
        scanf("%f", &price[i]);
    }
    for(i=0 ; i<number ; i++)
    {
        sum = sum + price[i];
    }
    mean = sum / (float) number;
    for(i=0 ; i< number ; i++){
        differ = price[i] - mean;
        varsum = varsum + pow(differ,2);
    }
    variance = varsum / (float) number;
    SD = sqrt(variance);
    printf("Mean %.2f\n", mean);
    printf("Variance %.2f\n", variance);
    printf("Standard Deviation %.2f\n", SD);

}

