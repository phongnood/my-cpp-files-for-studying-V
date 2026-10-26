#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "sew" << i << endl;
        if (i == 5) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}