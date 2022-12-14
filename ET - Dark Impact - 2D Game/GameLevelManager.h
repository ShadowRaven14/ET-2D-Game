/*Klasa skupia wszystkie dostępne poziomy i nimi zarządza. 
Tutaj zachodzie przełączanie między poszczególnymi poziomami.*/

#pragma once
#include "GameLevel.h"

class GameLevelManager
{
public:
	GameLevelManager();
	~GameLevelManager();
	void Update(); //Aktualizacja
	void Render(); //Renderowanie

	Point TranslatePoint(SDL_Rect currentPoint);
	void ChangeLevel(GameLevel* newLevel); //Zmiana obecnego punktu
	void HeroCollideWithTeleport();
	//void ChangeTeleportPoint(Point newPoint); //Zmiana obecnego punktu

private:
	GameLevel *basicLevel, *secondLevel, *thirdLevel;
	GameLevel* currentLevel;
	short currentLevelID;
};

