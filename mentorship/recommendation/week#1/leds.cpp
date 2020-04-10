#include <bits/stdc++.h>
using namespace std;

map<int, int> scores;

void initleds(){
	scores[0] = 6;
	scores[1] = 2;
	scores[2] = 5;
	scores[3] = 5;
	scores[4] = 4;
	scores[5] = 5;
	scores[6] = 6;
	scores[7] = 3;
	scores[8] = 7;
	scores[9] = 6;
}


int getleds(int score){
	if(score == 0)
		return scores[0];

	int leds = 0;
	while(score != 0){
		leds += scores[score%10];
		score /= 10;
	}
	return leds;
}

int timetosecs(string time){
	int totalsecs = 0;
	
	int hours = int(time[0] - '0')*10;
	hours += int(time[1] - '0');
	totalsecs += hours*60*60;

	int mins = int(time[3] - '0')*10;
	mins += int(time[4] - '0');
	totalsecs += mins*60;

	int secs = int(time[6] - '0')*10;
	secs += int(time[7] - '0');
	totalsecs+=secs;

	return totalsecs;
	
}

int main(){
	initleds();
	string key, time, team;
	int homescore = 0, guestscore = 0, score;
	int curTime = 0;
	int total = 0;
	int T = 1;
	while(cin>>key){
		if(key == "START"){
			cin>>time;
			curTime = timetosecs(time);
		}

		if(key == "SCORE"){
			cin>>time;
			int newTime = timetosecs(time);
			int ledsOn = getleds(homescore) + getleds(guestscore);
			total += ledsOn * (newTime - curTime);
			curTime = newTime;

			cin>>team;
			cin>>score;

			if(team == "home")
				homescore += score;
			else if(team == "guest")
				guestscore += score;
		}

		if(key == "END"){
			cin>>time;
			int newTime = timetosecs(time);
			int ledsOn = getleds(homescore) + getleds(guestscore);
			total += ledsOn * (newTime - curTime);
			printf("Case %d: %d\n", T, total);
			curTime = 0;
			total = 0;
			homescore = 0;
			guestscore = 0;
			T++;
		}
	}
	return 0;
}