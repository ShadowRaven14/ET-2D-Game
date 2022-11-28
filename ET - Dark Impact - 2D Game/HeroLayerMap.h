/*Klasa reprezentuj�ca tablica po kt�rej porusza si� g��wna posta�, 
wraz z najwa�niejszymi obiektami.*/

#pragma once
#include "_VirtualMap.h"

class HeroLayerMap :
    public virtual _VirtualMap
{
public:
	//Zaawansowane
	void DrawMap(); //rysuj map�
	void InitializeTextures(); //inicjalizuj tekstury

protected:
	//Grafika
	SDL_Texture* apple;
	SDL_Texture* pixelsnake;
	SDL_Texture* pixelapple;
	SDL_Texture* pixelgoldenapple;
	SDL_Texture* pixelraven;
};

