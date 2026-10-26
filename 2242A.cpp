#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int max1 = 0; 
        int max2 = 0;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            if (x > max1) {
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max2 = x;
            }
        }
        if (max1 >= 3 || (max1 >= 2 && max2 >= 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}