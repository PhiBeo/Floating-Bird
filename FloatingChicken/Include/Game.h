#pragma once

#include <SFML/Graphics.hpp>

#include "Enum.h"
#include "MenuScene.h"
#include "Global.h"

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

	std::vector<std::unique_ptr<Scene>> mScenes;
};
