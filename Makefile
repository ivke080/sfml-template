exec.exe: main.o Collision.o Entity.o Game.o
	g++ main.o Collision.o Entity.o Game.o -o exec.exe -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

Collision.o: Collision.cpp
	g++ -c Collision.cpp

Entity.o: Entity.cpp
	g++ -c Entity.cpp

Game.o: Game.cpp
	g++ -c Game.cpp
