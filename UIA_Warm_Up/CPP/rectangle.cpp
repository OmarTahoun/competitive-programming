#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int s1,s2,s3, a,b,c;
	cin>>s1>>s2>>s3;
	a = (s1*s2)/s3;
	a = pow(a, 0.5);

	b = (s2*s3)/s1;
	b = pow(b, 0.5);

	c = (s1*s3)/s2;
	c = pow(c, 0.5);

	cout<<4*(a+b+c)<<endl;
	return 0;
}