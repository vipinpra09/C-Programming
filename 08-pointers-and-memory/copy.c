// Online C compiler to run C program online
#include <stdio.h>

int main() {
    FILE *f1,*f2;
    char ch;
    f1 = fopen("data.txt","r");
    
    if(f1 == NULL){
        printf("data.txt file not found....");
        
    }
    else{
        f2 = fopen("copy.txt","a");
        while((ch = fgetc(f1)) != EOF){
            fputc(ch,f2);
        }
    }
    fprintf(f2,"\n");
   fclose(f2);
    return 0;
}
