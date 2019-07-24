#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b, count = 0;
	cin>>n>>a>>b;
	for (int i = a+1; n-i<=b; ++i){
		count++;
	}

	cout<<count<<endl;
	return 0;
}