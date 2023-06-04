#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> prices;

    int buf;
    for (int i = 0; i < n; i++) {
        cin >> buf;
        if (i == 0) {prices.push_back(buf);continue;}
        int j = i - 1;
        while(prices[j] < buf && j > -1) j--;
        j = j == -1 ? 0 : j + 1;
        prices.insert(prices.begin() + j, buf);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % k == 0) continue;
        sum += prices[i];
    }

    cout << sum << endl;

    return 0;
}