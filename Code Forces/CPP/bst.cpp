#include <bits/stdc++.h>
using namespace std;


unsigned long long calc(unsigned long int n, unsigned long int k){
	unsigned long long A = 1;
	if(k>n-k)
		k = n-k;

	for (int i = 0; i < k; ++i){
		A *= (n-i);
		A /= (i+1);
	}

	return A;
}

int main(){
	unsigned long int n;
	cin>>n;
	unsigned long long res = calc(2*n, n);
	res /= (n+1);
	cout<<res<<endl;
	return 0;
}