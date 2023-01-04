#include "Game.h"
Game* mainGame = nullptr;


int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    mainGame = new Game();
    mainGame->Init("MainGameWindow", 1312, 928, false);

    while (mainGame->Running())
    {
        frameStart = SDL_GetTicks();

        mainGame->HandleEvents();
        mainGame->Update();
        mainGame->Render();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    mainGame->Clean();
    return 0;
}