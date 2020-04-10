#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n, k;
	double sum=0, hours = 0;
	cin>>n>>k;
	double values[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>values[i];
	}

	for (int i = 0; i < k; ++i)
	{
		sum += values[i];
	}
	hours = sum;
	for (int i = k; i < n; ++i)
	{
		sum += values[i] - values[i-k];
		hours  += sum;
	}

	cout<<setprecision(18)<<(hours/(n-k+1))
	return 0;
}