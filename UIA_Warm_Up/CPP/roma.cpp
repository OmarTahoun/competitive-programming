#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main (){
	int n, k,total_lucky=0,count =0;
	string x;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;

		for (int i = 0; i < x.length(); ++i)
		{
			if (x[i] == '4' || x[i] == '7')
			{
				total_lucky +=1;
			}
		}

		if (total_lucky <= k)
		{
			count +=1;
		}

	}
	cout<<count;
	return 0;
}