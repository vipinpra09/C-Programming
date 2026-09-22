#include <stdio.h>

int main() {
    // int r = 3;
    // int c = 3;
int graph[3][3]={0};
    
    graph[0][1] = 1;
    graph[1][0] = 1;
    
    graph[0][2] = 1;
    graph[2][0] = 1;
    
    graph[0][3] = 1;
    graph[3][0] = 1;

    for(int i = 0 ; i < 3;i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}
O/p:
  A B C
A 0 1 1         A-B,A-C
B 1 0 0         B-A
C 1 0 0         C-A
