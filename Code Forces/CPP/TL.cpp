#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, v=0, min=101, val;
	bool flag = true;
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		cin>>val;
		if (val>=v)
			v = val;
		if(val<=min)
			min = val;
	}

	if(min*2 > v)
		v = min*2;

	for (int i = 0; i < m; ++i){
		cin>>val;
		if(val<=v)
			flag = false;
	}

	if(flag)
		cout<<v<<endl;
	else
		cout<<-1<<endl;
	return 0;
}