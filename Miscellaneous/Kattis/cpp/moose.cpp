#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	if (a==b && a>0)
		cout<<"Even "<<a*2<<endl;
	else if(a != b)
		cout<<"Odd "<<max(a,b)*2<<endl;
	else
		cout<<"Not a moose"<<endl;

	return 0;
}