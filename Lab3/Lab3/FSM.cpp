#include "FSM.h"


FSM::FSM()
{
	m_ticks = SDL_GetTicks();
	m_sprite = (m_ticks / 100) % 3;
	m_distRect = { 260,150, 256, 256 };
}

FSM::~FSM() 
{

}

void FSM::idle()
{
	m_idleRect = { m_sprite * 32, 0, 32, 32 };
}

void FSM::climb()
{
	m_climbRect = { m_sprite * 32, 96, 32, 32 };
}

void FSM::walkLeft()
{
	m_walkLeftRect = { m_sprite * 32, 32, 32, 32 };
}

void FSM::walkRight()
{
	m_walkRightRect = { m_sprite * 32, 64, 32, 32 };
}

void FSM::fall()
{
	m_fallRect = { m_sprite * 32, 128, 32, 32 };
}

void FSM::jump()
{
	m_jumpRect = { m_sprite * 32, 160, 32, 32 };
}



