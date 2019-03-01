#include <iostream>
using namespace std;

int main(){
	long long a,b,c,d, max_width, max_height;
	cin>>a>>b>>c>>d;
	max_width = a;
	max_height = b;
	if (a<c)
		max_width = a;
	if (b<d)
		max_height = d;

	max_height+= 2;
	max_width+= 2;

	cout<<max_width * max_height;
	return 0;
}