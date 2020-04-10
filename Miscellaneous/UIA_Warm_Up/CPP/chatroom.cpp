#include <iostream>
#include <string>

using namespace std;


int main(){
	string word = "hello";
	string found = "";
	string got;
	cin>>got;
	int j = 0;

	for (int i = 0; i < word.size(); ++i)
	{
		char letter = word[i];
		for (j; j < got.size(); ++j)
		{
			if (got[j] == letter){
				found+=got[j];
				j+=1;
				break;
			}
		}
	}

	if (found == word)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}