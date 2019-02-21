# include<iostream>
# include<cmath>
using namespace std;

int main(){
	int n,a,b,count=0;
	double c;
	cin>>n;
	for (int j = n-1; j >=2 ; --j)
	{
		b = pow(j, 2);
		for (int k=j-1; k >=1; --k)
		{
			a = pow(k, 2);
			c = sqrt(a+b);
			if (c == int(c) && c<=n)
			{ 
				count +=1;
			}
		}
	}
	cout<<count;
	return 0;
}
