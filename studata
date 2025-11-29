#include <stdio.h>
#include <stdlib.h>

struct stu {
    char name[15];
    char id[10];
};

int main() {
        int n;
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    int m, d, y;

    printf("Enter Date: ");
    scanf("%d", &d);

    printf("Enter Month: ");
    scanf("%d", &m);

    printf("Enter Year: ");
    scanf("%d", &y);


    struct stu *s1 = malloc(n * sizeof(struct stu));
    if (!s1) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter student name: ");
        scanf("%s", s1[i].name);

        printf("Enter student id: ");
        scanf("%s", s1[i].id);

        printf("\n");
    }

    FILE *sd = fopen("data4.txt", "a");
    fprintf(sd, "<-----------Student detail:----------->\n");
    fprintf(sd, "Date: %d/%d/%d\n", d, m, y);

    for (int i = 0; i < n; i++) {
        fprintf(sd, "Name: %s\n", s1[i].name);
        fprintf(sd, "ID: %s\n\n", s1[i].id);
    }

    fclose(sd);
    free(s1);
    return 0;
}
