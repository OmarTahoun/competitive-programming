#include <iostream>

using namespace std;

int main(){
	int n;
	double q, y, total =0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>q>>y;

		total += q*y;
	}

	printf("%.5f", total);
	return 0;
}