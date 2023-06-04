#include <iostream>
#include <vector>
using namespace std;

void putPair(vector<int> * toPut) {int s1, s2;cin >> s1 >> s2;toPut[--s1].push_back(--s2);toPut[s2].push_back(s1);}
int reverseBranch(int branch) { return (branch == 1) ? 2 : 1;}

bool dfs(int now, vector<int>* studs, int* visited, int branch = 1){
    visited[now] = branch;
    for (int v : studs[now])
        if (visited[v] == branch ||
        (!visited[v] && !dfs(v, studs, visited, reverseBranch(branch)))) return false;
    return true;
}

bool startSearch(int n, vector<int>* studs, int* visited, bool isDev = true) {
    for (int i = 0; i < n && isDev; i++)
        if (!visited[i]) isDev = dfs(i, studs, visited);
    return isDev;
}

int main() {
    int n, m; cin >> n >> m; vector<int> studs[n]; int visited[n];
    fill(visited, visited + n, 0);
    for (int i = 0; i < m; i++) putPair(studs);
    cout << (startSearch(n, studs, visited) ? "YES" : "NO") << endl;
    return 0;
}