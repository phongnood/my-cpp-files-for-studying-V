#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;cin>>n;
	for (int i = 0;i<=2*n-2;i++) {
		for (int j = 0;j<=2*n-2;j++) {
			int up = i, left = j, down = (2*n-2)-i, right = (2*n-2)-j;
			int pos = min({up,left,down,right});
			cout << n - pos << " ";
		}
		cout << endl;
	}
	return 0;
}