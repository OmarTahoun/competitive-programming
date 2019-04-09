#include <iostream>

using namespace std;

long long n;
long long pos[100001];
long long height[100001];
long long count = 1;
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>pos[i]>>height[i];

	for (int i = 1; i < n-1; ++i){
		if ((pos[i]-height[i]) > pos[i-1]){
			count+=1;
		}else if((pos[i]+height[i]) < pos[i+1]){
			count+=1;
			pos[i] = pos[i]+height[i];
		}
	}

	if (n>1)
		cout<<count+1<<endl;
	else
		cout<<count<<endl;
	return 0;
}