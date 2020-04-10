#include <bits/stdc++.h>
using namespace std;

map<int, int[3]> positions;
int main(){
	int n;
	int val;
	int count = 0;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>val;
		if (positions.find(val) != positions.end()){
			int diff = abs(positions[val][1]-i);
			if(positions[val][0] == 0)
				positions[val][0] = diff;
			if (diff != positions[val][0] && positions[val][2] == 1){
				positions[val][2] = 0;
				count++;
			}
			positions[val][1] = i;
		}else{
			positions[val][0] = 0;
			positions[val][1] = i;
			positions[val][2] = 1;
		}
	}
	cout<< (int)positions.size() - count <<endl;
	for(auto elem : positions){
		if (elem.second[2])
			cout << elem.first << " " << elem.second[0] << "\n";
	}
	return 0;
}