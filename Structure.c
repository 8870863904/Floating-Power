#include<stdio.h>

struct Employee {
       int id;
       char name[50];
       int age;
       float salary;
};
int main() {
    struct Employee employees[100];
    int n;
    
    printf("Enter numbers of employees: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
            printf("\nEmployees %d ID: ",i+1);
            scanf("%d",&employees[i].id);
            
            printf("Name: ");
            scanf("%c",&employees[i].name);
            
            printf("Age: ");
            scanf("%d",&employees[i].age);
            
            printf("Salary: ");
            scanf("%f",&employees[i].salary);  
}

 printf("\nID\tName\t\Age\tSalary\n");
 for(int i=0;i<n;i++){
         printf("%d\t%-10s\t%d\t%.2f\n",employees[i].id,employees[i].name,employees[i].age,employee[i].salary;
         }
         return 0;
}
