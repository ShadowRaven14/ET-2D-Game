#pragma once
#include "_VirtualMap.h"

class BasicMap :
    public _VirtualMap
{
public:
	//Zaawansowane
	void LoadMap(int arr[29][41]); //pobierz map�
	void DrawMap(int arr[29][41]); //rysuj map�
	void InitializeTextures(); //inicjalizuj tekstury

private:

	//Grafika
	SDL_Texture* blank;
	SDL_Texture* apple;
	SDL_Texture* pixelsnake;
	SDL_Texture* pixelapple;
	SDL_Texture* pixelgoldenapple;
	SDL_Texture* pixelraven;
};

