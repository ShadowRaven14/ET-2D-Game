/*Klasa reprezentuj?c? klas? postaci.*/

#pragma once
#include "Game.h"

class BasicClass
{
public:
	BasicClass();
	void CurrentStatistics();

	std::string name;
	int MeleeAttack, RangedAttack, MagicAttack;
	int MeleeDefense, RangedDefense, MagicDefense;
	int Strength, Intelligence, Agility;
};

