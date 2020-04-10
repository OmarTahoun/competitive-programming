#include <iostream>

using namespace std;
int main(){
	int n, x , h, width = 0;
	cin>>n>>h;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		if (x > h)
			width+=2;
		else
			width+=1;
	}

	cout<<width<<endl;
	return 0;
}