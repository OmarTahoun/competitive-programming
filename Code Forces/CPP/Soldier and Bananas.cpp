#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k, n, w;
	cin>>k>>n>>w;
	long long total = w*(w+1)/2;
	total *= k;

	if (n<total)
		cout<<total-n<<endl;
	else
		cout<<0<<endl;
	return 0;
}