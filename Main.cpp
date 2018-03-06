#include "SDL/include/SDL.h"
#pragma comment(lib, "SDL/libx86/SDL2main.lib")
#pragma comment(lib, "SDL/libx86/SDL2.lib")
#include <string>
#include <iostream>
using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[]) {
	SDL_Window *window = SDL_CreateWindow("Gameee", 100, 100, SCREEN_WIDTH,
		SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	
	
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	

	SDL_Quit;
	system("pause");
	return 0;
}