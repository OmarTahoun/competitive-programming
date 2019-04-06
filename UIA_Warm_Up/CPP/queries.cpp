#include<iostream>
#include <string>

using namespace std;

int main(){
	string word;
	cin>>word;
	int m, count=0;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin>>a>>b;
		for (int i = a; i < b; ++i){
			if (word[i-1] == word[i]){
				count +=1;
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}