#include <stdlib.h>
#include <stdio.h>
#include "include/SDL2/SDL.h"
#include "include/SDL2/SDL_image.h"
#include "include/SDL2/SDL_mixer.h"

int map(int argc, char *argv[])
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *screen = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *choco = NULL;
  SDL_Rect rect ;
  SDL_Event event;
  Mix_Music *town;
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
  /*SDL_Init( SDL_INIT_EVERYTHING );*/
  rect.x = 140;
  rect.y = 140;
  hello = IMG_Load("./img/map.jpg");
  choco = IMG_Load("./img/chocobo.png");
  surface_win = SDL_GetWindowSurface(window);
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1) //Initialisation de l'API Mixer     
     {
       printf("%s\n", Mix_GetError());
     }
   town = Mix_LoadMUS("city.wav"); //Chargement de la musique                                   
   Mix_VolumeMusic(MIX_MAX_VOLUME);
   Mix_PlayMusic(town, -1); //Jouer infiniment la musique 
  while (!i)
{
  SDL_BlitSurface( hello, NULL, surface_win, NULL );
  SDL_BlitSurface( choco, NULL, surface_win,&rect);
   SDL_WaitEvent(&event);
  SDL_UpdateWindowSurface(window);
  switch(event.type){
  case SDL_KEYDOWN:
    if (event.key.keysym.sym == SDLK_DOWN)
      {
	rect.y += 5;
      }
    if (event.key.keysym.sym == SDLK_UP)
      { 
	rect.y -= 5;
      } 
    if (event.key.keysym.sym == SDLK_RIGHT)
      { 
	rect.x += 5;
      } 
    if (event.key.keysym.sym == SDLK_LEFT)
      {
	rect.x -= 5;
      }
    
    
  }
 }
  Mix_FreeMusic(town);
  Mix_CloseAudio();
  SDL_FreeSurface(hello);
  SDL_Quit;
  return(0);
}
