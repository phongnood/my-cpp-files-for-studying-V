#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (n.length() > 10) {
                cout << n[0] << n.length() - 2 << n[n.length() - 1] << endl;
                
                //test//
                cout << n.length() << " " << n[n.length() - 1] << endl;
                cout << n[45] << endl; //45 is blank
                cout << n[44] << endl; //44 is last character
                cout << n[0] << endl; //0 is first character
        } else {
                cout << n << endl;
        }
    }
    return 0;
}