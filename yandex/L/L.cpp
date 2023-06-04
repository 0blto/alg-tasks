#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, k, cur;
    cin >> n >> k;
    deque<pair<int, int>> window;
    for (int i = 0; i < n; i++) {
        cin >> cur;
        if (!window.empty()) {
            if (window.back().second <= i - k) window.pop_back();
            while (!window.empty()) {
                if (window.front().first >= cur) window.pop_front();
                else break;
            }
        }
        window.emplace_front(cur, i);
        if (i > k - 2) cout << window.back().first << " ";
    }
    return 0;
}