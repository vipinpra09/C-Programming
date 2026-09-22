#include <stdio.h>
int graph[3][3]= {0};
void inisializeGraph(int graph[3][3],int m,int n){
    graph[m][n]=1;
    graph[n][m]=1;
}
int main() {
    
      inisializeGraph(graph,0,2);
    for(int i = 0 ; i < 3;i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    // int r = 3;
    // int c = 3;
// int graph[3][3]={0};
    
//     graph[0][1] = 1;
//     graph[1][0] = 1;
    
//     graph[0][2] = 1;
//     graph[2][0] = 1;
    
//     graph[0][3] = 1;
//     graph[3][0] = 1;
}
