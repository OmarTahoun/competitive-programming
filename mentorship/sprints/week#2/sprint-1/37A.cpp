#include <bits/stdc++.h>
using namespace std;
set<int> s;
map<int, int> freq;
int main(){
	int n, x;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d", &x);
		freq[x] += 1;
		s.insert(x);
	}
	
	int top = 0;
	map<int, int>::iterator it = freq.begin();

	while(it != freq.end()){
		if(freq[it->first] > top)
			top = freq[it->first];
		it++;
	}
	cout<<top<<" "<<s.size()<<endl;
	return 0;
}