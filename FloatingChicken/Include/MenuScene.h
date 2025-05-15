#pragma once

#include "Scene.h"
#include "Button.h"

class MenuScene : public Scene
{
public:
	MenuScene(sf::RenderWindow* window);

	void Load() override;
	void Update(float deltaTime) override;
	void Render() override;
	void Unload() override;

private:
	Button mStartButton;
};