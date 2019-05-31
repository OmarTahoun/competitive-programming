#include <bits/stdc++.h>
using namespace std;

int main(){
	string stones;
	cin>>stones;

	string instructions;
	cin>>instructions;

	int j = 0;
	char curr = stones[j];
	for (int i = 0; i < (int)instructions.size(); ++i){
		if (instructions[i] == curr){
			j+=1;
			curr = stones[j];
		}
	}

	cout<<j+1<<endl;
	return 0;
}