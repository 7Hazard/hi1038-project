#pragma once

#include <stdbool.h>
#include <SDL.h>

#include "player.h"

#define WINDOW_W 720
#define WINDOW_H 480

typedef struct Game
{
    bool running;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture *background;
    int mapWidth, mapHeight;
    Player player;
} Game;

Game* GetGame();
