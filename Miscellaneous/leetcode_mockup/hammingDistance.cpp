#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b;
	cin>>a>>b;
	long long c = a^b;
	long long counter = 0;

	while(c > 0){
		long long bits = c & 1;
		if(bits != 0)
			counter ++;
		c = c >> 1;
	}
	cout<<counter<<endl;
	return 0;
}