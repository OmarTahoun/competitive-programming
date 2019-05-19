#include <bits/stdc++.h>
using namespace std;

int main(){
	string word;
	cin>>word;
	string upper=word, lower=word;
	int upperC=0, lowerC=0;
	for (int i = 0; i < word.size(); ++i){
		upper[i] = toupper(upper[i]);
		lower[i] = tolower(lower[i]);

		if(isupper(word[i]))
			upperC+=1;
		else
			lowerC+=1;
	}

	if (upperC>lowerC)
		cout<<upper<<endl;
	else
		cout<<lower<<endl;
	return 0;
}