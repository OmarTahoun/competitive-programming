#include <iostream>
#include <string>
using namespace std;

int main(){
	string word,sub="";
	cin>>word;
	sub+=word[0];
	for (int i = 1; i < word.length(); ++i)
	{
		if (word[i] == '-')
		{
			sub+=word[i+1];
		}
	}

	cout<<sub;
	return 0;
}