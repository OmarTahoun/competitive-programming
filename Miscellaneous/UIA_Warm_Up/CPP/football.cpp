#include <iostream>
#include <string>
#include<map>
using namespace std;

int main(){
	int n, max = -1;
	cin>>n;
	string val;
	map<string, int> mamap;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		mamap[val]+=1;
	}

	map<string, int>::iterator it;
	for ( it = mamap.begin(); it != mamap.end(); it++ ){
		if (it->second > max){
			max = it->second;
			val = it->first;
		}
	}
	cout<<val<<endl;
	return 0;
}