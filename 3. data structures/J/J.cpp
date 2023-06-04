#include <iostream>
#include <deque>

using namespace std;

int getting() {int i;cin >> i;return i;}

int main() {
    int n;
    cin >> n;
    deque<int> l, r;
    char sym;
    for (int i = 0; i < n; i++) {
        cin >> sym;
        if (sym == '-') {cout << l.front() << endl;l.pop_front();}
        else {
            if (sym == '+') r.push_back(getting());
            else r.push_front(getting());
        }
        if (l.size() < r.size()) {
            l.push_back(r.front());
            r.pop_front();
        } else if (r.size() < l.size()) {
            r.push_front(l.back());
            l.pop_back();
        }
    }
    return 0;
}