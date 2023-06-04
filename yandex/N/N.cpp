#include <iostream>
#include <vector>
using namespace std;

int getKey() {int k; cin >> k; return --k;}

void dfs(vector<int> pk[], int visited[], int now, int* res) {
    visited[now] = 1;
    for (int v : pk[now])
        if (visited[v] == 0) dfs(pk, visited, v, res); else if (visited[v] > 0) (*res)++;
    visited[now] = -1;
}

int main() {
    int n, result = 0; cin >> n; vector<int> cl[n]; int visited[n];
    fill(visited, visited + n, 0);
    for (int i = 0; i < n; i++) cl[getKey()].push_back(i);
    for (int i = 0; i < n; i++) dfs(cl, visited, i, &result);
    cout << result;
}