#include "SDL.h"
#include <stdio.h>
#include <iostream>

bool init();

bool loadMedia();

void close();

SDL_Window* gWindow = NULL;

SDL_Surface* gScreenSurface = NULL;

SDL_Surface* gHelloWorld = NULL;

bool init() {
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
		success = false;
	}
	else {

	}
}

int main(int argc, char* argv[]) {


	return 0;
}