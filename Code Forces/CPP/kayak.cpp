#include <bits/stdc++.h>
using namespace std;
int n, s, r;
bool extra[11];
bool broken[11];

int main(){
	cin>>n>>s>>r;
	int team;
	for (int i = 0; i < s; ++i){
		cin >>team;
		broken[team] = 1;
	}
	for (int i = 0; i < r; ++i){
		cin>>team;
		extra[team] = 1;

		if(broken[team]){
			broken[team] = 0;
			extra[team] = 0;
		}
	}

	for (int i = 2; i <=n+1; ++i){
		if(extra[i]){
			if(broken[i-1]){
				broken[i-1] = 0;
				extra[i] = 0;
			}
			else if(broken[i+1]){
				broken[i+1] = 0;
				extra[i] = 0;
			}
		}
	}

	int res = 0;
	for (int i = 1; i <=n; ++i)
		res+=broken[i];
	cout<<res<<endl;
	return 0;
}