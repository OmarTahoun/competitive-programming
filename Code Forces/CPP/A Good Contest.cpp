#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool flag = false;
	cin>>n;
	for (int i = 0; i < n; ++i){
		string name;
		int bef, aft;
		cin>>name>>bef>>aft;
		if (aft>bef && bef>=2400)
			flag = true;
	}

	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}