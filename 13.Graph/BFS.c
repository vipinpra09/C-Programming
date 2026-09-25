
#include <stdio.h>
#define MAX 4
void bfs(int graph[MAX][MAX], int ver , int start){
    int queue[MAX];
    int visited[MAX] = {0};

    int front = 0;
    int rear = 0;

    visited[start] = 1;
    queue[rear] = start;
    rear++:

        while(front < rear){
        int current = queue[front];
        front++;
    printf("%d ",current);
    for(int i = 0 ; i < ver;i++){
        if(graph[current][i] == 1 && visited[i] = 0){
            visited[i] = 1;
            queue[rear] = i;
            rear++;
        }
    }
        }
}
int main() {
    int graph[MAX][MAX] = {0};
    graph[1][2] = 1;
    graph[2][1] = 1;
    
    graph[0][1] = 1;
    graph[1][0] = 1;
    
    graph[1][3] = 1;
    graph[3][1] = 1;

    bfs(graph,ver,0);
    return 0;
}
