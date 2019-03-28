#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int n, val;
	int count=0;
	cin>>n;
	int arr[8];
	for (int i = 0; i < 7; ++i)
	{
		cin>>arr[i];
	}

	int i = 0;
	while(n>0)
	{
		if (i>=7){
			i=0;
		}
		n= n - arr[i];
		count += 1;
		i++;
	}
	if (count%7 == 0)
		cout<<7<<endl;
	else
		cout<<count%7<<endl;
	return 0;
}