#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;
		cin >> n;

		int p = 0, c = 0;
		bool correct = true;
		for (int i = 0; i < n; ++i){
			int p1, c1;
			cin >>p1>>c1;
			if(p1 < p)
				correct = false;
			if(c1 < c)
				correct = false;
			if(c1 > c && p1 == p)
				correct = false;
			if(c1-c > p1-p)
				correct = false;

			p = p1;
			c = c1;
		}

		if(correct) cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
	}
	return 0;
}