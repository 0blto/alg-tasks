#include <iostream>
#include <vector>
using namespace std;

void reader(int * place, int * xl, int * xr) {cin >> *place;if (*place < *xl) *xl = *place;if (*place > *xr) *xr = *place;}

void dfs(int n, const vector<vector<bool>> & graph, int * visited, int * ctr, bool isReversed, int now = 0) {
    visited[now] = 1;
    (*ctr)++;
    for (int i = 0; i < n; i++) if ((isReversed ? graph[i][now] : graph[now][i]) && !visited[i]) dfs(n, graph, visited, ctr, isReversed, i);
}

int dfsBinWrapper(int xl, int xr, int n, int * matrix) {
    int visited[n];
    while (xl < xr) {
        int m = (xr + xl) / 2;
        vector<vector<bool>> binMatrix;
        for (int i = 0; i < n; i++) {binMatrix.emplace_back();for (int j = 0; j < n; j++) binMatrix[i].push_back(matrix[i * n + j] <= m);}
        fill(visited, visited + n, 0);
        int ctr = 0;
        dfs(n, binMatrix, visited, &ctr, false);
        fill(visited, visited + n, 0);
        int rctr = 0;
        dfs(n, binMatrix, visited, &rctr, true);
        if (ctr == n && rctr == n) xr = m;
        else xl = m + 1;
    }
    return xl;
}

int main() {
    int n, xl = 1000000000, xr = -1; cin >> n; int matrix[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) reader(&matrix[i][j], &xl, &xr);
    cout << dfsBinWrapper(xl, xr, n, &matrix[0][0]) << endl;
}