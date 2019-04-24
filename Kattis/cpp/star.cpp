#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n<<":\n";
	for (int i = 2; i < n; ++i)	{
		if (n%(2*i-1) == 0 || n%(2*i-1) == i)
			cout<<i<<","<<i-1<<endl;
		if (n%i == 0)
			cout<<i<<","<<i<<endl;
	}

	return 0;
}