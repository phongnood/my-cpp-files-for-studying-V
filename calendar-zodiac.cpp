#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin>>x;
    int can = x % 10;
    int chi = (x - 1980 + 8) % 12;
    if (can == 0) {
        cout << "CANH ";
    } else if (can == 1) {
        cout << "TAN ";
    } else if (can == 2) {
        cout << "NHAM ";
    } else if (can == 3) {
        cout << "QUY ";
    } else if (can == 4) {
        cout << "GIAP ";
    } else if (can == 5) {
        cout << "AT ";
    } else if (can == 6) {
        cout << "BINH ";
    } else if (can == 7) {
        cout << "DINH ";
    } else if (can == 8) {
        cout << "MAU ";
    } else if (can == 9) {
        cout << "KY ";
    }

    if (chi == 0) {
        cout << "TY";
    } else if (chi == 1) {
        cout << "SUU";
    } else if (chi == 2) {
        cout << "DAN";
    } else if (chi == 3) {
        cout << "MAO";
    } else if (chi == 4) {
        cout << "THIN";
    } else if (chi == 5) {
        cout << "TI";
    } else if (chi == 6) {
        cout << "NGO";
    } else if (chi == 7) {
        cout << "MUI";
    } else if (chi == 8) {
        cout << "THAN";
    } else if (chi == 9) {
        cout << "DAU";
    } else if (chi == 10) {
        cout << "TUAT";
    } else if (chi == 11) {
        cout << "HOI";
    }

    return 0;
}