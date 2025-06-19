#pragma once

#include "Application.h"

extern Graphics::Application* Graphics::CreateGame();

int 
main() {
	auto game = Graphics::CreateGame();
	game->run();
	delete game;
}