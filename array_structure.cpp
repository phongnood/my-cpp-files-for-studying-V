bool arrayrev(long long a[], int n) { //kiểm tra mảng đối xứng
    for(int i = 0;i<n/2;i++) {
        if (a[i] != a[n-i-1]) {
            return false;
        }
    }
    return true;
}