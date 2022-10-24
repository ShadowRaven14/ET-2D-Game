#pragma once
#include "Game.h"
#include "TextureManager.h"

class Object
{
public:
	void Update();
	void Render();

protected:
	int xpos;
	int ypos;
	bool qx;
	bool qy;

	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect;
};
