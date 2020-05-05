#pragma once

#include <stdbool.h>
#include <SDL.h>

#include "player.h"
#include "timer.h"
#include "netplayer.h"
#include "shared/hashtable.h"

#define WINDOW_W 375
#define WINDOW_H 667

typedef struct Game
{
    bool running;
    bool connected;

    SDL_Window* window;
    SDL_Renderer* renderer;

    Uint32 fps;

    SDL_Texture *background;
    int mapWidth, mapHeight;
    Player player;
    Timer timer;
    hashtable_t players;
} Game;

Game* GetGame();
Uint32 GameStartFrame();
void GameEndFrame(Uint32 framestart);
void GameInitNetPlayersTable(uint16_t count);
void GameInitNetPlayer(PlayerData* data);
void GameInitNetPlayers(PlayerData* players, uint16_t count); // not used
void GameDisposeNetPlayers();
NetPlayer* GameGetNetPlayer(PlayerID id);
uint16_t GetPlayerCount();
NetPlayer* GetAllPlayers();
void ApplyMovementDataToPlayer(PlayerMovementData* data);
