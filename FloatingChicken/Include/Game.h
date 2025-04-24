#pragma once

#include <SFML/Graphics.hpp>

#include "Enum.h"
#include "MenuScene.h"
#include "Global.h"
#include "algorithm"

class Game
{
public:
	Game();

	void GameInit();
	void GameRunning();
	void GameShutDown();

	void Load();
	void Update();
	void Render();

	void UpdateDeltaTime();

	void WindowPollEv();

private:
	sf::RenderWindow* mWindow;

	sf::Clock dtClock;
	float deltaTime;

	SceneState currentState;

	MenuScene mMenuScene;

	std::vector<*Scene> scenes;
};
