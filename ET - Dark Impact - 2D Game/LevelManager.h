/*Klasa skupia wszystkie dost�pne poziomy i nimi zarz�dza. 
Tutaj zachodzie prze��czanie mi�dzy poszczeg�lnymi poziomami.*/

#pragma once
#include "BasicGameLevel.h"

class LevelManager
{
public:
	LevelManager();
	~LevelManager();
	void Update(); //Aktualizacja
	void Render(); //Renderowanie

	void TeleportToNewMap(Point currentPoint); //Zmiana bie��cej mapy
	void ChangeTeleportPoint(Point newPoint); //Zmiana obecnego punktu
	Point TranslatePoint(SDL_Rect currentPoint);
	void ChangeLevel(BasicGameLevel *newLevel); //Zmiana obecnego punktu

private:
	BasicGameLevel *basicLevel, *secondLevel, *thirdLevel;
	BasicGameLevel* currentLevel;
	short currentLevelID;
};

