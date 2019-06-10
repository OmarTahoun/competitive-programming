#include <bits/stdc++.h>
using namespace std;

int main(){
	long long l, r;
	cin>>l>>r;
	if (r-l >= 2){
		for (long long i = l; i < r-1; ++i){
			long long a = i;
			for (long long j = a+1; j < r; ++j){
				long long b = j;
				if (__gcd(a, b) == 1){
					for (long long k = b+1; k <= r; ++k){
						long long c = k;
						if (__gcd(b,c) == 1 && __gcd(a,c)!=1){
							cout<<a<<" "<<b<<" "<<c<<endl;
							return 0;
						}
					}
				}
			}
		}
	}

	cout<<-1<<endl;
	return 0;
}