all:  part1 part2

part1: part1.o
	g++ -Wall -o part1 part1.o

part1.o: part1.cpp Vector.h List.h
	g++ -Wall -o part1.o -c part1.cpp

part2: part2.o
	g++ -Wall -o part2 part2.o

part2.o: part2.cpp Vector2.h List.h
	g++ -Wall -o part2.o -c part2.cpp

clean:
	rm -f part1 part2 *.o

