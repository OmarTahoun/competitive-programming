#include <iostream>
using namespace std;
int main(){
	long long n, count = 0;
	cin>>n;
	for (int i = 2; i*i <=n ; ++i)
	{
		if (n%i == 0)
		{
			count +=1;
		}
	}
	cout<<count;
	return 0;
}