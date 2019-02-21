#include<iostream>

using namespace std;

int main(){
	int x, y;
	cin>>x;
	cin>>y;
	if (x<0)
	{
		if (y<0)
		{
			cout<<"3";
			return 0;
		}
		else{
			cout<<"2";
			return 0;
		}
	}
	else{
		if (y<0)
		{
			cout<<"4";
			return 0;
		}
		else{
			cout<<"1";
			return 0;
		}	
	}
	return 0;
}