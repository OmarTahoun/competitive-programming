#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, x, rem=0, total = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		rem = x%10;
		x = x / 10;
		total += pow(x,rem);
	}
	cout<<total;
	return 0;
}