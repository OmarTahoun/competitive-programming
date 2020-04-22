#include <bits/stdc++.h>
using namespace std;

int n, arr[100005];
int main(){
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	int i = 0, j = 0;
	int ans = 1;
	int mn = arr[0];
	int mx = arr[0];
	while(j < n-1){
		j++;
		mx = max(mx, arr[j]);
		mn = min(mn, arr[j]);

		if(mx - mn > 1){
			i++;
			mn = 1e7;
			mx = -1e7;
			for(int k = i; k<= j; k++){
				mn = min(mn, arr[k]);
				mx = max(mx, arr[k]);
			}
			continue;
		}
		ans++;
	}

	cout<<ans<<endl;
	return 0;
}