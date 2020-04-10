#include <iostream>
using namespace std;

int main(){
	int t, x, xnew, y, needed;
	long long total = 0;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		cin>>x>>xnew>>y;
		while(xnew<x){
			xnew+=y;
			total += 1;
		}
		cout<<total<<endl;
		total = 0;
	}
	return 0;
}