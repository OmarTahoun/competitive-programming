#include <iostream>
#include <map>
using namespace std;

int main(){
	int n, val;
	cin >> n;
	map<int, int> counts;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		counts[val] += 1;
		
	}
	if (counts[0] <=0){
		cout<<"-1"<<endl;
		return 0;
	}

	if (counts[5] <9){
		cout<<"0"<<endl;
		return 0;
	}else{
		string res = "";
		int fives = (counts[5]/9)*9;
		for (int i = 0; i < fives; ++i)
		{
			res+='5';
		}
		for (int i = 0; i < counts[0]; ++i)
		{
			res+='0';
		}

		cout<<res<<endl;
	}


	return 0;
}