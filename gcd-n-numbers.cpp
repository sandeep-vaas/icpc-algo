#include <bits/stdc++.h>

using namespace std;
 
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector<int> arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
    return result;
}

int main() {
    int n; //size of vector/array
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << findGCD(a, n) << endl;
    return 0;
}