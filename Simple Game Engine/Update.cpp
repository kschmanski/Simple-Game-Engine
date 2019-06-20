#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
		m_Bob.update(dtAsSeconds);
		m_Enemy.update(dtAsSeconds);

}