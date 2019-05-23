#include <bits/stdc++.h>
using namespace std;

int main(){
	string word;
	getline(cin,word);
	set<char> st;
	if ((int)word.size()>2){
		for (int i = 1; i < (int)word.size()-1; ++i)
				if (word[i] != ',' && word[i] != ' ')
					st.insert(word[i]);
		cout<<(int)st.size()<<endl;
	}else
		cout<<0<<endl;


	return 0;
}