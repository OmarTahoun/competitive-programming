#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int count=0;
	string word;
	vector<char> found;
	getline(cin,word);
	if (word[1] != '}')
	{
		found.push_back(word[1]);
		count+=1;
	}

	for (int i = 2; i < word.length()-1; ++i)
	{
		if (word[i] == ' ')
		{
			if (find(found.begin(), found.end(), word[i+1]) == found.end())
			{
				found.push_back(word[i+1]);
				count+=1;
			}
		}
	}

	cout<<count<<endl;
	return 0;
}