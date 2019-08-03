#include <bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> keys;
	int n,count=0;
	string s;
	cin>>n;
	cin>>s;
	for (int i = 0; i < (int)s.size(); ++i){
		if(i%2==0)
			keys[s[i]]++;
		else{
			if(keys[tolower(s[i])]>0)
				keys[tolower(s[i])]--;
			else
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}