#include <bits/stdc++.h>
using namespace std;
int n;

int str2int(string s){
	int total = 0;
	for (int i = 0; i < (int)s.length(); ++i){
		total *= 10;
		total += s[i] - '0';
	}
	return total;
}

int main(){
	scanf("%d", &n);
	while(n--){
		string word;
		cin>>word;
		string col = "", row = "";

		bool flag = false;
		int idx;
		for(int i = 1; i < (int)word.length()-1; i++)
			if(isdigit(word[i]) && isalpha(word[i+1])){
				idx = i+1;
				flag = true;
				break;
			}

		if(word[0] == 'R' && flag){
			row = word.substr(1, idx-1);
			col = word.substr(idx+1);
			int column = str2int(col);
			
			string res = "";
			while(column != 0){
				column -= 1;
				int location = column % 26;
				res = char(location + 'A') + res;
				column /= 26;
			}
			cout<<res<<row<<endl;
		}
		else{
			for (int i = 0; i < (int)word.length(); ++i)
				if(isdigit(word[i])){
					row = word.substr(i);
					col = word.substr(0, i);
					break;
				}
			string res = "R" + row + "C";
			int column = 0;

			for(char c : col){
				column *= 26;
				column += (c - 'A') + 1;
			}

			cout<<res<<column<<endl;
		}
	}
	return 0;
}