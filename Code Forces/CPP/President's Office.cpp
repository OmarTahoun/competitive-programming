#include <bits/stdc++.h>
using namespace std;

vector<string> lines;
set<char> neighbors;
int main(){
	int n, m;
	char pres;
	cin>>n>>m>>pres;
	lines.push_back(string(m+2, '.'));
	string row;
	for (int i = 0; i < n; ++i){
		cin>>row;
		lines.push_back('.'+row+'.');
	}

	lines.push_back(string(m+2, '.'));

	for (int i = 1; i <=n; ++i)
		for (int j = 1; j <= m; ++j){
			char x = lines[i][j];
			char a = lines[i-1][j];
			char b = lines[i][j+1];
			char c = lines[i+1][j];
			char d = lines[i][j-1];
			if(x == pres){
				if(a >= 'A' && a <= 'Z' && a != pres)
					neighbors.insert(a);
				if(b >= 'A' && b <= 'Z' && b != pres)
					neighbors.insert(b);
				if(c >= 'A' && c <= 'Z' && c != pres)
					neighbors.insert(c);
				if(d >= 'A' && d <= 'Z' && d != pres)
					neighbors.insert(d);
			}
		}

	cout<<(int)neighbors.size()<<endl; 
	return 0;
}