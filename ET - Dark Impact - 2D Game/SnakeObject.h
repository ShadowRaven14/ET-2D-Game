/*Do wyrzucenia.*/

#pragma once
#include "_VirtualObject.h"


class SnakeObject
	: public virtual _VirtualObject
{

public:
	SnakeObject(const char* texturesheet, int x, int y);
	~SnakeObject();
	void Update();
	void Render();

	// ZARZ�DZANIE WʯEM
	void InitializeTextures(); //Inicjalizuj grafiki
	void InitializeSnake();	// Inicjalizuj W�a
	void MoveWithSnake();	// Zarz�dzaj W�em
	void SetSnakeSpeed();	// Ustaw pr�dko�� W�a
	void IsGameOver();		// Sprawd� warunki ko�ca
	void HandleSnakeGraphics(); // Zarz�dzaj grafikami W�a
	void HandleKeyboard();	// Obs�uguj input klawiatury
	void FeedingSnake();	// Nakarm W�a
	// ZARZ�DZANIE WʯEM



	// TABLICA
	void LoadMapFromVariable(int arr[29][41]);
	void DrawMap(int arr[29][41]);
	void AppleTree(int arr[29][41]);
	// TABLICA



	//ZARZ�DZENIE WʯEM
	int width, height;
	char input, previnput; //poruszanie
	int speed, delay; //szybko��
	int size; //rozmiar
	int snakeX[100], snakeY[100], tempX[100], tempY[100];

	int item_count;
	int apple_count, golden_apple_count, crow_count;
	std::vector<int> itemX, itemY;
	int tailX, tailY;
	int points;



	//TABLICA
	int map[29][45];
	int interval1, interval2, interval3;
	SDL_Rect srcRect, destRect;
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