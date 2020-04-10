#include <bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> voules;
	voules['A'] = 1;
	voules['E'] = 1;
	voules['I'] = 1;
	voules['O'] = 1;
	voules['U'] = 1;
	voules['Y'] = 1;

	string line;
	cin>>line;
	int space = 0;
	int maxdist = 1;

	for(int i = 0; i< (int)line.length(); i++){
		space ++;
		if(voules[line[i]] == 1){
			maxdist = max(maxdist, space);
			space = 0;
		}
	}
	maxdist = max(maxdist, space + 1);
	cout<<maxdist<<endl;
	return 0;
}