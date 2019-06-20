#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
		m_Bob.update(dtAsSeconds);
		m_Enemy.update(dtAsSeconds);
		m_Enemy2.update(dtAsSeconds);
		m_Enemy3.update(dtAsSeconds);

}