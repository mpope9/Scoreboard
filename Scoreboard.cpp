#include "Scoreboard.h"
#include <iostream>
#include <climits>
using std::cout;
using std::endl;

Scoreboard::Scoreboard(int competitors, int periods)
{
	for(int x = 0; x < competitors; x++)
    _competitors.emplace_back(periods);
}

bool Scoreboard::competitorInBounds(int competitor)
{
	if(competitor <= (int) _competitors.size() && competitor > 0)
    return true;
  else
    return false;
}

void Scoreboard::setScore(int competitor, int period, int score)
{
	if(competitorInBounds(competitor))
		_competitors[competitor-1].setScore(period, score);
}

int Scoreboard::getScore(int competitor, int period)
{
	if(competitorInBounds(competitor))
		return _competitors[competitor-1].getScore(period);
	else
		return INT_MIN;
}


int Scoreboard::getTotalScore(int competitor)
{
	if(competitorInBounds(competitor))
		return _competitors[competitor-1].getTotalScore();
	else
		return 0;
}

void Scoreboard::clearScoreboard()
{
	for(unsigned x = 0; x < _competitors.size(); x++)
		_competitors[x].clear();
}

Competitor::Competitor(int periods) :_scores(periods, 0)
{
}

void Competitor::clear()
{
	for(unsigned x = 0; x < _scores.size(); x++)
		_scores[x] = 0;
}

int Competitor::getScore(int period)
{
	if(period <= (int) _scores.size() && period > 0)
		return _scores[period-1];
	else
		return INT_MIN;
}

void Competitor::setScore(int period, int score)
{
  if(period <= (int) _scores.size())
		_scores[period-1] = score;
}

int Competitor::getTotalScore()
{
	int sum = 0;
	for(unsigned x = 0; x < _scores.size(); x++)
		sum = sum + _scores[x];
	return sum;
}
