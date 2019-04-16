#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	bool found = false;
	long long a,b,c;
	for (int i = 0; i < t; ++i)
	{
		cin>>a>>b>>c;
		while(c>=2){
			for (int i = b; i >= a; --i){
				if (i%c == 0){
					cout<<c<<endl;
					c = 0;
					found = true;
					break;
				}
			}
			c-=1;
		}
		if (!found)
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}