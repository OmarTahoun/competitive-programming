#include <bits/stdc++.h>
using namespace std;

int main(){
	string word;
	cin>>word;
	char curr = 'a';
	int time = 0;
	for (int i = 0; i < (int)word.size(); ++i){
		int wise = abs(word[i] - curr);
		int anti = 26 - wise;
		time+= min(wise,anti);
		curr = word[i];
	}

	cout<<time<<endl;
	return 0;
}