#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2)
		return cout<<0<<endl, 0;

	int half = n/2;
	int res = 1;
	while(half!=0){
		res *= 2;
		half--;
	}

	cout<<res<<endl;
	return 0;
}