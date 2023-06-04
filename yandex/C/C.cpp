#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool isNumber(const string& st) {
    return (isdigit(st[0]) || st[0] == '-');
}
int main() {
    string line;
    vector<vector<string>> last;
    last.emplace_back();
    map<string, vector<int>> kapta;
    while(getline(cin,line)) {
        if (line.empty())break;
        if (line == "{") {
            last.emplace_back();
        } else if (line == "}") {
            for (const string& i : last.back()) kapta[i].pop_back();
            last.pop_back();
        } else {
            int eq = line.find('=');
            string right = line.substr(eq+1);
            string left = line.substr(0, eq);
            if (isNumber(right)) {
                kapta[left].push_back(stoi(right));
            } else {
                kapta[left].push_back((kapta.find(right) == kapta.end() || kapta[right].empty()) ? 0 : kapta[right].back());
                cout << kapta[left].back() << endl;
            }
            last.back().push_back(left);
        }
    }
    return 0;
}