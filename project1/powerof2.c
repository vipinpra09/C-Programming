#include <stdio.h>
// check if num is power of two

int main() {
    int n = 8;
    if(n > 0 && (n & (n- 1) ) == 0){
        printf("Yes");
    }
    return 0;
}
