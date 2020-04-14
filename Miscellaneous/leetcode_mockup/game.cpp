#include <bits/stdc++.h>
using namespace std;


int n;

bool solve(int left, bool turn){
	if(left <= 3) return (turn);
	return solve(left-1, !turn) || solve(left-2, !turn) || solve(left-3, !turn);
}
int main(){
	cin>>n;
	if(solve(n, true))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;


	return 0;
}