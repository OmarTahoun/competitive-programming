#include <iostream>
using namespace std;

int main(){
	long long n, m, prev=1, count=0, next;
	cin>>n>>m;
	for (long long i = 0; i < m; ++i)
	{
		cin>>next;
		if (next>=prev)
		{
			count += next-prev;
			prev = next;
		}else{
			count += n-(prev-next);
			prev = next;
		}
	}
	cout<<count<<endl;
	return 0;
}