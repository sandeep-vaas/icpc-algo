#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){
	if(num == 2) return true;
	if(num == 1) return false;
	if(num%2 == 0) return false;
	int root = sqrt(num);
	for(int i=3;i<=root;i+=2)
		if(num%i ==0)return false;
	return true;
}

int main(){
	int x;
	cin >> x;
	cout << (isPrime(x)?"YES":"NO"); 
	return 0;
}