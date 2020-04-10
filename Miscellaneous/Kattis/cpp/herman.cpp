#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double r;
	double eu, her;
	cin>>r;
	eu = M_PI * r * r;
	her = ((r+r) * (r+r)) /2;

	printf("%.6f\n%.6f\n", eu, her);
	return 0;
}