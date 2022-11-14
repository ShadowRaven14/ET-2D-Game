#pragma once
#include "_VirtualObject.h"

class HeroObject
	: public _VirtualObject
{
public:
	//Podstawowe
	HeroObject(const char* texturesheet, int x, int y); //Konstruktor bohatera
	~HeroObject(); //Destruktor bohatera
	void Update(); //Aktualizacja bohatera
	void Render(); //Renderowanie bohatera

	//Zaawansowane
	void MoveWithHero(); //Poruszanie si� bohaterem
	void HandleKeyboard(); //Obs�uga klawiatury

	char input, previnput; //poruszanie
};