#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string word;
	cin>>word;
	set<char>letters;
	for (int i = 0; i < n; ++i)
		letters.insert(tolower(word[i]));

	if (letters.size() == 26)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


	return 0;
}