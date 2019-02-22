#include<iostream>

using namespace std;
int main(){
	long long n, ans=1, m,i;
	cin>>n;
	m=n;
	for (i = 2; i*i <=n ; ++i)
	{
		if (m%i == 0)
		{
			ans *= i;
			while(m%i==0)
				m /= i;
		}
	}
	if (m>1)
	{
		ans *= m;
	}
	cout<<ans;
	
	return 0;
}