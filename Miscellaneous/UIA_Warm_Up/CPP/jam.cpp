#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, l, r, lsum=0, rsum=0, total=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l>>r;
		lsum+=l;
		rsum+=r;
	}

	if (lsum>=ceil(n/2.0))
		total += n-lsum;
	else
		total += lsum;
	
	if (rsum>=ceil(n/2.0))
		total += n-rsum;
	else
		total += rsum;

	cout<<total<<endl;
	return 0;
}