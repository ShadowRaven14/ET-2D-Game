/*Klasa zarz�dzaj�ca �adowaniem tekstur poszczeg�lnych obiekt�w.*/

#pragma once
#include "Game.h"

class TextureManager
{
public:
	static SDL_Texture* LoadTexture(const char* fileName);
	static void DrawTexture(SDL_Texture* tex, SDL_Rect srcRect, SDL_Rect destRect);
};