#include <bits/stdc++.h>
using namespace std;

int main(){
	int best = 0;
	int heights[1001];
	int n;

	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>heights[i];

	for (int i = 0; i < n; ++i){
		
		int curr_score = 1;
		int curr_height = heights[i];
		
		for (int j = i+1; j < n; ++j){
			if(heights[j] <= curr_height){
				curr_score++;
				curr_height = heights[j];
			}
			else break;
		}

		curr_height = heights[i];
		for(int j = i-1; j >= 0; --j){
			if(heights[j] <= curr_height){
				curr_score ++;
				curr_height = heights[j];
			}
			else break;
		}

		best = max(best, curr_score);
	}


	cout<<best<<endl;
	return 0;
}