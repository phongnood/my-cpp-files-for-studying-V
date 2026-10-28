#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 7;
	for (int i = 0; i<n;i++) {
		for (int j = 0; j<i;j++) {
			cout << a[i] << " " << a[j] << endl;
		}
	}
	cout << endl;
	for (int i = 0; i<n;i++) {
		for (int j = i+1; j<n;j++) {
			cout << a[i] << " " << a[j] << endl;
		}
	}
	return 0;
}
