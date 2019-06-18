#include <bits/stdc++.h>
using namespace std;

int arr[3];
int main(){
	int n, val;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>val;
		arr[i%3] += val;
	}
	int maxm = max(arr[0], max(arr[1], arr[2]));
	if (arr[0] == maxm)
		cout<<"chest"<<endl;
	else if (arr[1] == maxm)
		cout<<"biceps"<<endl;
	else if (arr[2] == maxm)
		cout<<"back"<<endl;
	return 0;
}