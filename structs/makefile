all: program

program: main.o plane.o tools.o
	g++ -g -Wall -std=c++17 main.o plane.o tools.o -o program

main.o: main.cpp 
	g++ -g -c -std=c++17 -Wall main.cpp 

plane.o: plane.cpp
	g++ -g -c -std=c++17 -Wall plane.cpp 

tools.o: tools.cpp
	g++ -g -c -std=c++17 -Wall tools.cpp

clean:
	rm *.o
