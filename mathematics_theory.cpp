#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int getsum(int a) { //tính tổng chữ số của số nguyên
    int sum = 0;
    while (a) {
        sum+= (a%10);
        a/=10;
    }
    return sum;
}
int tonguoc(int a) { //tính tổng ước
    int sum = 0;
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
long long binpow(long long a, long long b) { //luỹ thừa siêu nhanh (tối ưu)
	long long ans = 1;
	a %= MOD;
	while (b>0) {
		if (b%2==1) ans = (ans*a)%MOD;
		b/=2;
		a = a*a%MOD;
	}
	return ans;
}
int gcd1(int a, int b) { //ước chung lớn nhất
	while (b) {
		int du = a%b;
		a = b;
		b = du;
	}
	return a;
}
int lcm1(int a, int b) { //bội chung nhỏ nhất
	return (a*b)/gcd1(a,b);
}
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
int factcount(int n) { // đếm ước nguyên tố
	int count = 0;
	for (int i = 2;i<=sqrt(n);i++) {
		if (n%i==0) {
			count++;
			while (n%i==0) {
				n/=i;
			}
		}
	}
	if (n!=1) {
		count++;
	}
	return count;
}
int bac_basic(int n, int p){ //công thức bậc cơ bản
    int ans = 0;
    for(int i = p; i <= n; i += p){
        int tmp = i;
        while(tmp % p == 0){
            ++ans;
            tmp /= p;
        }
    }
    return ans;
}
long long bac_legendre(int n, int p) { //công thức bậc theo kiểu legendre
    long long ans = 0;
    for (long long i = p;i<=n;i*=p) {
        ans += n / i;
    }
    return ans;
}
bool rev(int n) { //số thuận nghịch
    int N = n, rev = 0;
    while (n) {
        rev = rev*10 + n%10;
        n/=10;
    }
    return N == rev;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    //test here;
}