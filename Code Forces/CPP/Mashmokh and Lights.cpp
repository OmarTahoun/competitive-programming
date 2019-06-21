#include <bits/stdc++.h>
using namespace std;

int arr[101];
bool done[101];
int main(){
	int n, m,btn;
	cin>>n>>m;
	for (int i = 0; i <m; ++i){
		cin>>btn;
		for (int j = btn; j <=n; ++j){
			if(!done[j]){
				arr[j] = btn;
				done[j] = true;
			}
		}
	}

	for (int i = 1; i <=n; ++i)
		cout<<arr[i]<<" ";
	return 0;
}