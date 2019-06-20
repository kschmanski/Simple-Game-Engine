#include "stdafx.h"
#include "Engine.h"
#include <sstream>


void Engine::draw() {
	m_Window.clear(Color::White);

	m_Window.draw(m_BackgroundSprite);

	if (m_Bob.isMoving()) {
		m_Window.draw(m_Bob.getMovingSprite());
	}
	else {
		m_Window.draw(m_Bob.getSprite());
	}

	m_Window.draw(m_Enemy.getSprite());

	Text hud;
	Font font;
	font.loadFromFile("Chunkfive.otf");

	// Set the font to our message
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(sf::Color::White);


	std::stringstream ss;
	ss << "Level One";
	hud.setString(ss.str());
	m_Window.draw(hud);

	m_Window.display(); //show everything we just drew
}