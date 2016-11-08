/*
 * IScoreboard.h
 *
 * Author: Kevin Buffardi
 * Updated: Nov 8, 2016
 * Description: Interface for an abstract "scoreboard" for keeping
 *              score for any kind of competition with two or more competitors
 *              and at least one period.
 *
 *              
 */
#ifndef ISCOREBOARD_H_
#define ISCOREBOARD_H_

class IScoreboard
{
  public:
	virtual void setScore(int competitor, int period, int score)=0;
	virtual int getScore(int competitor, int period)=0;
	virtual int getTotalScore(int competitor)=0;
	virtual void clearScoreboard()=0;
};
#endif /* ISCOREBOARD_H_ */
