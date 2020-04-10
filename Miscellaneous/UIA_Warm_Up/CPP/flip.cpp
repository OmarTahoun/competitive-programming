#include <iostream>
using namespace std;

int main(){
	int n, sum, count_zero=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i] == 1)
		{
			sum += 1;
		}
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (a[j] == 0)
			{
				count_zero += 1;
			}else{
				if (count_zero>= sum)
				{
					sum = count_zero;
					count_zero = 0;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}