#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { 
        int n, k;       //n = number/length: tổng số heo đứng trong hàng
        cin >> n >> k;  //k = key requirements: số cặp buộc phải đứng nhìn nhau
        string s;
        cin >> s;       //s = string: chuỗi các ký tự 'L' và 'R' đại diện cho hướng nhìn của từng con heo
        
        if (2 * k > n) {
            cout << -1 << endl;
            continue;
        }
        int count = 0; //count: đếm số lượng con heo cần phải quay đầu để thỏa mãn yêu cầu
        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                count++;
            }
        }
        for (int i = n - k; i < n; i++) {
            if (s[i] == 'R') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}