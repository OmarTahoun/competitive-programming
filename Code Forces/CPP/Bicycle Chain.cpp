#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int a[55];
	int b[55];
	map<int, int> ratios;
	int max = -1;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cin>>m;
	for (int i = 0; i < m; ++i)
		cin>>b[i];

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			if(b[i] % a[j] == 0){
				int ratio = b[i] / a[j];
				ratios[ratio] += 1;
				if(ratio>=max)
					max = ratio;
			}
		}
	}

	cout<<ratios[max]<<endl;



	return 0;
}