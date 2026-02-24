#include <stdio.h>
// count set bit
int smallestNumber(int n) {
   int x = 1;
   while(x - 1 < n){
    x = x<<1;
   } 
   return x - 1;
}

int main() {
  int res =smallestNumber(62);
  printf("%d",res);
    return 0;
}
