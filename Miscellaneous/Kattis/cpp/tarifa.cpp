#include<iostream>
using namespace std;

int main(){
	int x, n, used, sum=0;
	cin>> x;
	cin>> n;

	for (int i = 0; i < n; ++i)
	{
		cin>>used;
		sum+= x-used;
	}
	cout<<sum+x;
	return 0;
}