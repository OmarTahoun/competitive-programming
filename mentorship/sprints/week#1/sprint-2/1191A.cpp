#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int rem = n%4;

	if(rem == 1)
		return cout<<0<<" A"<<endl, 0;
	if(rem == 2)
		return cout<<1<<" B"<<endl, 0;
	if(rem == 3)
		return cout<<2<<" A"<<endl, 0;
	else
		return cout<<1<<" A"<<endl, 0;
	return 0;
}