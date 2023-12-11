#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<char>check;
    int answer = 0;
    int i, j;
    for (i = 0; i < str.size(); i++) {
        for (j = i + 1; j < str.size(); j++) {
            if (str[i] == str[j]) {
                str.erase(j, 1);
                break;
            }
            auto itr = find(check.begin(), check.end(), str[j]);
            if (itr != check.end()) {
                check.erase(itr);
            }
            else {
                check.push_back(str[j]);
            }
        }
        answer += check.size();
        check.clear();
    }
    cout << answer;

    return 0;
}