#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int sections[1001];
	int score=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>sections[i];

	for (int i = 0; i < n; ++i){
		int total = 1;
		int curr = sections[i];

		for (int j = i+1; j < n; ++j){
			if(sections[j] <= curr){
				total++;
				curr = sections[j];
			}else{
				break;
			}
		}

		curr = sections[i];
		for (int k = i-1; k >=0; --k){
			if(sections[k] <= curr){
				total++;
				curr = sections[k];
			}else{
				break;
			}
		}

		if(total>=score)
			score = total;
	}

	cout<<score<<endl;
	return 0;
}