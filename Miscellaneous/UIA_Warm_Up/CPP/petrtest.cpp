#include <bits/stdc++.h>
using namespace std;
int n,a[8],i;
int main()
{
cin>>n;
for(i=0;i<7;i++){
cin>>a[i];}
while(n>0){
	cout<<n<<"  ";
	i=i%7; 
	n=n-a[i];
	i++;
	}
}