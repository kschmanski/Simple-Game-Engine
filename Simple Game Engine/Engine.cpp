#include "stdafx.h"
#include "Engine.h"

Engine::Engine() {

	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine", Style::Fullscreen);

	m_BackgroundTexture.loadFromFile("background.jpg");

	m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start() {

	Clock clock;

	while (m_Window.isOpen()) {
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}