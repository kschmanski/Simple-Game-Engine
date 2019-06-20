#include "stdafx.h"
#include "Engine.h"

void Engine::input() {

	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		m_Bob.moveLeft();
	}
	
	else {
		m_Bob.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		m_Bob.moveRight();
	}

	else {
		m_Bob.stopRight();
	}
}