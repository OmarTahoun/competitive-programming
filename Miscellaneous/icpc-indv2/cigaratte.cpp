#include <iostream>
using namespace std;
int main(){
	int t;
	double n, val, res;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		res = n;
		for (int i = 0; i < n; ++i)
		{
			cin>>val;
			res -= val;
		}
		printf("%.4f\n", res);
	}

	return 0;
}