
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee {
    char name[20];
    char id[10];
    int salary;
    char department[15];
};
int main() {
    FILE *fp;
    fp = fopen("Studata.txt", "a");

    if(fp == NULL) {
        printf("File opening error!");
        return 1;
    }
    struct employee e1[2];
    for(int i = 0; i < 2; i++){
        printf("Enter employee name: ");
        scanf("%s", e1[i].name);

        printf("Enter employee ID: ");
        scanf("%s", e1[i].id);

        printf("Enter salary (INR): ");
        scanf("%d", &e1[i].salary);

        printf("Enter department: ");
        scanf("%s", e1[i].department);
    }
    for(int i = 0; i < 2; i++){
        fprintf(fp,"\nEmployee %d Details:\n", i+1);
        fprintf(fp,"Name: %s\n", e1[i].name);
        fprintf(fp,"ID: %s\n", e1[i].id);
        fprintf(fp,"Salary: %d\n", e1[i].salary);
        fprintf(fp,"Department: %s\n", e1[i].department);
    }
    fclose(fp);
    return 0;
}