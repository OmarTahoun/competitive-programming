#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	vector<long long> conversations;
	long long conv;
	cin>>n>>k;
	for (int i = 0; i < n; ++i){
		cin>>conv;
		if(find(conversations.begin(), conversations.end(), conv) != conversations.end()) {
			continue;		    
		} 
		else {
		    if((int)conversations.size()<k)
		    	conversations.insert(conversations.begin(), conv);
		    else{
		    	conversations.insert(conversations.begin(), conv);
		    	conversations.pop_back();
			}
		}
		
	}

	cout<<(int)conversations.size()<<endl;
	for (int i = 0; i < (int)conversations.size(); ++i)
		cout<<conversations[i]<<" ";
	return 0;
}