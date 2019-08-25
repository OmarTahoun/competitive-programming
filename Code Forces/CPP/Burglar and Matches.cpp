#include <bits/stdc++.h>
using namespace std;


bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 

int main(){
	long long n, a, b, total=0;
	int m;
	int capacity = 0;

	vector< pair<int, int> > boxes;
	cin>>n>>m;
	for (int i = 0; i < m; ++i){
		cin>>a>>b;
		boxes.push_back(make_pair(a,b));
	}

	sort(boxes.begin(), boxes.end(), sortbysec);

	while(capacity<n && (int)boxes.size()>0){
		if (boxes[0].first+capacity<=n){
			total+=boxes[0].first * boxes[0].second;
			capacity+=boxes[0].first;
			boxes[0].first = 0;
		}else{
			total+= (n-capacity) * boxes[0].second;
			boxes[0].first -= (n-capacity);
			capacity = n;
		}
		if(boxes[0].first == 0)
			boxes.erase(boxes.begin());

	}
	cout<<total<<endl;
	return 0;
}