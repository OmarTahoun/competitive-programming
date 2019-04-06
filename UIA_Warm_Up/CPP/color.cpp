#include <iostream>
#include <set>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	bool flag = true;
	char color;
	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < m; ++i)
		{
			cin>>color;
			if (color != 'W' && color != 'B' && color != 'G')
				flag = false;
		}
	}

	if (!flag)
		cout<<"#Color"<<endl;
	else
		cout<<"#Black&White"<<endl;
	return 0;
}