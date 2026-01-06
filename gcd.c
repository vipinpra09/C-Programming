#include <stdio.h>

int main() {
    int x = 12,y= 19,z = 36;
    int gcd = 1;
    for(int i = 1;i<= x && i<=y && i<=z;i++){
        if(x%i== 0&& y%i== 0&& z%i== 0){
            gcd = i;
        }
    }
    printf("%d",gcd);
    return 0;
}
