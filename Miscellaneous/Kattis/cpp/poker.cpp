#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int max = -1;
	map<char, int> mp;
	for (int i = 0; i < 5; ++i){
		string hand;
		cin>>hand;
		mp[hand[0]] += 1;
		if (mp[hand[0]] >= max)
			max = mp[hand[0]];
	}
	
	cout<<max<<endl;
	return 0;
}