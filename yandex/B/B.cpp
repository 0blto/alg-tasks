#include <iostream>
#include <vector>

using namespace std;

int main() {
    string zoo;
    cin >> zoo;
    vector<int> traps, animals;
    vector<char> last;

    int cAnim = 0, cTrap = 0;
    int answers[zoo.length() / 2];

    for (char el : zoo) {
        if (isupper(el)) {traps.push_back(++cTrap);} else {animals.push_back(++cAnim);}
        last.push_back(el);
        if (!animals.empty() && !traps.empty() && last.size() > 1) {
            char lst = last.back(), pre = last[last.size() - 2];
            if ((tolower(lst) == tolower(pre)) &&
                    ((islower(lst) && isupper(pre)) || (islower(pre) && isupper(lst)))) {
                answers[traps.back() - 1] = animals.back();
                animals.pop_back();
                traps.pop_back();
                last.pop_back();
                last.pop_back();
            }
        }

    }

    string ans = (traps.empty() && animals.empty()) ?
                 "Possible" : "Impossible";
    cout << ans << endl;

    if (traps.empty() && animals.empty()) {
        for (int i = 0; i < zoo.length() / 2; i++) {
            cout << answers[i] << " ";
        }
    }

    return 0;
}
