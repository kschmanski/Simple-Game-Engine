#pragma once
#include <SFML/Graphics.hpp>
#include "Bob.h"

using namespace sf;

class Engine {
private:
	RenderWindow m_Window;

	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	Bob m_Bob;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:

	Engine(); //default constructor

	void start(); //to call all private functions
};