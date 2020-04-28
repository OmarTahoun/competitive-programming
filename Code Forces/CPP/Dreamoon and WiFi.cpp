#include <bits/stdc++.h>
using namespace std;

string s, t;
int availble = 0;
int pos1 = 0, pos2 = 0;
float total = 0,  can = 0;

void solve(int pos, int left){
	if(left == 0){
		total ++;
		if(pos == pos1) can++;
		return;
	}

	solve(pos + 1, left - 1);
	solve(pos - 1, left - 1);
}

int main(){
	cin>>s>>t;
	for(char c : s)
		pos1 += c == '+' ? 1 : -1;
	for(char c : t){
		if(c != '?')
			pos2 += c == '+' ? 1 : -1;
		else
			availble ++;
	}
	solve(pos2, availble);
	printf("%.10f\n", can/total);
	


	return 0;
}