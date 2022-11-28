/*Klasa zajmuj�ca si� pobieraniem znak�w z klawiatury.
Przechowuje obecny i wcze�niej naci�ni�ty klawisz.*/

#pragma once
#include "Game.h"
#include "PointInMap.h"

class KeyboardManager
{
public:
	static PointInMap HandleKeyboard(PointInMap point); //Obs�uga klawiatury
	char input; //obecny klawisz
	char previnput; //wcze�niejszy klawisz
};

