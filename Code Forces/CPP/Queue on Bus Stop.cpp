#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m, buses = 1, group;
	cin>>n>>m;
	int curr = 0;
	for (int i = 0; i < n; ++i){
		cin>>group;
		if (curr+group <= m)
			curr+=group;
		else{
			buses+=1;
			curr=0;
		}
	}
 
	cout<<buses<<endl;
	return 0;
}