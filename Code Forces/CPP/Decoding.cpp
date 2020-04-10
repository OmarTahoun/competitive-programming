#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	
	cin>>n>>s;
	string ans = "";
	if(n%2){
		for(int i = 0; i < n; ++i){
			if(i%2 == 0)
				ans += s[i];
			else
				ans = s[i] + ans;
		}

		cout<<ans<<endl;
	}else{
		for(int i = 0; i < n; ++i){
			if(i%2)
				ans += s[i];
			else
				ans = s[i] + ans;
		}
		cout<<ans<<endl;
	}


	return 0;
}