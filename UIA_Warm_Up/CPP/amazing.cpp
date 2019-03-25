#include <iostream>
using namespace std;
int main(){
	int n, curr, total=0, max=-1, min=1001;
	cin>>n;
	cin>>curr;
	max = curr;
	min = curr;
	for (int i = 1; i < n; ++i)
	{
		cin>>curr;
		if (curr>max){
			max = curr;
			total+=1;
		}else if(curr<min){
			min = curr;
			total+=1;
		}
	}

	cout<<total<<endl;
	return 0;
}