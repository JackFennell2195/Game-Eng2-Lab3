#ifndef GAME_H
#define GAME_H
#include "Debug.h"
#include <SDL.h>
#include <vector>

class Game
{
public:
	Game();
	~Game();
	bool Initialize(const char*, int, int, int, int, int);
	void LoadContent();
	void UnloadContent();
	void Render();
	void Update();
	void HandleEvents();
	bool IsRunning();
	void CleanUp();
private:
	bool m_running;
	SDL_Window* m_p_Window;
	SDL_Renderer* m_p_Renderer;
	SDL_Texture* m_p_Texture;
	SDL_Rect m_Source;
	SDL_Rect m_Destination;
	SDL_Surface* m_p_Surface;

	SDL_Rect m_currentAnimation;

	SDL_Rect m_idleRect;
	SDL_Rect m_walkLeftRect;
	SDL_Rect m_walkRightRect;
	SDL_Rect m_climbRect;
	SDL_Rect m_fallRect;
	SDL_Rect m_jumpRect;

	SDL_Rect m_distRect;
	Uint32 m_ticks;
	int m_sprite;

};
#endif

