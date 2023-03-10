#include <iostream>
#include <vector>
#include <string> 
#include "GameLogic.hpp"

using namespace std;
Player::Player(GameRules *r, int playerNr, int divider)
    : rules(r), playerNumber(playerNr), dividerToSkip(divider) {}

GameRules::GameRules(int numberOfPlayers, int divider) 
{
  currentNumber = 1;
  currentPlayer = 3;
  playUntilThisNumber = 100;
  dividerToSkip = divider;
  fillPlayerList(numberOfPlayers);
}

 int GameRules::getTheAnswer() { return 42; }

 int GameRules::getCurrentNumber() { return this->currentNumber; }

 void GameRules::increaseCurrentNumber() { this->currentNumber++; }

 void GameRules::fillPlayerList(int numberOfPlayers) {
   for (int i = 0; i < numberOfPlayers; i++) {
     playerList.push_back(Player(this, i+1, dividerToSkip));
   }
 }

 string Player::play() 
 { 
     string s;
     if (rules->getCurrentNumber() % dividerToSkip == 0) {
        s = "Player " + to_string(playerNumber) +  " : CowaBunga";
     }
     else {
        s = "Player " + to_string(playerNumber) + ": " + to_string(rules->getCurrentNumber());
     }
     rules->increaseCurrentNumber();
     return s;
 }

 void GameRules::startGame() 
 { 
    while (currentNumber <= playUntilThisNumber) {
        cout << playerList[currentPlayer++ % playerList.size()].play() << endl;
    }
 }