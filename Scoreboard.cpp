#include "Scoreboard.h"
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

bool Scoreboard::competitorInBounds(int competitor)
{
	if(competitor <= (int) competitors.size() && competitor > 0)
    return true;
  else
    return false;
}

void Scoreboard::setScore(int competitor, int period, int score)
{
	if(competitorInBounds(competitor))
	{
		competitors[competitor-1].setScore(period, score);
	}
}

int Scoreboard::getScore(int competitor, int period)
{
	if(competitorInBounds(competitor))
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
	if(competitorInBounds(competitor))
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
	for(unsigned x = 0; x < competitors.size(); x++)
	{
		competitors[x].clear();
	}
}

Competitor::Competitor(int periods) :scores(periods, 0)
{
}

void Competitor::clear()
{
	for(unsigned x = 0; x < scores.size(); x++)
	{
		scores[x] = 0;
	}
}

int Competitor::getScore(int period)
{
	if(period <= (int) scores.size() && period > 0)
	{
		return scores[period-1];
	}
	else
	{
		return INT_MIN;
	}
}

void Competitor::setScore(int period, int score)
{
	if(period >= (int) scores.size())
	{
	}
	else
	{
		scores[period-1] = score;
	}
}

int Competitor::getTotalScore()
{
	int sum = 0;
	for(unsigned x = 0; x < scores.size(); x++)
	{
		sum = sum + scores[x];
	}
	return sum;
}
