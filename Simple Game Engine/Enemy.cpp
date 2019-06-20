#include "stdafx.h"
#include "Enemy.h"
#include "Engine.h"

Enemy::Enemy() {

	//how fast does the Enemy move?
	m_Speed = 400; //pixels per second

	m_Texture.loadFromFile("bomb.png");
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setScale(0.1, 0.1);
	//set Bob's starting position
	m_Position.x = 500;
	m_Position.y = 0;


}

Sprite Enemy::getSprite() {
	return m_Sprite;
}

bool Enemy::isMoving() {
	return m_LeftPressed || m_RightPressed || m_UpPressed || m_DownPressed;

}

void Enemy::moveLeft() {
	m_LeftPressed = true;
}

void Enemy::moveRight() {
	m_RightPressed = true;
}

void Enemy::moveUp() {
	m_UpPressed = true;
}

void Enemy::moveDown() {
	m_DownPressed = true;
}

void Enemy::stopLeft() {
	m_LeftPressed = false;
}

void Enemy::stopRight() {
	m_RightPressed = false;
}

void Enemy::stopUp() {
	m_UpPressed = false;
}

void Enemy::stopDown() {
	m_DownPressed = false;
}

void Enemy::update(float elapsedTime) {
	m_Position.y += 1;
	m_Sprite.setPosition(m_Position);
}
