#include "scoreboard.h"
#include <iostream>
#include <climits>
using std::cout;
using std::endl;

Scoreboard::Scoreboard(int competitor, int periods)
{
	for(int x = 0; x < competitor; x++)
	{
		Competitor myComp(periods);
		competitors.push_back(myComp);
	}
}

void Scoreboard::setScore(int competitor, int period, int score)
{
	if(competitor <= competitors.size() && competitor > 0)
	{
		competitors[competitor-1].setScore(period, score);
	}
}

int Scoreboard::getScore(int competitor, int period)
{
	if(competitor <= competitors.size() && competitor > 0)
	{
		return competitors[competitor-1].getScore(period);
	}
	else
	{
		return INT_MIN;
	}
}


int Scoreboard::getTotalScore(int competitor)
{
	if(competitor <= competitors.size() && competitor > 0)
	{
		return competitors[competitor-1].getTotalScore();
	}
	else
	{
		return 0;
	}
}

void Scoreboard::clearScoreboard()
{
	for(int x = 0; x < competitors.size(); x++)
	{
		competitors[x].clear();
	}
}


int main()
{
	Scoreboard myScore(2, 9);
	for(int x = 1; x <= 2; x++)
	{
		myScore.setScore(x, 1, x*2);
	}
	for(int x = 1; x <= 2; x++)
	{
		myScore.setScore(x, 2, x*2);
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 1) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 2) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 10) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 0) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x+2, 2) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(0, 2) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getTotalScore(x) << endl;
	}
	cout << "Score Board cleared" << endl;
	myScore.clearScoreboard();	
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 1) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 10) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x, 0) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(x+2, 2) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getScore(0, 2) << endl;
	}
	for(int x = 1; x <= 2; x++)
	{
		cout << myScore.getTotalScore(x) << endl;
	}

}
