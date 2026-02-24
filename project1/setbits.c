#include <stdio.h>
// count set bit
// brian kernighan algorithm

int main() {
  int n = 13;
  int count = 0;
  while(n){
      n = n & (n-1);
      count++;
  }
  printf("%d",count);
    return 0;
}
