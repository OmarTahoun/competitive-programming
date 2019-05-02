#include <bits/stdc++.h>
using namespace std;

int main(){
	string header;
	string need;
	map<char, int> chars;
	bool flag = 0;
	getline(cin, header);
	getline(cin, need);
	chars[' '] = 200;
	for (int i = 0; i < header.size(); ++i)
		chars[header[i]]++;
	for (int i = 0; i < need.size(); ++i){
		if (chars[need[i]]>0)
			chars[need[i]]--;
		else{
			flag = 1;
			break;
		}
	}
	if (flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;


	return 0;
}