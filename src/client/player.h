#pragma once

#include <stdbool.h>
#include <SDL.h>

#include "events.h"

typedef struct Player
{
    SDL_Rect rect;
    SDL_Rect position;
    SDL_Rect cameraRect;
    bool infected;
    bool left;
    bool right;
    bool up;
    bool down;
    SDL_Texture* image;
    int frameWidth, frameHeight;
    int textureWidth, textureHeight;
} Player;

void CreatePlayer(Player* player, int xPos, int yPos);
void HandlePlayerEvents(SDL_Event *event);
void OnPlayerUpdate(Player* player);
void OnPlayerRender(Player* player);
bool IsPlayerMoving(Player* player);