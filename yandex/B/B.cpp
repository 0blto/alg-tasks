#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int current = a, last = a;
    for (int i = 0; i < k; i++) {
        current = b * current - c;
        current = current > d ? d : (current < 0 ? 0 : current);
        if (current == 0 || current == last) break;
        last = current;
    }
    cout << current << endl;
    return 0;
}
