#include <iostream>
using namespace std;

int main(){
	double c, n, x, y, total=0;
	cin>>c;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		total+=(x*y)*c;
	}

	printf("%.9f", total);
	return 0;
}