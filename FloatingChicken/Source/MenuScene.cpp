#include "MenuScene.h"

MenuScene::MenuScene(sf::RenderWindow* window) :
	Scene(window, SceneState::Menu),
	mStartButton(window, sf::Vector2f(HALF_SCREEN_WIDTH, HALF_SCREEN_HEIGHT + BUTTON_HEIGHT * 2))
{
	//mStartButton.onClick = []() {std::cout << "Start Button Pressed" << std::endl; };
}

void MenuScene::Load()
{
	mStartButton.SetButtonString("Start Game");
}

void MenuScene::Update(float deltaTime)
{
	if (mStartButton.IsPressed())
	{
		std::cout << "Start Button Pressed" << std::endl;
	}
}

void MenuScene::Render()
{
	mStartButton.DrawButton(mWindow);
}

void MenuScene::Unload()
{
	mStartButton.Unload();
}
