#include<stdio.h>
#include<string.h>
struct report
{
    int roll;
    char name[20];
    float maths;
    float physics;
    float chemistry;
    float biology;
    float geology;
    float history;
    float total;
    char grade[20];

};
int main(){
    struct report r[10];
    for(int i=0;i<10;i++){
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&r[i].roll);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",r[i].name);
        printf("Enter the marks of student %d in maths: ",i+1);
        scanf("%f",&r[i].maths);
        printf("Enter the marks of student %d in physics: ",i+1);
        scanf("%f",&r[i].physics);
        printf("Enter the marks of student %d in chemistry: ",i+1);
        scanf("%f",&r[i].chemistry);
        printf("Enter the marks of student %d in biology: ",i+1);
        scanf("%f",&r[i].biology);
        printf("Enter the marks of student %d in geology: ",i+1);
        scanf("%f",&r[i].geology);
        printf("Enter the marks of student %d in history: ",i+1);
        scanf("%f",&r[i].history);
        r[i].total=((r[i].maths+r[i].physics+r[i].chemistry+r[i].biology+r[i].geology+r[i].history)*100)/600;
        if(r[i].total>90){
            strcpy(r[i].grade,"S");
        }
        else if(r[i].total>85){
            strcpy(r[i].grade,"A+");
        }
        else if(r[i].total>80){
            strcpy(r[i].grade,"A");
        }
        else if(r[i].total>70){
            strcpy(r[i].grade,"B");
        }
        else if(r[i].total>60){
            strcpy(r[i].grade,"C");
        }
        else if(r[i].total>50){
            strcpy(r[i].grade,"D");
        }
        else{
            strcpy(r[i].grade,"F");
        }
        
    }

    int n=1;
    do{
        int rolll;
        printf("entrer the roll number of student to display the report card: ");
        scanf("%d",&rolll);
        for(int i=0;i<10;i++){
            if(r[i].roll==rolll){
                printf("Roll number: %d\tName:%s\tmaths: %.2f\tphysics: %.2f\tchemistry: %.2f\tbiology: %.2f\tgeology: %.2f\thistory: %.2f\ttotal: %.2f\tgrade: %s\n",r[i].roll,r[i].name,r[i].maths,r[i].physics,r[i].chemistry,r[i].biology,r[i].geology,r[i].history,r[i].total,r[i].grade);
        int choice;
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d",&choice);
        if(choice==0){
            n=0;    
        }
        else if (choice==1){
            n=1;
        }
        else{
            printf("Invalid choice! Exiting the program.\n");
            n=0;
        }
            }
        }    
    }while(n==1);

}
