#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int n, a, b;
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		string s = "";
		while(s.length() < n){
			char c =  'a' + (s.length() %  b);
			s+=c;
		}
		cout<<s<<endl;
	}


	return 0;
}