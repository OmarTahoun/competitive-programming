#include <bits/stdc++.h>
using namespace std;

int n;
long long in = 0, out = 0;
int main(){
	cin>>n;
	int x;
	for(int i = 0; i < n; i++){
		cin>>x;
		if(x < 0)
			out += x;
		else
			in += x;
	}

	cout<<abs(out)<<endl;
	return 0;
}