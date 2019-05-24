#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, r;
	cin>>k>>r;
	int shovels = 1;
	bool flag = 0;
	while(!flag){
		if ((k*shovels)%10 == 0 || (k*shovels-r)%10 == 0){
			cout<<shovels<<endl;
			flag = 1;
		}
		else
			shovels+=1;
	}
	return 0;
}