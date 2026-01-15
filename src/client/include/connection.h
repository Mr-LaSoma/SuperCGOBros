#pragma once

#include "anim.h"
#include "player.h"

LocalPlayer MainPlayer; // The client controlled player
LocalPlayer *ConnectedPlayers; // The connected players in the game (excluded the client player)

void CreateNewConnectionPlayer(SendablePlayer *data) {}