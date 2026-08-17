/*#include <stdio.h>

int rev(int n) {
    // base case: single digit
    if (n < 10)
        return n;

    // find number of digits in n
    int digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    return (n % 10) * (int)pow(10, digits - 1) + rev(n / 10);
}

int main() {
    printf("%d\n", rev(123));
    return 0;
} */
#include <stdio.h>
int revv(int n,int rev){
    if(n == 0) 
    return rev;
    else
    return revv(n/10, rev*10 + n%10);
}
int main(){
    printf("%d",revv(123,0));
}
