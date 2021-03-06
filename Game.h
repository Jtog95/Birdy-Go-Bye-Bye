#include <iostream>
#include<vector>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#include"Player.h"
#include "Bird.h"



#ifndef  GAME_H
#define GAME_H

class Game
{
	public:
		Game();
		Game(const int,const int);
		void run();

	private:
		sf::RenderWindow window;
		std::unique_ptr<Player> player;
		std::unique_ptr<Bird> birdPtr;
		bool levelWon;
		bool gameOver;
		bool timeRemaning;
		std::vector<Bird> birdVectOne;
		Bird brownBird = BirdType::Brown;
		Bird blueBird = BirdType::Blue;
		Bird redBird = BirdType::Red;
		int frame = 0;
		int frameCounter = 0;
		float xPosVect1;
		sf::Vector2f vectOnePos;
		std::vector<Bird> birdVectTwo;
		sf::Vector2f vectTwoPos;
		sf::Texture cloudText1;
		sf::Texture cloudText2;

		sf::Sprite cloudSprite1;
		sf::Sprite cloudSprite2;

		bool shotFired;
		sf::Font font;
		sf::RectangleShape nextLevelRect;
		sf::Text nextLevelText;

		sf::Text gameOverText;


		BirdType targetBird;

		sf::Text scoreText1;
		sf::Text scoreText2;
		int score = 0;

		sf::Text currentLevelText1;
		sf::Text currentLevelText2;
		int currentLevel = 1;
		
		sf::Text timerText;
		sf::Clock clock;
		int countDownTimer = 10;

		sf::Text targetText;
		
		Bird targetBirdImage;




		// FUNCTIONS
		std::vector<Bird> createBirdVector(int numOfBrown, int numOfBlue, int numOfRed);

		void startBirdFlight();

		void playerShoots(const sf::Event& event);

		void initVariables();

		void displayGameOver();

		void displayNextLevel();

		void handleInputs();

		void handleButtonEvents(sf::Event&);

		void updateObjects();

		void drawObjects();



};



#endif // ! GAME_H

