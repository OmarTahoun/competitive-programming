#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	cin>>word;

	if (word[0] == '4'){
		cout<<"NO"<<endl;
		return 0;
	}

	if (word.find("444") != word.npos){
		cout<<"NO"<<endl;
		return 0;
	}


	for (int i = 0; i < word.size(); ++i)
		if (word[i] != '1' && word[i] != '4'){
			cout<<"NO"<<endl;
			return 0;
		}

	cout<<"YES"<<endl;
	return 0;
}