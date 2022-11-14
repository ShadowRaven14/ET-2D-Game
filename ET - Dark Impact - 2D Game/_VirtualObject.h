#pragma once
#include "Game.h"
#include "TextureManager.h"

class _VirtualObject
{
public:
	void Update(); //Aktualizowanie obiektu
	void Render(); //Renderowanie obiektu

protected:
	int xpos; //Pozycja wzgl�dem wykresu -> x
	int ypos; //Pozycja wzgl�dem wykresu -> y
	bool qx;
	bool qy;

	SDL_Texture* objTexture; //Tekstura obiektu
	SDL_Rect srcRect, destRect; //Wymiary obiektu w pikselach, w grze
};

