#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, k, count=0;
	int lucky_count;
	string x;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		lucky_count = 0;
		for (int i = 0; i < x.length(); ++i)
		{
			if (x[i] == '4' || x[i] == '7')
			{
				lucky_count +=1;
			}
		}
		if (lucky_count<=k)
		{
			count+=1;
		}
	}
	cout<<count;
	return 0;
}