#include <bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> needed;
	map<char, int> available;
	vector<char> letters;

	string a,b,c, x;
	cin>>a>>b>>c;
	if((int)a.size() + (int)b.size() == (int)c.size()){
		x = a+b;
		for (int i = 0; i < (int)x.size(); ++i){
			if(needed[x[i]] > 0)
				letters.push_back(x[i]);
			needed[x[i]]+=1;
		}

		for (int i = 0; i < (int)c.size(); ++i)
			available[c[i]]+=1;

		for (int i = 0; i < (int)letters.size(); ++i){
			if(needed[letters[i]] == available[letters[i]])
				continue;
			else{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
		return 0;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
