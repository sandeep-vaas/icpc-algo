#include <iostream> 
#include <vector>
typedef long long int lli;
using namespace std; 

// Linear seive
const int N = 1000000;// Just change the limit
int lp[N+1];
vector<int> prime;
void sieve(){
for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        prime.push_back (i);
    }
    for (int j=0; j<(int)prime.size() && prime[j]<=lp[i] && i*prime[j]<=N; ++j)
        lp[i * prime[j]] = prime[j];
}}


int main(){
	sieve();
	for(int i=0;i<prime.size();i++){
		cout<<prime[i]<<" ";
	}
	cout<<endl;
}
