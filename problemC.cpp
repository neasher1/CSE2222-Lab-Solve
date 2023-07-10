#include <iostream>
#include <string>
using namespace std;

int shortestString(string s) {
    string result;
    for (char c : s) {
        if (!result.empty() && ((result.back() == 'A' && c == 'B') || (result.back() == 'B' && c == 'B'))) {
            result.pop_back();
        } else {
            result.push_back(c);
        }
    }
    return result.length();
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);
        int length = shortestString(s);
        cout << length << endl;
    }

    return 0;
}
