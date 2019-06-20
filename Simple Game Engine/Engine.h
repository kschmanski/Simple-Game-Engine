#pragma once
#include <SFML/Graphics.hpp>
#include "Bob.h"
#include "Enemy.h"

using namespace sf;

class Engine {
private:
	RenderWindow m_Window;

	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	Bob m_Bob;
	Enemy m_Enemy;
	Enemy m_Enemy2;
	Enemy m_Enemy3;

	void input(float dtAsSeconds);
	void update(float dtAsSeconds);
	void draw();

public:

	Engine(); //default constructor

	void start(); //to call all private functions
};