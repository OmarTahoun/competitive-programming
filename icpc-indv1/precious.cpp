#include <iostream>
using namespace std;

long long arr[100001];
int main(){
	int n, min = 1000000001 , mini=0;
	bool flag = true;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
		if (arr[i]<=min){
			mini=i;
			min = arr[i];
		}
	}

	for (int i = 0; i < mini; ++i){
		if (arr[i]<arr[i+1]){
			flag = false;
			break;
		}	
	}

	for (int i = mini; i < n-1; ++i){
		if (arr[i]>arr[i+1]){
			flag = false;
			break;
		}	
	}

	if (flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}