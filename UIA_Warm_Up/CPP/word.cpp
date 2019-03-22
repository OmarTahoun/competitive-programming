#include<iostream>
#include<string>

using namespace std;

int main(){
	int  up=0, low=0;
	string word;
	cin>>word;
	for (int i = 0; i < word.size(); ++i)
	{
		if (isupper(word[i]))
			up+=1;
		else
			low+=1;
	}

	if (up>low)
		for (int i = 0; i < word.size(); ++i)
			word[i] = toupper(word[i]);
	else
		for (int i = 0; i < word.size(); ++i)
			word[i] = tolower(word[i]);


	cout<<word<<endl;
	return 0;
}