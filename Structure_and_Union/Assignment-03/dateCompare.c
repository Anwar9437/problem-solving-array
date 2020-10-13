#include<stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct date d1,d2;
int main(){
        printf("enter 1st date (day-month-year):");
        scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
        printf("enter 2nd date (day-month-year):");
        scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

        printf("%d %d %d", d1.day, d1.month, d1.year);
        printf("\n");
        printf("%d %d %d", d2.day, d2.month, d2.year);

        if(d1.day==d2.day && d1.month == d2.month && d1.year== d2.year ){
            printf("\n\tDates are equal");
        }
        else
            printf("\n\tDate are not  equal");

        return 0;
}
