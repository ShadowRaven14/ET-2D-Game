/*Klasa pośrednia wspomagająca działanie odczytywania z klawiatury.*/

#include "Point.h"

#pragma once
class CoordinatesOfHero 
	: public Point
{
public:
	CoordinatesOfHero();
	Point point; //pozycja na mapie względem osi xy
	char input; //obecny klawisz
	char previnput;	//wcześniejszy klawisz
};

