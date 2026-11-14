#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

const int MOD = (int)(1e9 + 7);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin >> n;
    int m;cin >> m;
    
    vector<vector<int>> v;

    for (int i = 1;i <= n;i++) {
        vector<int> row;
        for (int j = 1;j <= m;j++) {
            int value;cin >> value;
            row.push_back(value);
        }
        v.push_back(row);
    }

    for (int i = 0;i < n;i++) {
        reverse(v[i].begin(), v[i].end());
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}