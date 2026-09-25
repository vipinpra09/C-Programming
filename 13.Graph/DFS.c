#include <stdio.h>
#define MAX 4

void dfs(int graph[MAX][MAX], int ver, int current, int visited[]) {
    visited[current] = 1;

    printf("%d ", current);

    for (int i = 0; i < ver; i++) {
        if (graph[current][i] == 1 && visited[i] == 0) {
            dfs(graph, ver, i, visited);
        }
    }
}

int main() {
    int graph[MAX][MAX] = {0};
    int ver = MAX;
    int visited[MAX] = {0};

    graph[1][2] = 1;
    graph[2][1] = 1;

    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    dfs(graph, ver, 0, visited);

    return 0;
}
