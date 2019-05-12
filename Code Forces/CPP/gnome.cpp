#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	cin>>a>>b;

	if ((int)a.size() != (int)b.size())
		cout<<"NO"<<endl;

	else{
		int count = 0;
		vector<int> swap;
		for (int i = 0; i < a.size(); ++i){
			if(a[i] != b[i]){
				count+=1;
				swap.push_back(i);
			}
		}
		if(count!=2)
			cout<<"NO"<<endl;
		else{
			char tmp = a[swap[0]];
			a[swap[0]] = a[swap[1]];
			a[swap[1]] = tmp;

			if(a == b)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;
}