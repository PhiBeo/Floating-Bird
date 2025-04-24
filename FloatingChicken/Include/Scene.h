#pragma once

#include <SFML/Graphics.hpp>

#include "Enum.h"
#include "Global.h"

class Scene
{
public:
	Scene(sf::RenderWindow* window, SceneState state) :
		mWindow(window),
		mSceneState(state)
	{
		//if (!menuFont.openFromFile(DEFAULT_FONT))
		//	throw("Fail to load: DEFAULT_FONT");
		//if (!gameFont.openFromFile(GAME_FONT))
		//	throw("Fail to load: GAME_FONT");
	}

	virtual void Load() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Render() = 0;
	virtual void Unload() = 0;

	SceneState GetSceneState() { return mSceneState; }

protected:
	sf::RenderWindow* mWindow;
	sf::Font menuFont;
	sf::Font gameFont;

private:
	SceneState mSceneState;
	
};