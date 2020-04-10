#include <bits/stdc++.h>
using namespace std;
int n;
int T;
string num;
int main(){
	scanf("%d", &T);
	while(T--){
		scanf("%d", &n);
		cin>>num;

		while(num[0] != '8' && (int)num.length() > 11)
			num = num.substr(1);

		if(num[0] == '8' && (int)num.length() >= 11)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}


	return 0;
}