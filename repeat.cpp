#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	string word;
	map<string, int> mp;
	while(cin>>word && word != "\n"){
		cin.ignore();
		mp[word] += 1;
		if (mp[word] > 1){
			cout<<"no"<<endl;
			return 0;
		}

	}

	cout<<"yes"<<endl;
	return 0;
}