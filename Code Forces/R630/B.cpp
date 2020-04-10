#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main(){
	int t, m;
	cin>>t;
	while(t--){
		set<int> unique;
		cin>>m;
		for (int i = 0; i < m; ++i)
			cin>>arr[i];
		
		int cnt = 0;
		for (int i = 0; i < m-1; ++i){
			for (int j = i+1; j < m; ++j){
				int res = __gcd(arr[i], arr[j]);
				cnt++;
				if(res>1)
					unique.insert(res);
			}
		}

		cout<< m - (int)unique.size()<<endl;
	}


	return 0;
}