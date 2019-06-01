#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	string password = "";
	while((int)password.size()<n){
		for (int i = 0; i < k; ++i){
			if ((int)password.size()<n)
				password+= 'a'+i;
			else
				break;
		}
	}

	cout<<password<<endl;
	return 0;
}