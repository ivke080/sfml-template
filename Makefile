exec.exe: main.o Collision.o Entity.o Game.o State.o MenuState.o PlayState.o
	g++ -std=c++11 main.o Collision.o Entity.o Game.o State.o MenuState.o PlayState.o -o exec.exe -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Collision.o: Collision.cpp
	g++ -std=c++11 -c Collision.cpp

Entity.o: Entity.cpp
	g++ -std=c++11 -c Entity.cpp

Game.o: Game.cpp
	g++ -std=c++11 -c Game.cpp

State.o: State.cpp
	g++ -std=c++11 -c State.cpp

MenuState.o: MenuState.cpp
	g++ -std=c++11 -c MenuState.cpp

PlayState.o: PlayState.cpp
	g++ -std=c++11 -c PlayState.cpp
