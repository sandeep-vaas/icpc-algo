#include <iostream> 
using namespace std;
typedef long long int lli;
lli gcd(lli a,lli b){
	if(b==0)return a;
	else return gcd(b,a%b);
}

lli lcm(lli a,lli b){
	return a/gcd(a,b)*b;
}

int main(){
	lli n;
	cin>>n;
	lli arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	lli ans=arr[0];
	for(int i=1;i<n;i++){
		ans=lcm(ans,arr[i]);
	}
	cout<<ans<<endl;
}
