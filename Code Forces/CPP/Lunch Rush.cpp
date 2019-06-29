#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, f,t;
	long long max;
	cin>>n>>k;
	cin>>f>>t;

	if(t>k)
		max = f - (t-k);
	else
		max = f;

	for (long long i = 1; i < n; ++i){
		cin>>f>>t;
		if(t>k){
			if((f - (t-k)) > max)
				max = f - (t-k);
		}
		else{
			if(f>=max)
				max = f;
		}
	}

	cout<<max<<endl;
	return 0;
}