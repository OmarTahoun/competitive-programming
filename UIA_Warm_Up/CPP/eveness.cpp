#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	int a[101];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		a[i] %= 2;
		sum += a[i];
	}

	if (sum == 1)
	{
		for (int i = 0; i < n; ++i)
		{
			if (a[i] == 1)
			{
				cout<<i+1;
				return 0;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0)
		{
			cout<<i+1;
			return 0;
		}
	}
	return 0;
}