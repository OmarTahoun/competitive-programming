#include<iostream>
#include<string>

using namespace std;
int main(){
	int n, ant=0, dan=0;
	string games;
	cin>>n;
	cin>>games;
	for (int i = 0; i < n; ++i)
	{
		if (games[i] == 'A')
			ant+=1;
		else
			dan+=1;
	}

	if (ant>dan)
		cout<<"Anton"<<endl;
	else if(dan>ant)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;

	return 0;
}