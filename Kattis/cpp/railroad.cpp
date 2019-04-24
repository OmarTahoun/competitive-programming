#include <iostream>
using namespace std;

int main(){
	int x, y;
	cin>>x>>y;
	int a = x*4;
	int b = y*3;
	if ((a+b)%2 == 0)
		cout<<"possible"<<endl;
	else
		cout<<"impossible"<<endl;

	return 0;
}