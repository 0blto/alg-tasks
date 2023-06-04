#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int repeated = 1, start = 1, length = 1, maxStart = 1, maxLength = 1;
    for (int i = 0; i < n; i++) {

        cin >> a[i];

        if (i == 0) continue;

        repeated = (a[i - 1] == a[i]) ?
                repeated + 1 : 1;

        if (repeated != 3) {
            ++length;
            if (maxLength < length) {
                maxLength = length;
                maxStart = start;
            }
            continue;
        }
        repeated = 2;
        start = i;
        length = 2;

    }

    cout << maxStart << " " << maxStart + maxLength - 1 << endl;
    return 0;
}
