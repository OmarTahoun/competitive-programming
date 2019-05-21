#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cops = 0;
	int count = 0;
	int val;
	for (int i = 0; i < n; ++i){
		cin>>val;
		if(val==-1 && cops==0)
			count+=1;
		else
			cops+=val;

	}
	cout<<count<<endl;
	return 0;
}