#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int s[n];
    for (int i = 0; i < n; i++) {cin >> s[i];}
    if (k == 1) {cout << 0 << endl;return 0;}
    int xl = 1, xr = s[n-1] - s[0], m = xr;
    while (xl + 1 < xr) {
        int si = 0, cter = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] - s[si] >= m) {
                si = i;
                cter++;
                if (cter >= k) break;
            }
        }
        if (cter >= k) xl = m;
        else xr = m;
        m = (xl+xr)/2;
    }
    cout << xl << endl;
    return 0;
}