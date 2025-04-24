#include "Game.h"

Game::Game() :
	mWindow(new sf::RenderWindow(sf::VideoMode({ SCREEN_WIDTH, SCREEN_HEIGHT }), GAME_NAME)),
	currentState(SceneState::Menu),
	mMenuScene(mWindow)
{
	//scenes.push_back(mMenuScene);
	scenes.push_back(new MenuScene(mWindow, SceneState::Menu));
}

void Game::GameInit()
{
	Load();
	std::cout << "Game Initialize!" << std::endl;
}

void Game::GameRunning()
{
	std::cout << "Game Starting!" << std::endl;

	while(mWindow->isOpen())
	{
		WindowPollEv();

		UpdateDeltaTime();

		Update();

		Render();
	}
}

void Game::GameShutDown()
{
	std::cout << "Shut Down Game!" << std::endl;



	mWindow = nullptr;
	delete mWindow;
}

void Game::Load()
{
	switch (currentState)
	{
	case SceneState::Menu:
		mMenuScene.Load();
		break;
	case SceneState::Setting:
		break;
	case SceneState::HowToPlay:
		break;
	case SceneState::Gameplay:
		break;
	case SceneState::Gameover:
		break;
	default:
		break;
	}
}

void Game::Update()
{
	bool isChangeScene = false;

	//TO BE IMPLEMENT

	if (isChangeScene) Load();
}

void Game::Render()
{
	mWindow->clear(sf::Color::Cyan);

	for (int i = 0; i < scenes.size(); i++)
	{
		if (scenes[i].GetSceneState() == currentState)
		{
			scenes[i].Render();
			break;
		}
	}

	mWindow->display();
}

void Game::UpdateDeltaTime()
{
	deltaTime = dtClock.restart().asSeconds();
}

void Game::WindowPollEv()
{
	if (mWindow == nullptr) return;

	while (const std::optional event = mWindow->pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			mWindow->close();
		}
	}
}
