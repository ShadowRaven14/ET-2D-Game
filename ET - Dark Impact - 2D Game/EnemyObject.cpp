#include "EnemyObject.h"

//Konstruktor wroga
EnemyObject::EnemyObject(const char* texturesheet, int x, int y)
{
	ObjectInit(texturesheet, x, y); //Podstawowa funkcja z klasy interfejsu
	sx = sy = true;
}

//Aktualizacja wroga
void EnemyObject::Update()
{
	UpdateInit(); //Podstawowa funkcja z klasy interfejsu
	MoveWithEnemyV1();
}

//Renderowanie wroga
void EnemyObject::Render()
{
	RenderInit(); //Podstawowa funkcja z klasy interfejsu
}

//Poruszanie si� wroga
void EnemyObject::MoveWithEnemyV1()
{
	std::cout << cordsOfObject.point.x << " " << cordsOfObject.point.y << " " << sx << " " << sy << std::endl;

	if (cordsOfObject.point.x >= 1248) sx = false;
	else if (cordsOfObject.point.x <= 64) sx = true;

	switch (sx)
	{
	case true:
		cordsOfObject.point.x = cordsOfObject.point.x + 8;
		break;

	case false:
		cordsOfObject.point.x = cordsOfObject.point.x - 8;
		break;
	}
	

	if (cordsOfObject.point.y >= 864) sy = false;
	else if (cordsOfObject.point.y <= 64) sy = true;

	switch (sy)
	{
	case true:
		cordsOfObject.point.y = cordsOfObject.point.y + 8;
		break;

	case false:
		cordsOfObject.point.y = cordsOfObject.point.y - 8;
		break;
	}


}