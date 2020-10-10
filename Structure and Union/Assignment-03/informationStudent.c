#include<stdio.h>
struct student{
        int roll;
        char name[100], address[100];
        int age;
};

void studentDetails(struct student s [], int num, int detalis){
        int i;
        printf("\n student details:\n ");
            for( i=0; i<num; i++){
                    if(s[i].roll==detalis){
                        printf("\n Student roll %d \n Student name : %s \n Student age: %d \n Student address: %s ", s[i].roll , s[i].name , s[i].age, s[i].address );
                        printf("\n");
                    }
                    else if (s[i].roll!=detalis){
                        printf("\n");
                        printf("\t\tNot found !!!");
                        break;
                    }
            }

}

void studentAge( struct student s[], int num ){
        int i;

        printf("\n student name with age have 14: \n ");
            for( i=0; i<num; i++){
                if(s[i].age== 14){
                    printf("Name : %s \t Age :%d ", s[i].name, s[i].age);
                    printf("\n");
                }
            }
}
void studentEvenroll( struct student s[], int num ){
        int i;

        printf("\n The names of all the students having even roll no.\n ");
            for( i=0; i<num; i++){
                if(s[i].roll%2==0){
                    printf("Name : %s \t Roll :%d ", s[i].name, s[i].roll);
                    printf("\n");
                }
            }
}



int main(){
        int i,num,detalis;
        struct student s[100];

        printf("Enter  student number:");
        scanf("%d", &num);

            for(i=0; i<num ; i++){
                    printf("%d.Enter student roll:", i+1);
                    scanf("%d", &s[i].roll);
                    printf("Enter student Name:");
                    getchar();
                    gets(s[i].name);
                    printf("Enter student Age:");
                    scanf("%d", &s[i].age);
                    printf("Enter student Address:");
                    getchar();
                    gets(s[i].address);
            }

            for( i=0; i<num; i++){
                printf("\n %d. student roll %d \n student name : %s \n student age: %d \n student address: %s ",i+1 , s[i].roll , s[i].name , s[i].age, s[i].address );
            }


       studentAge(s, num);
       studentEvenroll(s, num);
       printf("\n\n");

     printf(" Enter Student Roll (Details)");
     scanf("%d", &detalis);

     studentDetails(s,num,detalis);
     return 0;
}
