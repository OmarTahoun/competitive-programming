#include <iostream>
using namespace std;

int main(){
	int t, n, sum, negative=0;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		sum = (n*(n+1))/2;
		for (int i = 1; i<=n; ++i)
		{
			if (i%2==0)
				negative+=i;
		}
		cout<<negative<<endl;
		cout<<sum-negative<<endl;
	}

	return 0;
}