#include <bits/stdc++.h>
using namespace std;

string s;
int cnta = 0;
int lcont = 0, currL = 0;

int main(){
	cin>>s;
	for(int i = 0; i < s.length(); ++i){
		if(s[i] == 'A') cnta ++;
		if(s[i] == 'L')
			currL ++;
			if(s[i+1] != 'L'){
				lcont = max(lcont, currL);
				currL = 0;
			}
	}

	if(cnta > 1 || lcont > 2)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;
	return 0;
}