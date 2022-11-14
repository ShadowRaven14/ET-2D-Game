#include "_VirtualObject.h"

//Aktualizowanie obiektu
void _VirtualObject::Update() 
{
	srcRect.h = 64; //Wysoko�� w pikselach
	srcRect.w = 64; //Szeroko�� w pikselach
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.h = srcRect.h / 2; //Wysoko�� w grze
	destRect.w = srcRect.w / 2; //Szeroko�� w grze
	destRect.x = xpos;
	destRect.y = ypos;
}

//Renderowanie obiektu
void _VirtualObject::Render() 
{
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}
