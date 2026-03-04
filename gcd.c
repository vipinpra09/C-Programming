#include <stdio.h>

/* Euclidean algorithm: O(log(min(a,b))) instead of O(min(a,b)) */
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int x = 12, y = 19, z = 36;
    int result = gcd(gcd(x, y), z);
    printf("%d", result);
    return 0;
}
