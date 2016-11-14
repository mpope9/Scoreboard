#include "Scoreboard.h"
#include <iostream>
using namespace std;

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

  return 0;
}
