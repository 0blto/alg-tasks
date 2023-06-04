#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    int n, k, p, answer = 0;
    cin >> n >> k >> p;
    priority_queue<pair<int, int>> pq;
    deque<int> dq[n];
    set<int> cur;
    int order[p];
    for (int i = 0; i < p; i++) {cin >> order[i];dq[order[i]-1].push_front(i);}
    for (int i = 0; i < p; i++) {
        dq[order[i]-1].pop_back();
        if (cur.find(order[i]) == cur.end()) {if (cur.size() >= k) {cur.erase(pq.top().second);pq.pop();}++answer;cur.insert(order[i]);}
        pq.emplace(dq[order[i]-1].empty() ? 1000000 : dq[order[i]-1].back(), order[i]);}
    cout << answer << endl;
    return 0;
}