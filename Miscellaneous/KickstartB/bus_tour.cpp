#include <bits/stdc++.h>
using namespace std;

int T;
int main(){
	cin>>T;
	for(int i = 1; i <= T; ++i){
		int n, d;
		cin>>n>>d;
		vector<int> arr(n);
		for(int i = 0; i < n; ++i)
			cin>>arr[i];

		int l = 1;
		int r = d;

		while(l <= r){
			int mid = (l + r + 1) / 2;
			bool boleh = true;

			int cur = mid;
			for(auto x : arr){
				int first = (cur + x - 1) / x * x;
				if(first <= d){
					cur = first;
					continue;
				}

				boleh = false;
			}

			if(boleh)
				l = mid + 1;
			else
				r = mid - 1;
		}

		printf("Case #%d: %d\n", i, r);
	}
	return 0;
}