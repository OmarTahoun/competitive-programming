#include <bits/stdc++.h>
using namespace std;

vector<int> cards;

int main(){
	int n, val;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>val;
		cards.push_back(val);
	}

	int i = 0;
	int a=0, b=0;
	while(!cards.empty()){
		if (cards.front() >= cards.back()){
			if (i%2 == 0)
				a+= cards.front();
			else
				b+= cards.front();

			cards.erase(cards.begin());
		}else{
			if (i%2 == 0)
				a+= cards.back();
			else
				b+= cards.back();

			cards.pop_back();
		}
		i+=1;
	}
	
	cout<<a<<" "<<b<<endl;		
	return 0;
}