#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a, b;
	bool flag = false;
	for (int i = 0; i < n; ++i){
		cin>>a>>b;
		if(a!=b)
			flag = true;
	}
	if(flag)
		cout<<"Happy Alex\n";
	else	
		cout<<"Poor Alex\n";
	return 0;
}