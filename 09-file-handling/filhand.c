
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
     FILE *fp;
     fp =fopen("data1.txt","w");
     fprintf(fp,"Hello Vipin ");
    fclose(fp);

    return 0;
}