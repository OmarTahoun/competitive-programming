#include <iostream>

using namespace std;
int main(){
	int n, m, count=0;
	cin>>n>>m;
	if (m%n != 0)
		cout<< -1 << endl;

	else{
		m /= n;
		while(m%2==0){
			m /= 2;
			count+=1;
		}
		while(m%3==0){
			m /= 3;
			count+=1;
		}

		if (m == 1)
			cout<<count<<endl;
		else
			cout<<-1<<endl;
	}

	return  0;
}