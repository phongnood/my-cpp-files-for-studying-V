#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
long long fibo[94] = { 0 }; //fibonacci

bool prime(int n) { //kiểm tra số nguyên tố
    if (n < 2) return false;
    for (int i = 2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}
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
            //dem = 0;
            while (n%i==0) {
                cout << i << " ";//dem++; nếu phải đếm mũ
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
        ans += n / i; // ans = ans + (n/i);
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
void generate_fibonacci() { // khởi tạo giá trị fibonacci
    //dựa vào đề bài đê khởi tạo fibonacci
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i<94;i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        // f(n) = f(n-1) + f(n-2); --ví dụ đề bài--
    }
    //purpose: khởi tạo giá trị fibonacci theo đề bài, để xuất ra các giá trị liên tiếp của nó
}
bool isFibonacci(long long value) { //kiểm tra xem có phải là giá trị fibonacci không
    for (int i = 0;i<94;i++) {
        if (fibo[i] == value) {
            return true;
        }
    }
    return false;
    //purpose: dùng để kiểm tra xem giá trị nào đó có thuộc giá trị fibonacci không
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    //test here;
}