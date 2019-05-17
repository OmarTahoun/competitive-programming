#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h;
	cin>>n>>h;

	int sum = 0;
	int val;
	for (int i = 0; i < n; ++i){
		cin>>val;
		if(val>h)
			sum+=2;
		else
			sum+=1;
	}

	cout<<sum<<endl;
	return 0;
}