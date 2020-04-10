#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	int arr[100005];
	int cnt = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	int i = 0;
	for (int j = 0; j < n; ++j){
		
		// if(arr[j] == i){
		// 	cout<<"YES"<<endl;
		// 	cout<<arr[j]<<endl;
		// 	if(j-1 == i){
		// 		i+=1;
		// 		continue;
		// 	}
		// 	int tmp = arr[i-1];
		// 	arr[i-1] = i;
		// 	arr[j] = tmp;
		// 	j = 0;
		// 	i+=1;
		// 	cnt+=1;
		// }
	}
	cout<<cnt<<endl;
	return 0;
}