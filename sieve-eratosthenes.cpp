#include <bits/stdc++.h>

using namespace std;
 
void sieve(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
       if (prime[p])
          cout << p << " ";
}
 
int main() {
    int n;
    cin >> n;
    cout << "Following are the prime numbers smaller"
         << " than or equal to " << n << endl;
    sieve(n);
    return 0;
}