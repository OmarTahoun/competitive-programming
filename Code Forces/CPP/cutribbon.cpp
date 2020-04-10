#include <bits/stdc++.h>
using namespace std;
int n, a,b,c;
int arr[4040];
int solve(int left){
	if(left == 0)
		return 0;

	if(arr[left] != -1)
		return arr[left];

	arr[left] = -1000000000;
	if(left >= a)
		arr[left] = max(arr[left], solve(left-a) + 1);
	if(left >= b)
		arr[left] = max(arr[left], solve(left-b) + 1);
	if(left >= c)
		arr[left] = max(arr[left], solve(left-c) + 1);

	return arr[left];
}
int main(){
	cin>>n>>a>>b>>c;
	memset(arr, -1, sizeof arr);
	cout<<solve(n)<<endl;
	return 0;
}
