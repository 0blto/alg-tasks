#include <string>
#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main() {
    char codes[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't','u', 'v', 'w', 'x', 'y', 'z' };

    string s;
    long int buf;
    vector<long long> w;
    vector<char> sorted_codes;
    map<char, int> c_dict;


    cin >> s;
    for (int i = 0; i < 26; i++) {
        cin >> buf;
        c_dict[codes[i]] = 0;
        if (i == 0) {
            w.push_back(buf);
            sorted_codes.push_back(codes[i]);
            continue;
        }
        int j = i - 1;
        while(w[j] < buf && j > -1) {
            j--;
        }
        j = j == -1 ? 0 : j + 1;
        w.insert(w.begin() + j, buf);
        sorted_codes.insert(sorted_codes.begin() + j, codes[i]);
    }

    for (char i : s) {
        c_dict[i]++;
    }

    for (int i = 0; i < 26; i++) {
        if (c_dict[sorted_codes[i]] > 1) {
            cout << sorted_codes[i];
        }
    }
    for (int i = 0; i < 26; i++) {
        if (c_dict[sorted_codes[i]] == 1) {
            cout << sorted_codes[i];
        } else if (c_dict[sorted_codes[i]] > 2) {
            for (int j = 0; j < c_dict[sorted_codes[i]] - 2; j++) {
                cout << sorted_codes[i];
            }
        }
    }
    for (int i = 25; i > -1; i--) {
        if (c_dict[sorted_codes[i]] > 1) {
            cout << sorted_codes[i];
        }
    }

    return 0;
}