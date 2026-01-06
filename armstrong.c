// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int rem,digits = 0,sum = 0;
    //int org = n;
    int n1 = n;
    while(n!= 0){
        n=n/10;
        digits++;
    }
    while(n1!=0){
        rem = n1%10;
        sum = sum + pow(rem,digits);
        n1 = n1/10;
    }
    return sum;
}
int main() {
    int num = 0;
    int res = armstrong(num);
    if(res == num ){
        printf("Armstrong Number");
    }
    else{
        printf("Not a armstrong number");
    }
return 0;
}
