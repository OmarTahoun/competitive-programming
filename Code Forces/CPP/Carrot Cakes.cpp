#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, k, d;
	cin>>n>>t>>k>>d;
	int oneOven = (n+k-1)/k*t;
	int i = 0;
	while(n>0){
		i++;
		if (i>d)
			if ((i-d)%t == 0)
				n -= k;
			if (i%t == 0)
				n -= k;
		else
			if (i%t == 0)
				n -= k;
	}
	if (i<oneOven)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}