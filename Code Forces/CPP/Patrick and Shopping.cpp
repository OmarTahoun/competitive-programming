#include <bits/stdc++.h>
using namespace std;

int main(){
	int d1, d2,d3;
	long long a,b,c;

	cin>>d1>>d2>>d3;

	a = d1*2 + d2*2;
	b = d1+d3+d2;
	c = min(d1,d2)+d3*2+min(d1,d2);

	cout<<min(a,min(b,c))<<endl;


	return 0;
}