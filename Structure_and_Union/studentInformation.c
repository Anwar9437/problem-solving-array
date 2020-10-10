#include<stdio.h>

int main(){
        int i,num;

        struct student{
        int id;
        char name[100];
        float cgpa;
        };
        struct student s[100];

        printf("Enter  student number:");
        scanf("%d", &num);

            for(i=0; i<num ; i++){
                    printf("Enter student Id:");
                    scanf("%d", &s[i].id);
                    printf("Enter student Name:");
                    getchar();
                    gets(s[i].name);
                    printf("Enter student CGPA:");
                    scanf("%f", &s[i].cgpa);
            }

            for( i=0; i<num; i++){
                printf("\n %d. student id %d \n student name : %s \n student CGPA: %.2f",i+1 , s[i].id , s[i].name , s[i].cgpa );
                printf("\n");
            }
}
