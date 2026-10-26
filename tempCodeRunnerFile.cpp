#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

long long tonguoc(long long a) { //tính tổng ước
    long long sum = 0;
    for (int i = 1;i<=sqrt(a);i++) {
        if (a%i==0) {
            sum += i;
            //i : a/i;
            if (i!=a/i) {
                sum+=a/i;
            }
        }
    }
    return sum;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    long long n;cin>>n;
    cout << tonguoc(n);
}