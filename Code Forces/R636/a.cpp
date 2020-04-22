#include <bits/stdc++.h>
using namespace std;

int T;
long long n;
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int k = 2; k <= n; k++)
			if(n % ((k*(k+1))/2) == 0){
				cout<<n / ((k*(k+1))/2)<<endl;
				break;
			}
	}
	return 0;
}