#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin>> str;
	string newstr = "", hello = "hello";
	int i = 0;
	for (int j = 0; j < str.size(); j++) {
		if (hello.find(str[j]) != -1) {
			newstr += str[j];
			hello.erase(j, 1);
		}
	}
	bool match = true;
	hello = "hello";
	for (int i = 0; i < newstr.size(); i++) {
		if (newstr[i] != hello[i]) {
			cout << "NO"; 
			match = false;
			break;
		}
	}
	if (match) cout << "YES";
}
