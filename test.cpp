#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

void fact1(int n) { //phân tích số nguyên tố, VD: 15 = 3 * 5, 12 = 2^2 * 3//
	for (int i = 2;i<=sqrt(n);i++) {
        if (n%i==0) {
            //dem++; nếu phải đếm mũ
            while (n%i==0) {
                cout << i << " ";
                n/=i;
            }
            //cout << i << "^" << dem;
        }
    }
    if (n!=1) {
        cout << n;
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    fact1(60);
	return 0;
}