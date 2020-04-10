#include<iostream>
#include<string>
using namespace std;

int main(){
	string line, res = "";
	cin>>line;
	for (int i = 0; i < line.size(); ++i)
	{
		if (line[i]=='.')
			res+='0';
		else{
			if (line[i+1]=='.')
			{
				res+='1';
				i+=1;
			}else{
				res+='2';
				i+=1;
			}
		}
	}

	cout<<res<<endl;
	return 0;
}