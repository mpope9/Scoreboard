CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -W -Werror -pedantic

scoreboard: main.o scoreboard.o competitor.o
	$(CXX) -o scoreboard main.o scoreboard.o competitor.o

main.o: main.cpp scoreboard.h competitor.h

scoreboard.o: scoreboard.cpp scoreboard.h competitor.h

competitor.o: competitor.cpp competitor.h

clean:
	rm -f scoreboard main.o scoreboard.o competitor.o
