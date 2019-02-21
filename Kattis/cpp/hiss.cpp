#include<iostream>
#include<string>
using namespace std;

int main(){
	string word;
	cin>>word;
	for (int i = 0; i < word.length()-1; ++i)
	{	
		if( string(1, word[i])+ string(1, word[i+1]) == "ss"){
			cout<<"hiss";
			return 0;
		}

	}
	cout<<"no hiss";
	return 0;
}