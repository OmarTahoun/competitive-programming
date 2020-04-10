#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		long long sum= (n*(n+1))/2;
		long long diff=0;
		for (int i = 0; pow(2,i) <= n ; ++i)
		{
			diff-=pow(2,i);
		}
		diff*=2;
		cout<<sum+diff<<endl;
	}
	return 0;
}
