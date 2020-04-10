#include <bits/stdc++.h>
using namespace std;

double calcdist(pair<int, int> a, pair<int, int> b){
	double x = a.first - b.first; 
	double y = a.second - b.second;
	double dist;
	dist = (x*x) + (y*y);
	dist = sqrt(dist);                  
	return dist;
}

map<char, double> Dvorak(){
	map<char, pair<int, int>> keyboard;
	
	// ROW 1
	keyboard['`'] = {0, 0};
	keyboard['1'] = {0, 1};
	keyboard['2'] = {0, 2};
	keyboard['3'] = {0, 3};
	keyboard['q'] = {0, 4};
	keyboard['j'] = {0, 5};
	keyboard['l'] = {0, 6};
	keyboard['m'] = {0, 7};
	keyboard['f'] = {0, 8};
	keyboard['p'] = {0, 9};
	keyboard['/'] = {0, 10};
	keyboard['['] = {0, 11};
	keyboard[']'] = {0, 12};

	// ROW 1 SHIFT
	keyboard['~'] = {0, 0};
	keyboard['!'] = {0, 1};
	keyboard['@'] = {0, 2};
	keyboard['#'] = {0, 3};
	keyboard['?'] = {0, 10};
	keyboard['{'] = {0, 11};
	keyboard['}'] = {0, 12};
	
	// ROW 2
	keyboard['4'] = {1, 1};
	keyboard['5'] = {1, 2};
	keyboard['6'] = {1, 3};
	keyboard['.'] = {1, 4};
	keyboard['o'] = {1, 5};
	keyboard['r'] = {1, 6};
	keyboard['s'] = {1, 7};
	keyboard['u'] = {1, 8};
	keyboard['y'] = {1, 9};
	keyboard['b'] = {1, 10};
	keyboard[';'] = {1, 11};
	keyboard['='] = {1, 12};
	keyboard['\\'] = {1, 13};

	// ROW 2 SHIFT
	keyboard['$'] = {1, 1};
	keyboard['%'] = {1, 2};
	keyboard['^'] = {1, 3};
	keyboard['>'] = {1, 4};
	keyboard[':'] = {1, 11};
	keyboard['+'] = {1, 12};
	keyboard['|'] = {1, 13};
	
	// ROW 3
	keyboard['7'] = {2, 1};
	keyboard['8'] = {2, 2};
	keyboard['9'] = {2, 3};
	keyboard['a'] = {2, 4};
	keyboard['e'] = {2, 5};
	keyboard['h'] = {2, 6};
	keyboard['t'] = {2, 7};
	keyboard['d'] = {2, 8};
	keyboard['c'] = {2, 9};
	keyboard['k'] = {2, 10};
	keyboard['-'] = {2, 11};

	// ROW 3 SHIFT
	keyboard['&'] = {2, 1};
	keyboard['*'] = {2, 2};
	keyboard['('] = {2, 3};
	keyboard['_'] = {2, 11};
	
	// ROW 4
	keyboard['0'] = {3, 1};
	keyboard['z'] = {3, 2};
	keyboard['x'] = {3, 3};
	keyboard[','] = {3, 4};
	keyboard['i'] = {3, 5};
	keyboard['n'] = {3, 6};
	keyboard['w'] = {3, 7};
	keyboard['v'] = {3, 8};
	keyboard['g'] = {3, 9};
	keyboard['\''] = {3, 10};

	// ROW 4 SHIFT
	keyboard[')'] = {3, 1};
	keyboard['<'] = {3, 4};
	keyboard['"'] = {3, 10};

	map<char, double> distances;
	for(map<char, pair<int, int>>::iterator it = keyboard.begin(); it != keyboard.end(); ++it){
		double smallest = 100000;
		
		double e = calcdist(it->second, keyboard['e']);
		smallest = min(e, smallest);
		
		double h = calcdist(it->second, keyboard['h']);
		smallest = min(h, smallest);
		
		double t = calcdist(it->second, keyboard['t']);
		smallest = min(t, smallest);

		double d = calcdist(it->second, keyboard['d']);
		smallest = min(d, smallest);
		
		distances[it->first] = smallest;
	}

	return distances;
}


map<char, double> OnehandQwerty(){
	map<char, pair<int, int>> keyboard;
	
	// ROW 1
	keyboard['`'] = {0, 0};
	keyboard['1'] = {0, 1};
	keyboard['2'] = {0, 2};
	keyboard['3'] = {0, 3};
	keyboard['4'] = {0, 4};
	keyboard['5'] = {0, 5};
	keyboard['6'] = {0, 6};
	keyboard['7'] = {0, 7};
	keyboard['8'] = {0, 8};
	keyboard['9'] = {0, 9};
	keyboard['0'] = {0, 10};
	keyboard['-'] = {0, 11};
	keyboard['='] = {0, 12};

	// ROW 1 SHIFT
	keyboard['~'] = {0, 0};
	keyboard['!'] = {0, 1};
	keyboard['@'] = {0, 2};
	keyboard['#'] = {0, 3};
	keyboard['$'] = {0, 4};
	keyboard['%'] = {0, 5};
	keyboard['^'] = {0, 6};
	keyboard['&'] = {0, 7};
	keyboard['*'] = {0, 8};
	keyboard['('] = {0, 9};
	keyboard[')'] = {0, 10};
	keyboard['_'] = {0, 11};
	keyboard['+'] = {0, 12};
	
	// ROW 2
	keyboard['q'] = {1, 1};
	keyboard['w'] = {1, 2};
	keyboard['e'] = {1, 3};
	keyboard['r'] = {1, 4};
	keyboard['t'] = {1, 5};
	keyboard['y'] = {1, 6};
	keyboard['u'] = {1, 7};
	keyboard['i'] = {1, 8};
	keyboard['o'] = {1, 9};
	keyboard['p'] = {1, 10};
	keyboard['['] = {1, 11};
	keyboard[']'] = {1, 12};
	keyboard['\\'] = {1, 13};

	// ROW 2 SHIFT
	keyboard['{'] = {1, 11};
	keyboard['}'] = {1, 12};
	keyboard['|'] = {1, 13};
	
	// ROW 3
	keyboard['a'] = {2, 1};
	keyboard['s'] = {2, 2};
	keyboard['d'] = {2, 3};
	keyboard['f'] = {2, 4};
	keyboard['g'] = {2, 5};
	keyboard['h'] = {2, 6};
	keyboard['j'] = {2, 7};
	keyboard['k'] = {2, 8};
	keyboard['l'] = {2, 9};
	keyboard[';'] = {2, 10};
	keyboard['\''] = {2, 11};

	// ROW 3 SHIFT
	keyboard[':'] = {2, 10};
	keyboard['"'] = {2, 11};
	
	// ROW 4
	keyboard['z'] = {3, 1};
	keyboard['x'] = {3, 2};
	keyboard['c'] = {3, 3};
	keyboard['v'] = {3, 4};
	keyboard['b'] = {3, 5};
	keyboard['n'] = {3, 6};
	keyboard['m'] = {3, 7};
	keyboard[','] = {3, 8};
	keyboard['.'] = {3, 9};
	keyboard['/'] = {3, 10};

	// ROW 4 SHIFT
	keyboard['<'] = {3, 8};
	keyboard['>'] = {3, 9};
	keyboard['?'] = {3, 10};

	map<char, double> distances;
	for(map<char, pair<int, int>>::iterator it = keyboard.begin(); it != keyboard.end(); ++it){
		double smallest = 100000;
		
		double f = calcdist(it->second, keyboard['f']);
		smallest = min(f, smallest);
		
		double g = calcdist(it->second, keyboard['g']);
		smallest = min(g, smallest);
		
		double h = calcdist(it->second, keyboard['h']);
		smallest = min(h, smallest);

		double j = calcdist(it->second, keyboard['j']);
		smallest = min(j, smallest);
		
		distances[it->first] = smallest;
	}

	return distances;
}


map<char, double> TwohandQwerty(){
	map<char, pair<int, int>> keyboard;
	
	// ROW 1
	keyboard['`'] = {0, 0};
	keyboard['1'] = {0, 1};
	keyboard['2'] = {0, 2};
	keyboard['3'] = {0, 3};
	keyboard['4'] = {0, 4};
	keyboard['5'] = {0, 5};
	keyboard['6'] = {0, 6};
	keyboard['7'] = {0, 7};
	keyboard['8'] = {0, 8};
	keyboard['9'] = {0, 9};
	keyboard['0'] = {0, 9};
	keyboard['-'] = {0, 10};
	keyboard['='] = {0, 11};

	// ROW 1 SHIFT
	keyboard['~'] = {0, 0};
	keyboard['!'] = {0, 1};
	keyboard['@'] = {0, 2};
	keyboard['#'] = {0, 3};
	keyboard['$'] = {0, 4};
	keyboard['%'] = {0, 5};
	keyboard['^'] = {0, 6};
	keyboard['&'] = {0, 7};
	keyboard['*'] = {0, 8};
	keyboard['('] = {0, 9};
	keyboard[')'] = {0, 9};
	keyboard['_'] = {0, 10};
	keyboard['+'] = {0, 11};
	
	// ROW 2
	keyboard['q'] = {1, 1};
	keyboard['w'] = {1, 2};
	keyboard['e'] = {1, 3};
	keyboard['r'] = {1, 4};
	keyboard['t'] = {1, 5};
	keyboard['y'] = {1, 6};
	keyboard['u'] = {1, 7};
	keyboard['i'] = {1, 8};
	keyboard['o'] = {1, 9};
	keyboard['p'] = {1, 9};
	keyboard['['] = {1, 10};
	keyboard[']'] = {1, 11};
	keyboard['\\'] = {1, 12};
	
	// ROW 2 SHIFT
	keyboard['{'] = {1, 10};
	keyboard['}'] = {1, 11};
	keyboard['|'] = {1, 12};

	
	// ROW 3
	keyboard['a'] = {2, 1};
	keyboard['s'] = {2, 2};
	keyboard['d'] = {2, 3};
	keyboard['f'] = {2, 4};
	keyboard['g'] = {2, 5};
	keyboard['h'] = {2, 6};
	keyboard['j'] = {2, 7};
	keyboard['k'] = {2, 8};
	keyboard['l'] = {2, 9};
	keyboard[';'] = {2, 9};
	keyboard['\''] = {2, 10};

	// ROW 3 SHIFT
	keyboard[':'] = {2, 9};
	keyboard['"'] = {2, 10};
	
	// ROW 4
	keyboard['z'] = {3, 1};
	keyboard['x'] = {3, 2};
	keyboard['c'] = {3, 3};
	keyboard['v'] = {3, 4};
	keyboard['b'] = {3, 5};
	keyboard['n'] = {3, 6};
	keyboard['m'] = {3, 7};
	keyboard[','] = {3, 8};
	keyboard['.'] = {3, 9};
	keyboard['/'] = {3, 9};

	// ROW 4 SHIFT
	keyboard['<'] = {3, 8};
	keyboard['>'] = {3, 9};
	keyboard['?'] = {3, 9};

	map<char, double> distances;
	for(map<char, pair<int, int>>::iterator it = keyboard.begin(); it != keyboard.end(); ++it){
		double smallest = 100000;

		double a = calcdist(it->second, keyboard['a']);
		smallest = min(a, smallest);

		double s = calcdist(it->second, keyboard['s']);
		smallest = min(s, smallest);

		double d = calcdist(it->second, keyboard['d']);
		smallest = min(d, smallest);
		
		double f = calcdist(it->second, keyboard['f']);
		smallest = min(f, smallest);
		
		double j = calcdist(it->second, keyboard['j']);
		smallest = min(j, smallest);
		
		double k = calcdist(it->second, keyboard['k']);
		smallest = min(k, smallest);
		
		double l = calcdist(it->second, keyboard['l']);
		smallest = min(l, smallest);

		distances[it->first] = smallest;
	}

	return distances;
}

int main(){
	map<char, double> SingleDistances = OnehandQwerty();
	map<char, double> DoubleDistances = TwohandQwerty();
	map<char, double> DvorakDistances = Dvorak();


	string line;
	while(getline(cin, line)){
		double SingleScore = 0, DoubleScore = 0, DvorakScore = 0;
		for (int i = 0; i < line.length(); ++i){
		 	if(line[i] == ' ')
		 		continue;
		 	
		 	SingleScore += SingleDistances[tolower(line[i])] * 2.0;
		 	DoubleScore += DoubleDistances[tolower(line[i])] * 2.0;
		 	DvorakScore += DvorakDistances[tolower(line[i])] * 2.0;
		} 

		printf("%.2f %.2f %.2f\n", DoubleScore, SingleScore, DvorakScore);
	}
	return 0;
}