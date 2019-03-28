#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, a=0,b=0,c=0,d=0, total=0;
	cin>>n;
	int x[201];
	int y[201];
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i]>>y[i];
	}

	for (int i = 0; i < n; ++i)
	{
		a=b=c=d=0;
		for (int j=0; j<n; ++j)
		{
			if (x[i]==x[j] && y[j]<y[i])
				a = 1;
			if (x[i]==x[j] && y[j]>y[i])
				b = 1;
			if (x[i]<x[j] && y[i]==y[j])
				c = 1;
			if (x[i]>x[j] && y[i]==y[j])
				d = 1;
		}
		if (a==1 && b==1 && c==1 && d==1)
			total+=1;
	}

	cout<<total<<endl;
	return 0;
}