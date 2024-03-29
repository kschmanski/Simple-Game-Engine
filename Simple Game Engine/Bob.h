#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bob {
private:

	//Bob's location
	Vector2f m_Position;

	//we'll need a sprite
	Sprite m_Sprite;

	Sprite m_MovingSprite; //a sprite for when we're moving

	//and a texture
	Texture m_Texture;

	//which direction the character is moving
	bool m_LeftPressed;
	bool m_RightPressed;
	bool m_UpPressed;
	bool m_DownPressed;
	

	//Bob's speed (pixels per second)
	float m_Speed;

public:

	Bob(); //default constructor

	Sprite getSprite(); //getter
	Sprite getMovingSprite(); //getter

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