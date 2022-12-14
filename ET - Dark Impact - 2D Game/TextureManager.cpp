#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* texture)
{
	SDL_Surface* tempSurface = IMG_Load(texture);
	SDL_Texture* yourNewTexture = SDL_CreateTextureFromSurface(Game::mainGameRender, tempSurface);
	SDL_FreeSurface(tempSurface);

	return yourNewTexture;
}

void TextureManager::DrawTexture(SDL_Texture* texture, SDL_Rect srcRect, SDL_Rect destRect)
{
	SDL_RenderCopy(Game::mainGameRender, texture, &srcRect, &destRect);
}