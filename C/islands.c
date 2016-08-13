#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int posx[] = {1, -1, 0, 0};
int posy[] = {0, 0, 1, -1};


void mark(char grid[4][4], int gridRowSize, int gridColSize, bool** visited, int i, int j) {
    if(grid[i][j] == '0' || visited[i][j]) return;
    visited[i][j] = true;

    for(int k = 0; k < 4; k++) {
        int x = posx[k] + i;
        int y = posy[k] + j;
        if(x >= 0 && x < gridRowSize && y >= 0 && y < gridColSize) {
            mark(grid, gridRowSize, gridColSize, visited, x, y);
        }
    }
}

int numIslands(char grid[4][4], int gridRowSize, int gridColSize) {
    int result = 0;
    bool** visited = (bool **)malloc(gridRowSize * sizeof(bool));
    for(int i = 0; i < gridRowSize; i++) {
        visited[i] = (bool *)malloc(gridColSize * sizeof(bool));
        memset(visited[i], 0, sizeof(bool) * gridColSize);
    }
    for(int i = 0; i < gridRowSize; i++) {
        for(int j = 0; j < gridColSize; j++) {
            if(grid[i][j] == '1' && !visited[i][j]) {
                result++;
                mark(grid, gridRowSize, gridColSize, visited, i, j);
            }
        }
    }
    return result;
}

int main() {
    char grid[4][4] = {"1000", "0100", "0010", "0001"};
    int result = numIslands(grid, 4, 4);
    printf("%d\n", result);
    return 0;
}
