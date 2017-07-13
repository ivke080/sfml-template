exec.exe: main.o Entity.o Game.o
	g++ main.o Entity.o Game.o -o exec.exe -lsfml-graphics -lsfml-window -lsfml-system

Entity.o: Entity.cpp
	g++ -c Entity.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

main.o: main.cpp
	g++ -c main.cpp
