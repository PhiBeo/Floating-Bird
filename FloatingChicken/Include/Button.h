#pragma once

#include <Global.h>

#include "SFML/Graphics.hpp"
#include "functional"

#include <filesystem>

class Button
{
public:
	Button(sf::RenderWindow* window, sf::Vector2f position);
	~Button();

	sf::Vector2f GetPosition() { return mPosition; }
	
	void SetPosition(sf::Vector2f newPos);
	void SetButtonColor(sf::Color color);
	void SetButtonString(std::string string);
	void SetButtonHighlight(sf::Color color);
	void SetTextColor(sf::Color color);
	void SetButtonSize(sf::Vector2f size);

	bool IsPressed();
	void DrawButton(sf::RenderTarget* target);

	//void Click();
	
	std::function<void()> onClick;

	void Unload();

private:
	sf::RenderWindow* mWindow;
	
	sf::Vector2f mPosition;
	sf::Vector2f mSize;

	sf::Font mFont;
	//sf::Text mText;

	sf::FloatRect mTextRect;

	bool isPressed;
	sf::Color mHighlight;

	sf::Texture mTexture;
	//sf::Sprite mSprite;
};