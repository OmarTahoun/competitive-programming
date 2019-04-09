#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> nodes;
int visited[20001];
int main(){
	cin>>n>>m;
	visited[n] = 1;
	nodes.push_back(n);

	while(!nodes.empty()){
		int current = nodes[0];
		nodes.erase(nodes.begin(), nodes.begin()+1);
		if (current == m){
			cout<<visited[current]-1<<endl;
			return 0;
		}
		
		int dbl = 2 * current;
		if (dbl <= 20000 && visited[dbl] == 0){
			visited[dbl] = visited[current]+1;
			nodes.push_back(dbl);
		}

		int less = current - 1;
		if (less>0 && visited[less] == 0){
			visited[less] = visited[current]+1;
			nodes.push_back(less);
		}

	}
	return 0;
}
