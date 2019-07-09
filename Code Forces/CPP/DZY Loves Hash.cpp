#include <bits/stdc++.h>
using namespace std;

int main(){
	int p, n;
	long long value;
	int res = -1;
	cin>>p>>n;
	long long hash[301];
	for (int i = 0; i <n; ++i){
		cin>>value;
		if(hash[value%p]==1 && res == -1)
			res = i+1;
		else
			hash[value%p] = 1;
	}
	if(res)
		cout<<res<<endl;
	else
		cout<<-1<<endl;
	return 0;
}