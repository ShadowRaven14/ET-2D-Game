/*Klasa skupia wszystkie dost�pne poziomy i nimi zarz�dza. 
Tutaj zachodzie prze��czanie mi�dzy poszczeg�lnymi poziomami.*/

#pragma once
#include "GameLevel.h"

class GameLevelManager
{
public:
	GameLevelManager();
	~GameLevelManager();
	void Update(); //Aktualizacja
	void Render(); //Renderowanie

	void TeleportToNewMap(Point currentPoint); //Zmiana bie��cej mapy
	void ChangeTeleportPoint(Point newPoint); //Zmiana obecnego punktu
	Point TranslatePoint(SDL_Rect currentPoint);
	void ChangeLevel(GameLevel *newLevel); //Zmiana obecnego punktu

private:
	GameLevel *basicLevel, *secondLevel, *thirdLevel;
	GameLevel* currentLevel;
	short currentLevelID;
};

