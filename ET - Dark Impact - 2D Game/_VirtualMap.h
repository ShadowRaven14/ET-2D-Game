#pragma once
#include "Game.h"
#include "TextureManager.h"

class _VirtualMap
{
public:
	//Zaawansowane
	void LoadMap(int arr[29][41]); //pobierz map�
	void DrawMap(int arr[29][41]); //rysuj map�
	void InitializeTextures(); //inicjalizuj tekstury

private:
	int map[29][45]; //mapa
	SDL_Rect srcRect, destRect; //Wymiary obiektu w pikselach, w grze
};

