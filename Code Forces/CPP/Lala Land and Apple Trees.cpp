#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	vector<pair<int, int>> left;
	vector<pair<int, int>> right;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>a>>b;
		if(a<0)
			left.push_back(make_pair(a,b));
		else
			right.push_back(make_pair(a,b));
	}
	sort(left.begin(), left.end(), greater<>());
	sort(right.begin(), right.end());

	
	long long total = 0;
	if((int)left.size() == (int)right.size())
		for (int i = 0; i < (int)right.size(); ++i)
			total+= left[i].second + right[i].second;
	else if((int)left.size() > (int)right.size()){
		for (int i = 0; i < (int)right.size(); ++i)
			total+= right[i].second;
		for (int i = 0; i < (int)right.size()+1; ++i)
			total+= left[i].second;
	}
	else{
		for (int i = 0; i < (int)left.size(); ++i)
			total+= left[i].second;
		for (int i = 0; i < (int)left.size()+1; ++i)
			total+= right[i].second;	
	}
	cout<<total<<endl;
	return 0;
}