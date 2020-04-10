#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
	int n;
	cin>>n;
	string uni, team;
	vector<string> unis;
	vector<string> teams;
	vector<string>::iterator it;
	for (int i = 0; i < n; ++i){
		cin>>uni>>team;
		it = find(unis.begin(), unis.end(), uni); 
		if (it == unis.end()){
			unis.push_back(uni);
			teams.push_back(team);
		}
	}

	for (int i = 0; i < 12; ++i)
		cout<<unis[i]<<" "<<teams[i]<<endl;
	return 0;
}