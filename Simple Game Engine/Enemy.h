#pragma once
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Enemy {
private:

	//Enemy's location
	Vector2f m_Position;

	//we'll need a sprite
	Sprite m_Sprite;
   
	Texture m_Texture;//and a texture

	//which direction the enemy is moving
	bool m_LeftPressed;
	bool m_RightPressed;
	bool m_UpPressed;
	bool m_DownPressed;


	//Enemy's speed (pixels per second)
	float m_Speed;

public:

	Enemy(); //default constructor

	Sprite getSprite(); //getter

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	void stopLeft(); //stop moving left
	void stopRight(); //stop moving right
	void stopUp(); //stop moving up
	void stopDown(); //stop moving down

	bool isMoving(); //is our character moving?

	void update(float elapsedTime);
};