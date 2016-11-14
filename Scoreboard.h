#include "IScoreboard.h"
#include <vector>
using std::vector;

class Competitor
{
	public:
		Competitor(int periods);
		void clear();
		void setScore(int period, int score);
		int getScore(int period);
		int getTotalScore();
	private:
		vector<int> _scores;
};

class Scoreboard : public IScoreboard
{
	public:
		Scoreboard(int competitor, int periods);
		void setScore(int competitor, int period, int score);
		int getScore(int competitor, int period);
		int getTotalScore(int competitor);
		void clearScoreboard();

	private:
    bool competitorInBounds(int competitor);
		vector<Competitor> _competitors;
};
