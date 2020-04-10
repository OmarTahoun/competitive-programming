#include<iostream>
#include <string>

using namespace std;

string word;
int values[100001];
int sums[100001];
int main(){
	int prev = 0, m, l, r, res;
	cin>>word;
	for (int i = 0; i <word.size(); ++i){
		if (word[i] == word[i+1])
			values[i] = 1;
		else
			values[i] = 0;
	}
	for (int i = 0; i <word.size()-1; ++i){
		sums[i] = values[i]+prev;
		prev = sums[i];
	}

	cin>>m;
	for (int i = 0; i < m; ++i){
		cin>>l>>r;
		cout<<sums[r-2]-sums[l-2]<<endl;
	}	

	return 0;
}