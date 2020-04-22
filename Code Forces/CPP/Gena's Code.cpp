#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	string gay;
	bool blob = false;
	cin>>n;
	int total_zeros = 0;
	for(int i = 0; i < n; i++){
		cin>>s;
		if(s[0] == '0'){
			blob = true;
			continue;
		}

		bool valid = true;
		int count_zeros = 0;
		if(s[0] == '1'){
			for(int j = 1; j < s.length(); j++){
				if(s[j] != '0'){
					valid = false;
					gay = s;
					break;
				}
				count_zeros++;
			}
		}
		else{
			valid = false;
			gay = s;
		}
		if(valid){
			total_zeros += count_zeros;
		}
	}


	if(blob){
		cout<<"0"<<endl;
	}
	else{
		if(gay.length() == 0)
			gay = '1';
		string tail = string(total_zeros, '0');
		string ans = gay+tail;
		cout<<ans<<endl;
	}
	return 0;
}