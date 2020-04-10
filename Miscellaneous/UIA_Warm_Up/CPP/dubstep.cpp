#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	string res = "";
	cin>>word;
	for (int i = 0; i < word.size(); ++i)
	{
		if (word[i]=='W' && word[i+1]=='U' && word[i+2]=='B' ){
			i+=2;	
		}else{
			res+=word[i];
		}
	}

	cout<<res<<endl;
	return 0;
}