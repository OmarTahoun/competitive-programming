#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string sentence = "";
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		if (i%2 != 0)
			sentence+="I hate ";
		else
			sentence+="I love ";
		if (i!=n)
			sentence+="that ";

	}

	sentence+="it";
	cout<<sentence<<endl;
	return 0;
}