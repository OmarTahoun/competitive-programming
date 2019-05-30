#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,b,d,orange, waste=0, count=0;
	cin>>n>>b>>d;
	for (int i = 0; i < n; ++i){
		cin>>orange;
		if (orange>b)
			continue;
		waste+= orange;
		if (waste>d){
			count+=1;
			waste = 0;
		}
	}

	cout<<count<<endl;
	return 0;
}