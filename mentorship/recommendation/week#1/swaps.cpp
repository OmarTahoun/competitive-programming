#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	for (int x = 1; x <=q; ++x){
		string s, t;
		cin>>s>>t;
		int totdiff=0, toone=0, tozero=0, diffone=0;
		for (int i = 0; i < s.length(); ++i){
			if(s[i] != t[i])
				totdiff++;
			if(s[i] == '?' && t[i] == '1')
				diffone--;
			else if(s[i] == '0' && t[i] == '1'){
				diffone--;
				toone++;
			}
			else if(s[i] == '1' && t[i] == '0'){
				tozero++;
				diffone++;
			}
		}

		if (diffone > 0)
				cout<<"Case "<<x<<": -1"<<endl;
		else{
			int res = totdiff - min(toone, tozero);
			cout<<"Case "<<x<<": "<<res<<endl;
		}
	}
	return 0;
}