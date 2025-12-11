#include <stdio.h>

#define MAX(a, b)     ((a)>(b)? (a) : (b))
#define MAX1(a, b, c) MAX(MAX(a, b), c)
#define MAX2(a, b, c, d) MAX(MAX1(a, b, c), d)

int main() {
    int x = 101 , y = 25, z = 15, v=34;
    
    printf("Three numbers: x = %d, y = %d, z = %d\n", x, y, z);
    printf("Maximum = %d\n", MAX2(x, y, z,v));
    
    return 0;
}