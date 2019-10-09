#ifndef FSM_H
#define FSM_H
#include <SDL.h>
#include <vector>

class FSM
{
public:
	SDL_Rect m_idleRect;
	SDL_Rect m_walkLeftRect;
	SDL_Rect m_walkRightRect;
	SDL_Rect m_climbRect;
	SDL_Rect m_fallRect;
	SDL_Rect m_jumpRect;

	SDL_Rect m_distRect;
	Uint32 m_ticks;
	int m_sprite;
	
	FSM();
	~FSM();
	void idle();
	void climb();
	void walkLeft();
	void walkRight();
	void fall();
	void jump();
	
};

#endif // !ANIMATION_H