#include <bits/stdc++.h>
using namespace std;

int main(){
	string res = "";
	long long a=0, g=0;
	int n, x, y;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x>>y;
		if(abs((a+x) - g) <= 500){
			a += x;
			res+='A';
		}else{
			g += y;
			res+='G';
		}
	}

	cout<<res<<endl;
	return 0;
}