#include "AppleObject.h"

AppleObject::AppleObject(const char* texturesheet, int x, int y)
{
	std::cout << "Nowe Apple na ziemi" << std::endl;
	objTexture = TextureManager::LoadTexture(texturesheet);

	srand((unsigned)time(NULL));
	point.xpos = (rand() % (25 - 2) + 1) * 32;
	point.ypos = (rand() % (20 - 2) + 1) * 32;
	qx = true, qy = true;
}

AppleObject::~AppleObject()
{
	//TO-DO
}

void AppleObject::Update()
{
	UpdateInit(); //Podstawowa funkcja z klasy interfejsu
}

void AppleObject::Render()
{
	RenderInit(); //Podstawowa funkcja z klasy interfejsu
}