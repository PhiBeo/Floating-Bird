#include "Game.h"

Game::Game() :
	mWindow(new sf::RenderWindow(sf::VideoMode({ SCREEN_WIDTH, SCREEN_HEIGHT }), GAME_NAME)),
	currentState(SceneState::Menu)
{
	mScenes.push_back(std::make_unique<MenuScene>(mWindow));
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

	for (int i = 0; i < mScenes.size(); i++)
	{
		mScenes[i]->Unload();
	}

	mWindow = nullptr;
	delete mWindow;
}

void Game::Load()
{
	for (int i = 0; i < mScenes.size(); i++)
	{
		if (mScenes[i]->GetSceneState() == currentState)
		{
			mScenes[i]->Load();
			break;
		}
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

	for (int i = 0; i < mScenes.size(); i++)
	{
		if (mScenes[i]->GetSceneState() == currentState)
		{
			mScenes[i]->Render();
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
