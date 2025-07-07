#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, ans = "", word = "";
    getline(cin, s);
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (word.length() > 0) {
                reverse(word.begin(), word.end());
                ans += (ans.empty() ? "" : " ") + word;
                word = "";
            }
        }
    }

    // Handle the last word if it exists
    if (word.length() > 0) {
        reverse(word.begin(), word.end());
        ans += (ans.empty() ? "" : " ") + word;
    }

    cout << ans.substr(0);
    return 0;
}
/*
output
teja sri
sri teja
*/
