#include <climits>
#include "competitor.h"

Competitor::Competitor(int periods) :scores(periods, 0)
{
}

void Competitor::clear()
{
	for(int x = 0; x < scores.size(); x++)
	{
		scores[x] = 0;
	}
}

int Competitor::getScore(int period)
{
	if(period <= scores.size() && period > 0)
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
	if(period >= scores.size())
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
	for(int x = 0; x < scores.size(); x++)
	{
		sum = sum + scores[x];
	}
	return sum;
}
