#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> times;
	int n, min_index;
	long long min = 1000000001;
	long long time;
	cin>>n;

	for (int i = 0; i < n; ++i){
		cin>>time;
		times.push_back(time);
		if(time<=min){
			min = time;
			min_index = i;
		}
	}

	int cnt = count(times.begin(), times.end(), min);
	if(cnt>1)
		cout<<"Still Rozdil"<<endl;
	else
		cout<<min_index+1<<endl;
	return 0;
} 