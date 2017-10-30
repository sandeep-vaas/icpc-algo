#include <bits/stdc++.h>

using namespace std;

void simpleSieve(int limit) {
    bool mark[limit];
    memset(mark, true, sizeof(mark));
    for (int p = 2; p * p < limit; p++) {
        if (mark[p] == true) {
            for (int i = p * 2; i < limit; i += p)
                mark[i] = false;
        }
    }
 
    for (int p = 2; p < limit; p++)
        if (mark[p] == true)
            cout << p << " ";
}

int main() {
    int n;
    cin >> n;
    cout << "Following are the prime numbers smaller"
         << " than or equal to " << n << endl;
    simpleSieve(n);
    return 0;
}