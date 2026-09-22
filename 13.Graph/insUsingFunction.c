#include <stdio.h>
int graph[3][3]= {0};
void addEdges(int graph[3][3],int m,int n){
    graph[m][n]=1;
    graph[n][m]=1;
}

void displayGraph(int graph[3][3]){
    for(int i = 0 ; i < 3;i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}
int main() {
    
      addEdges(graph,0,2);
      displayGraph(graph);
    
}
