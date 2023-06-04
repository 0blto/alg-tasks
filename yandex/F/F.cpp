#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool comparator(const string& s1, const string& s2) {return s2 + s1 < s1 + s2;}

int main() {
    string line;
    vector<string> thebigone;
    while(cin >> line) {
        if (thebigone.empty()) {thebigone.push_back(line); continue;}
        for (auto i = thebigone.begin(); i < thebigone.end(); i++) {
            if (comparator(line, *i)) {thebigone.insert(i, line);break;}
            if (i == thebigone.end() - 1) {thebigone.push_back(line); break;}
        }
    }
    for (const auto & i : thebigone) cout << i;
    return 0;
}