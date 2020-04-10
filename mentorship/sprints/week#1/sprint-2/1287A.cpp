#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int total = 0;
		int best = 0;
		bool flag = false;
		for (int i = 0; i < n; ++i){
			if(s[i] == 'A'){
				flag = true;
				best = max(best, total);
				total = 0;
			}else if(flag){
				total++;
			}
		}
		best = max(best, total);
		cout<<best<<endl;
	}
}