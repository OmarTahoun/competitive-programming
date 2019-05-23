#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		string word;
		cin>>word;
		if((int)word.size() <= 10)
			cout<<word<<endl;
		else{
			cout<<word[0]<<(int)word.size() - 2<<word[(int)word.size()-1]<<endl;
		}
	}

	return 0;
}