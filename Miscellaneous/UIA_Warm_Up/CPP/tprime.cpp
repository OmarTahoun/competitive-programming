#include <iostream>
using namespace std;

int main(){
	int n, count=0;
	long long x, j;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		for ( j = 1; j*j <=x ; ++j)
		{
			if (x%j==0)
			{
				count +=1;
				if (count>1)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
		}
		if (count == 1)
		{
			cout<<"YES"<<endl;
			count = 0;
		}
	}
	return 0;
}