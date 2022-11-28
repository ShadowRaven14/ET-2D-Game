#pragma once
#include "BackgroundMap.h"
#include "EnemyObject.h"
#include "HeroObject.h"
#include "ChestObject.h"
#include "Point.h"

class BasicGameLevel
{
public:
	BasicGameLevel(std::string bnMap, const char* bnHero, const char* bnEnemy, const char* bnChest);
	BasicGameLevel(const BasicGameLevel &tempLevel);
	~BasicGameLevel();
	void Update(); //Aktualizacja
	void Render(); //Renderowanie

	BackgroundMap *basicMap;
	HeroObject *basicHero;
	EnemyObject *basicEnemy;
	ChestObject *basicChest;

	Point *teleportPoint;
};

