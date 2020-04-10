#include <iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long lowest[100001];
	
	for (long long i = 0; i < n; ++i)
	{
		cin>>lowest[i];
		while(lowest[i]%2==0)
			lowest[i] /= 2;
		while(lowest[i]%3==0)
			lowest[i] /= 3;
	}

	for (int i = 1; i <n; ++i)
	{
		if (lowest[i] != lowest[0])
		{
			cout<<"No";
			return 0;
		}
	}


	cout<<"Yes";
	return 0;
}