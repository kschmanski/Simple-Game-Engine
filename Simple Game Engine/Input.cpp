#include "stdafx.h"
#include "Engine.h"

void Engine::input(float elapsedTime) {

	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		if (m_Bob.getSprite().getPosition().x > m_Window.getPosition().x) {
			m_Bob.moveLeft();
		}
		else {
			m_Bob.stopLeft();
		}
	}
	
	else {
		m_Bob.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		if (m_Bob.getSprite().getPosition().x + m_Bob.getSprite().getGlobalBounds().width < m_Window.getSize().x) {
			m_Bob.moveRight();
		}
		else {
			m_Bob.stopRight();
		}
	}

	else {
		m_Bob.stopRight();
	}
}