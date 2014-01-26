#include <stdlib.h>
#include <stdio.h>
#include "include/SDL2/SDL.h"
#include "include/SDL2/SDL_image.h"
#include "include/SDL2/SDL_mixer.h"

int option(int argc, char *argv[])
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *option = NULL;
  SDL_Surface *screen = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *cristal = NULL;
  SDL_Rect rect ;
  SDL_Event event;
  Mix_Music *musique;
  if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) == -1)
    {
      fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
      exit(EXIT_FAILURE);
    }
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);

  rect.x = 80;
  rect.y = 210;
  option = IMG_Load("./img/option.jpg");
  cristal = IMG_Load("./img/cristal.png");
  surface_win = SDL_GetWindowSurface(window);
  while (!i)
    {
      SDL_BlitSurface( option, NULL, surface_win, NULL );
      SDL_BlitSurface( cristal, NULL, surface_win,&rect);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
      switch(event.type){
      case SDL_KEYDOWN:
	if (event.key.keysym.sym == SDLK_UP)
          {
            rect.y = rect.y - 70;
            j = j - 1;
            if(j < 0)
              {
                rect.x = 80;
                rect.y = 350;
                j = 2;
              }
          }
        if (event.key.keysym.sym == SDLK_DOWN)
          {
            rect.y += 70;
            j += 1;
            if (j == 3)
              {
                rect.x = 80;
                rect.y = 210;
                j = 0;
              }
	    if (event.key.keysym.sym == SDLK_RETURN)
	      {
		main();
	      }
          }
      }
	
    }
  SDL_FreeSurface(option);
  SDL_DestroyWindow(window);
  SDL_Quit();
  
  return (0);
}
