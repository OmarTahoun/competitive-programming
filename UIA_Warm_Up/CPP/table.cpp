#include<iostream>

using namespace std;

int main(){
	long long n, x;
	int count=0;
	cin>>n>>x;
	for (int i = 1; i <=n; ++i)
	{
		if (x%i == 0 && x/i <=n)
		{
			count+=1;
		}
	}
	cout<<count;
	return 0;
}