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
		vector<int> scores;
};
