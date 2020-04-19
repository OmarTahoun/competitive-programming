#include <bits/stdc++.h>
using namespace std;

map<char, int> cnt;
int main(){
	string res;
	for(int i = 0; i < 3; i++){
		cin>>res;
		if(res[1] == '<')
			cnt[res[2]]++;
		else
			cnt[res[0]]++;
	}
	set<int> uniq;
	uniq.insert(cnt['A']);
	uniq.insert(cnt['B']);
	uniq.insert(cnt['C']);

	if(uniq.size() != 3){
		cout<<"Impossible"<<endl;
		return 0;
	}

	int top = 0;
	string ans = "";
	while(top <= 2){
		for(auto const& x : cnt){
			if(x.second == top){
				ans += x.first;
				top ++;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}