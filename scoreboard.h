#include "competitor.h"
#include "IScoreboard.h"
#include <vector>
using std::vector;

class Scoreboard : public IScoreboard
{
	public:
		Scoreboard(int competitor, int periods);
		void setScore(int competitor, int period, int score);
		int getScore(int competitor, int period);
		int getTotalScore(int competitor);
		void clearScoreboard();

	private:
		vector<Competitor> competitors;
};
