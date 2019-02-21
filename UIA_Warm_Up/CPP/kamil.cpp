#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,x,count=0;
	int cands[1001];
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; ++i)
	{
		cin>>cands[i];
	}

	sort(cands, cands+n-2);
	while(x<=cands[n-2]){
		cands[n-2]	-= 1;
		x += 1;
		count+=1;
		sort(cands, cands+n-2);
	}

	cout<<count;
	return 0;
}