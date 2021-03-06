#include <iostream>
#include"Entity.h"

#ifndef  PLAYER_H
#define PLAYER_H

class Player 
{
	public:
		Player();
		Player(const sf::RenderWindow&);
		void setScopePosition(float x, float y);
		sf::Vector2f getScopePosition() const;
		sf::Sprite getSprite() const;
		void draw(sf::RenderWindow&);

	private:
		sf::Texture texture;
		sf::Sprite scopeSprite;
		bool shotFired;
		sf::Vector2f scopePosition;
		int totalBullets;


};


#endif // ! PLAYER_H

