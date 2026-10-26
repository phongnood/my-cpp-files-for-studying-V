#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        bool oneIsDeleted = false;
        bool zeroIsDeleted = false;
        string s;
        cin >> s; 

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1' && !oneIsDeleted) {
                oneIsDeleted = true;
                continue;
            }
            if (s[i] == '0' && !zeroIsDeleted) {
                zeroIsDeleted = true;
                continue;
            }
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}