#ifndef GAMELOGIC_HPP
#define GAMELOGIC_HPP

#include <iostream>
#include <vector>
class Player; 

class GameRules {
 private:
	int currentNumber;
	int currentPlayer;
	int playUntilThisNumber;
	int dividerToSkip;
	std::vector<Player> playerList;

  public:
	GameRules(int numberOfPlayers, int divider);
	int getTheAnswer();
	int getCurrentNumber();
	void increaseCurrentNumber();
	void fillPlayerList(int numberOfPlayers);
	void startGame();
};

class Player {
private:
	GameRules *rules;
	int dividerToSkip;
	int playerNumber;

public:
	Player(GameRules *r, int playerNr, int divider);
	std::string play();

};
#endif