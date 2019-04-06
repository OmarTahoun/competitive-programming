#include <iostream>
using namespace std;

int main(){
	int n;
	long long bets[100001];
	cin>>n;
	for (long long i = 0; i < n; ++i)
	{
		cin>>bets[i];
		while(bets[i]%2==0)
			bets[i] /= 2;
		while(bets[i]%3==0)
			bets[i] /= 3;
	}
	for (int i = 0; i < n; ++i)
	{
		if (bets[i] != bets[0])
		{
			cout<<"No"<<endl;
			return 0;
		}
	}

	cout<<"Yes"<<endl;
	return 0;
}