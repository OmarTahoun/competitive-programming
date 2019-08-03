#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[101];
	int n, a,b;
	cin>>n>>a>>b;
	for (int i = 0; i <n; ++i)
		arr[i]=i+1;
	a=a+b;
	cout<<arr[(abs(a%n))-1]<<endl;
	return 0;
}