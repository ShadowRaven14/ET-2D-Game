#pragma once
#include "Game.h"


class HeroObject
{

public:
	HeroObject(const char* texturesheet, int x, int y);
	~HeroObject();

	void Update();
	void Render();



	// ZARZ�DZANIE WʯEM
	void CreateHero();		// Utw�rz W�a	
	void InitializeTextures(); //Inicjalizuj grafiki
	void InitializeHero();	// Inicjalizuj W�a
	void MoveWithHero();	// Zarz�dzaj W�em
	void SetHeroSpeed();	// Ustaw pr�dko�� W�a
	void IsGameOver();		// Sprawd� warunki ko�ca
	void HandleHeroGraphics(); // Zarz�dzaj grafikami W�a
	void HandleKeyboard();	// Obs�uguj input klawiatury
	void FeedingHero();	// Nakarm W�a
	// ZARZ�DZANIE WʯEM



	// TABLICA
	void LoadMap(int arr[29][41]);
	void DrawMap(int arr[29][41]);
	void AppleTree(int arr[29][41]);
	// TABLICA


private:
	//Podstawowe
	int xpos;
	int ypos;
	bool qx;
	bool qy;
	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect;



	//ZARZ�DZENIE WʯEM
	int width, height;
	char input, previnput; //poruszanie
	int speed, delay; //szybko��
	int rozmiar; //rozmiar
	int snakeX[100], snakeY[100], tempX[100], tempY[100];

	int item_count;
	int apple_count, golden_apple_count, crow_count;
	vector<int> itemX, itemY;
	int tailX, tailY;
	int punkty;



	//TABLICA
	int map[29][45];
	int interval1, interval2, interval3;
	SDL_Rect src, dest;
	SDL_Texture* blank;
	SDL_Texture* apple;
	SDL_Texture* pixelsnake;
	SDL_Texture* pixelapple;
	SDL_Texture* pixelgoldenapple;
	SDL_Texture* pixelraven;


	//Cz�ci Snake'a
	SDL_Texture* snake_head_down;
	SDL_Texture* snake_head_up;
	SDL_Texture* snake_head_right;
	SDL_Texture* snake_head_left;

	SDL_Texture* snake_tail_down;
	SDL_Texture* snake_tail_up;
	SDL_Texture* snake_tail_right;
	SDL_Texture* snake_tail_left;

	SDL_Texture* snake_turn_1;
	SDL_Texture* snake_turn_2;
	SDL_Texture* snake_turn_3;
	SDL_Texture* snake_turn_4;

	SDL_Texture* snake_body_vert;
	SDL_Texture* snake_body_horizon;
};