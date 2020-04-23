#include <bits/stdc++.h>
using namespace std;


string n;
int main(){
	cin>>n;
	string ans = "";
	ans += n;
	for(int i = n.length()-1; i>= 0; i--)
		ans+= n[i];
	cout<<ans<<endl;
	return 0;
}