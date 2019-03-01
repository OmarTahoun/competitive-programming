#include<iostream>

using namespace std;
int main(){
	long long n, ans=1, m,i;
	int counts[n+1],count=0;
	cin>>n;
	for (i = 1; i <=n ; ++i)
	{	
		for (int j = i; j*j <= i; ++j)
		{
			if (i%j==0)
			{
				counts[i]+=1;
				while(i%j == 0){
					i /= j;
				}
			}
		}
	}

	for (int i = 0; i <n; ++i)
	{
		if (counts[i] == 2)
		{
			count+=1;
		}
	}
	cout<< counts;
	return 0;
}