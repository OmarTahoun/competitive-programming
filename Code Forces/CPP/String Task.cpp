#include <bits/stdc++.h>
using namespace std;

int main(){
	string word;
	cin>>word;

	for (int i = 0; i < (int)word.size(); ++i){
		word[i] = tolower(word[i]);
		switch(word[i]){
			case 'a':
			case 'e':
			case 'o':
			case 'u':
			case 'i':
			case 'y': break;

			default: cout<<"."<<word[i];
		}
	}
	cout<<endl;
	return 0;
}