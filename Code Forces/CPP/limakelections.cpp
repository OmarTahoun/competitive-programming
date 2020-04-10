#include <bits/stdc++.h>
using namespace std;
int n;
int m;
priority_queue<int> pq;
int main(){
	cin>>n;
	cin>>m;
	int c;
	for (int i = 1; i < n; ++i){
		cin>>c;
		pq.push(c);
	}

	int cnt = 0;
	while(m <= pq.top()){
		cnt++;
		int cur = pq.top();
		cur--;
		m++;
		pq.pop();
		pq.push(cur);
	}
	cout<<cnt<<endl;
	return 0;
}