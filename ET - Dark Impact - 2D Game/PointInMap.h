/*Klasa po�rednia wspomagaj�ca dzia�anie odczytywania z klawiatury.*/

#include "Point.h"

#pragma once
class PointInMap 
	: public Point
{
public:
	PointInMap();
	Point point; //pozycja na mapie wzgl�dem osi xy
	//int xpos; //pozycja na mapie wzgl�dem osi x
	//int ypos; //pozycja na mapie wzgl�dem osi y
	char input; //obecny klawisz
	char previnput;	//wcze�niejszy klawisz
};

