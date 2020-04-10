#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n, counter=0;
	string tmp;
	cin>>n;
	while(n!=0){
		vector<string> even,odd;
		for (int i = 0; i < n; ++i)
		{	
			cin>>tmp;
			if (i%2==0)
			{
				even.push_back(tmp);
			}
			else{
				odd.push_back(tmp);
			}
		}

		reverse(odd.begin(), odd.end());

		counter+=1;
		cout<<"SET "<<counter<<endl;
		for (int i = 0; i < even.size(); ++i)
		{
			cout<<even[i]<<endl;
		}
		for (int i = 0; i < odd.size(); ++i)
		{
			cout<<odd[i]<<endl;
		}

		cin>>n;
	}
	return 0;
}