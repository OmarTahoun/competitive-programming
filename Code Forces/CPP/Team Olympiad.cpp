#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt1=0, cnt2=0, cnt3=0;
	int arr[5001];
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
		if (arr[i]==1)	++cnt1;
		if (arr[i]==2)	++cnt2;
		if (arr[i]==3)	++cnt3;
	}

	int total = min(cnt1, min(cnt3, cnt2));
	cout<<total<<endl;
	set<int>prev;
	set<int>curr;
	int count = 0;
	for (int i = 0; i < total; ++i){
		for (int j = 0; j < n; ++j){
		if (curr.count(arr[j]) == 0 && prev.count(j+1) == 0){
			curr.insert(arr[j]);
			prev.insert(j+1);
			if (curr.size()!=3) cout<<j+1<<" ";
			else	cout<<j+1<<endl;
			}
		}
		curr.clear();
	}

	return 0;
}