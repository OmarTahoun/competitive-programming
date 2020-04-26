#include <bits/stdc++.h>
using namespace std;

int n, m, k, t, a, b;
string vegs[3] = {"Carrots", "Kiwis", "Grapes"};
vector<pair<int, int>> waste;

int main(){
	cin>>n>>m>>k>>t;
	for(int i = 0; i < k; i++){
		cin>>a>>b;
		waste.push_back({a, b});
	}

	for(int i = 0; i < t; i++){
		cin>>a>>b;
		int cells_before = (a-1)*m + (b-1);
		int waste_before = 0;
		bool is_waste = false;
		for(auto x : waste){
			if(x.first == a){
				if(x.second < b)
					waste_before++;
				if(x.second == b)
					is_waste = true;
			}
			else if(x.first < a)
				waste_before++;
		}
		if(is_waste){
			cout<<"Waste"<<endl;
		}else{
			int value = (cells_before - waste_before) % 3;
			cout<<vegs[value]<<endl;
		}
	}
	return 0;
}