/*Klasa po�rednia wspomagaj�ca dzia�anie odczytywania z klawiatury.*/

#include "Point.h"

#pragma once
class CoordinatesOfHero 
	: public Point
{
public:
	CoordinatesOfHero();
	Point point; //pozycja na mapie wzgl�dem osi xy
	char input; //obecny klawisz
	char previnput;	//wcze�niejszy klawisz
};

