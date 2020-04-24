#include <bits/stdc++.h>
using namespace std;

int n, pinks = 0;
string s;
string p = "pink";
int main(){
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>s;
		for(int j = 0; j < s.length() - 4; j++){
			bool pink = true;
			for(int k = 0; k <= 3; k++){
				cout<<s[j+k]<<" ";
			}
			cout<<endl;
		}
	}

	cout<<pinks<<endl;
	return 0;
}