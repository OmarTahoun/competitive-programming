#include <iostream>
using namespace std;

int main(){
	int n, min=1001, a, b;
	int arr[101];
	cin>>n;
	cin>>arr[0];
	for (int i = 1; i < n; ++i)
	{
		cin>>arr[i];
		if (abs(arr[i]-arr[i-1]) <= min){
			a = i+1;
			b = i;
			min = abs(arr[i]-arr[i-1]);
		}
	}

	if (abs(arr[n-1]-arr[0]) <= min){
		a = n;
		b = 1;
		min = abs(arr[n-1]-arr[0]);
	}

	cout<<a<<" "<<b<<endl;
	return 0;
}