#ifndef PLAYSTATE_H_
#define PLAYSTATE_H_

#include "Game.h"
#include "State.h"
#include "Entity.h"
#include "Goal.h"
#include "Team.h"
#include "Formation.h"

class PlayState : public State {
public:
    PlayState(Game* game, const std::string& team, const std::string& team2, unsigned short receive_port, unsigned short send_port, std::string ip, bool turn);
    ~PlayState();

    void update();
    void render(sf::RenderWindow& window);
    void keyboard(sf::Keyboard::Key& key);
    void mouse(sf::Event::MouseButtonEvent& event);
    void resetState();
private:

};

#endif
