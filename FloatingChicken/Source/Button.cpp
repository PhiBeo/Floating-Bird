#include "Button.h"

Button::Button(sf::RenderWindow* window, sf::Vector2f position) :
	mWindow(window),
	mPosition(position),
	mSize(BUTTON_WIDTH, BUTTON_HEIGHT)
{
	if (!mFont.openFromFile("OpenSans.ttf"))
	{
		std::cerr << "error: cannot load font from path: " << DEFAULT_FONT << std::endl;
	}

	//mText.setFont(mFont);
	//mText.setCharacterSize(TEXT_SIZE);
	//mText.setFillColor(sf::Color::Black);

	if (!mTexture.loadFromFile(BUTTON_EMPTY))
	{
		std::cerr << "error: cannot load texture" << std::endl;
	}

	//mSprite.setTexture(mTexture);
	isPressed = false;
	mHighlight = sf::Color::Red;
}

Button::~Button()
{
	std::cout << "Button Deconstuctor!";
}

void Button::SetPosition(sf::Vector2f newPos)
{
	mPosition = newPos;
}

void Button::SetButtonColor(sf::Color color)
{
	//mSprite.setColor(color);
}

void Button::SetButtonString(std::string string)
{
	//mText.setString(string);
	//
	//mTextRect = mText.getLocalBounds();
	//mText.setOrigin(mTextRect.getCenter());
}	

void Button::SetButtonHighlight(sf::Color color)
{
	mHighlight = color;
}

void Button::SetTextColor(sf::Color color)
{
	//mText.setFillColor(color);
}

void Button::SetButtonSize(sf::Vector2f size)
{
	mSize = size;
}

bool Button::IsPressed()
{
	if (!sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		isPressed = false;
	}

	if (sf::Mouse::getPosition(*mWindow).x >= mPosition.x - mSize.x / 2 && sf::Mouse::getPosition(*mWindow).x <= mPosition.x + mSize.x / 2 &&
		sf::Mouse::getPosition(*mWindow).y >= mPosition.y - mSize.y / 2 && sf::Mouse::getPosition(*mWindow).y <= mPosition.y + mSize.y / 2)
	{
		SetButtonColor(mHighlight);
		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && !isPressed)
		{
			isPressed = true;
			SetButtonColor(sf::Color::White);
			//Sound* click = Sound::getInstance();
			//click->buttonClick();
			//Click();
			return true;
		}
	}
	else
	{
		SetButtonColor(sf::Color::White);
	}
}

void Button::DrawButton(sf::RenderTarget* target)
{
	//mSprite.setOrigin(sf::Vector2f(mTexture.getSize().x / 2, mTexture.getSize().y / 2));
	//mSprite.setPosition(mPosition);
	//
	//mText.setPosition(mPosition);
	//
	//target->draw(mSprite);
	//target->draw(mText);
}

void Button::Unload()
{
	std::cout << "Start Delete Button..." << std::endl;

	//mSprite = nullptr;
	//mTexture = nullptr;
	//mText = nullptr;
	//mFont = nullptr;
	//
	//delete mSprite;
	//delete mTexture;
	//delete mText;
	//delete mFont;

	std::cout << "Finish Unload Button!" << std::endl;
}
