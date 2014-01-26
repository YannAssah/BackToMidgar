#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

int battle_three()
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *choco = NULL;
  SDL_Surface *pampa = NULL;
  SDL_Surface *attak = NULL;
  SDL_Surface *slash = NULL;
  SDL_Surface *fire = NULL;
  SDL_Surface *thunder = NULL;
  SDL_Surface *libra = NULL;
  SDL_Surface *heal = NULL;
  SDL_Surface *potion = NULL;
  SDL_Surface *ether = NULL;
  SDL_Surface *cursor = NULL;
  SDL_Rect rect;
  SDL_Rect pamp;
  SDL_Rect curs;
  SDL_Event event;
  Mix_Music *battle;
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);
if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
    curs.y = 550;
    curs.x = 25;
    pamp.y = 10;
    pamp.x = 0;
    rect.y = 300;
    rect.x = 620;
  battle = Mix_LoadMUS("./mus/battle.wav");
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(battle, -1);
  cursor = IMG_Load("./img/cursor.png");
  hello = IMG_Load("./img/battle.png");
  choco = IMG_Load("./img/chocobattle.png");
  pampa = IMG_Load("./img/malb.png");
  attak = IMG_Load("./img/ck.png");
  fire = IMG_Load("./img/fire.png");
  surface_win = SDL_GetWindowSurface(window);
  while (!i)
    {
      SDL_BlitSurface( hello, NULL, surface_win, NULL);
      SDL_BlitSurface( choco, NULL, surface_win, &rect);
      SDL_BlitSurface( pampa, NULL, surface_win, &pamp);
      SDL_BlitSurface( cursor, NULL, surface_win, &curs);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
       switch(event.type){
  case SDL_KEYDOWN:
       if (event.key.keysym.sym == SDLK_LEFT)
{
     j = j - 1;
     curs.x -= 100;
      if (j <= -1)
    {
    j = 7;
    curs.x = 725;
    curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RIGHT)
{
     j = j + 1 ;
     curs.x += 100;

    if (j >= 8)
    {
     j = 0;
     curs.x = 25;
     curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RETURN && j == 0)
    {
    SDL_BlitSurface( attak, NULL, surface_win, &pamp);
    SDL_UpdateWindowSurface(window);
    }
    if (event.key.keysym.sym == SDLK_f)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
     hills();
    }
     if (event.key.keysym.sym == SDLK_q)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
    }
    if (event.key.keysym.sym == SDLK_RETURN && j == 2)
    {
    SDL_BlitSurface( fire, NULL, surface_win, &pamp);
    SDL_UpdateWindowSurface(window);
    }
   }
}
return(0);
}
int battle_two()
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *choco = NULL;
  SDL_Surface *pampa = NULL;
  SDL_Surface *attak = NULL;
  SDL_Surface *slash = NULL;
  SDL_Surface *fire = NULL;
  SDL_Surface *thunder = NULL;
  SDL_Surface *libra = NULL;
  SDL_Surface *heal = NULL;
  SDL_Surface *potion = NULL;
  SDL_Surface *ether = NULL;
  SDL_Surface *cursor = NULL;
  SDL_Rect rect;
  SDL_Rect pamp;
  SDL_Rect curs;
  SDL_Event event;
  Mix_Music *battle;
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);
if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
    curs.y = 550;
    curs.x = 25;
    pamp.y = 150;
    pamp.x = 50;
    rect.y = 300;
    rect.x = 620;
  battle = Mix_LoadMUS("./mus/battle.wav");
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(battle, -1);
  cursor = IMG_Load("./img/cursor.png");
  hello = IMG_Load("./img/battle.png");
  choco = IMG_Load("./img/chocobattle.png");
  pampa = IMG_Load("./img/warrior.png");
  attak = IMG_Load("./img/ck.png");
  fire = IMG_Load("./img/fire.png");
  surface_win = SDL_GetWindowSurface(window);
  while (!i)
    {
      SDL_BlitSurface( hello, NULL, surface_win, NULL);
      SDL_BlitSurface( choco, NULL, surface_win, &rect);
      SDL_BlitSurface( pampa, NULL, surface_win, &pamp);
      SDL_BlitSurface( cursor, NULL, surface_win, &curs);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
       switch(event.type){
  case SDL_KEYDOWN:
       if (event.key.keysym.sym == SDLK_LEFT)
{
     j = j - 1;
     curs.x -= 100;
      if (j <= -1)
    {
    j = 7;
    curs.x = 725;
    curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RIGHT)
{
     j = j + 1 ;
     curs.x += 100;

    if (j >= 8)
    {
     j = 0;
     curs.x = 25;
     curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RETURN && j == 0)
    {
    SDL_BlitSurface( attak, NULL, surface_win, &pamp);
    SDL_UpdateWindowSurface(window);
    }
    if (event.key.keysym.sym == SDLK_RETURN && j == 2)
    {
    SDL_BlitSurface( fire, NULL, surface_win, NULL);
    SDL_UpdateWindowSurface(window);
    }
    if (event.key.keysym.sym == SDLK_f)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
     hills();
    }
     if (event.key.keysym.sym == SDLK_q)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
    }
   }
}
return(0);
}

int battle()
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *choco = NULL;
  SDL_Surface *pampa = NULL;
  SDL_Surface *attak = NULL;
  SDL_Surface *slash = NULL;
  SDL_Surface *fire = NULL;
  SDL_Surface *thunder = NULL;
  SDL_Surface *libra = NULL;
  SDL_Surface *heal = NULL;
  SDL_Surface *potion = NULL;
  SDL_Surface *ether = NULL;
  SDL_Surface *cursor = NULL;
  SDL_Rect rect;
  SDL_Rect pamp;
  SDL_Rect curs;
  SDL_Event event;
  Mix_Music *battle;
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);
if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
    curs.y = 550;
    curs.x = 25;
    pamp.y = 240;
    pamp.x = 50;
    rect.y = 300;
    rect.x = 620;
  battle = Mix_LoadMUS("./mus/battle.wav");
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(battle, -1);
  cursor = IMG_Load("./img/cursor.png");
  hello = IMG_Load("./img/battle.png");
  choco = IMG_Load("./img/chocobattle.png");
  pampa = IMG_Load("./img/pampa.png");
  attak = IMG_Load("./img/ck.png");
  fire = IMG_Load("./img/fire.png");
  surface_win = SDL_GetWindowSurface(window);
  while (!i)
    {
      SDL_BlitSurface( hello, NULL, surface_win, NULL);
      SDL_BlitSurface( choco, NULL, surface_win, &rect);
      SDL_BlitSurface( pampa, NULL, surface_win, &pamp);
      SDL_BlitSurface( cursor, NULL, surface_win, &curs);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
       switch(event.type){
  case SDL_KEYDOWN:
       if (event.key.keysym.sym == SDLK_LEFT)
{
     j = j - 1;
     curs.x -= 100;
      if (j <= -1)
    {
    j = 7;
    curs.x = 725;
    curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RIGHT)
{
     j = j + 1 ;
     curs.x += 100;

    if (j >= 8)
    {
     j = 0;
     curs.x = 25;
     curs.y = 550;
    }
}
    if (event.key.keysym.sym == SDLK_RETURN && j == 0)
    {
    SDL_BlitSurface( attak, NULL, surface_win, &pamp);
    SDL_UpdateWindowSurface(window);
    }
    if (event.key.keysym.sym == SDLK_RETURN && j == 2)
    {
    SDL_BlitSurface( fire, NULL, surface_win, NULL);
    SDL_UpdateWindowSurface(window);
    }
    if (event.key.keysym.sym == SDLK_f)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
     hills();
    }
    if (event.key.keysym.sym == SDLK_q)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
    }
   }
}
return(0);
}

int hills()
{
     int i = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *stat = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *choco = NULL;
  SDL_Rect rect;
  SDL_Rect chocob;
  SDL_Event event;
  Mix_Music *hill;
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
    chocob.y = 330;
    chocob.x = 360;
    rect.y = 0;
    rect.x = 230;
  hill = Mix_LoadMUS("./mus/hills.wav");
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(hill, -1);
  hello = IMG_Load("./img/hills.png");
  choco = IMG_Load("./img/chocobo.png");
  surface_win = SDL_GetWindowSurface(window);
   while (!i)
    {

      SDL_BlitSurface( hello, &rect, surface_win, NULL);
      SDL_BlitSurface( choco, NULL, surface_win, &chocob);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
      switch(event.type){
  case SDL_KEYDOWN:
      if (event.key.keysym.sym == SDLK_DOWN)
      {
	chocob.y += 5;
      }
    if (event.key.keysym.sym == SDLK_UP)
      {
	chocob.y -= 5;
      }
    if (event.key.keysym.sym == SDLK_RIGHT)
      {
	chocob.x += 5;
      }
    if (event.key.keysym.sym == SDLK_LEFT)
      {
	chocob.x -= 5;
	 if (event.key.keysym.sym == SDLK_q)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
    }
      }
      if ( chocob.y == 330 && chocob.x == 200)
      {
         Mix_PauseMusic();
         SDL_FreeSurface(hello);
         SDL_DestroyWindow(window);
         battle_three();
      }
    if ( chocob.y == 330 && chocob.x == 535)
      {
         Mix_PauseMusic();
         SDL_FreeSurface(hello);
         SDL_DestroyWindow(window);
         battle_two();
      }
    if (chocob.y == 200 && chocob.x == 360)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
     battle();
    }
  }
}
return(0);
}

int map()
{
  int i = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *stat = NULL;
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
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
  town = Mix_LoadMUS("./mus/town.wav");
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(town, -1);
  rect.x = 140;
  rect.y = 140;
  hello = IMG_Load("./img/map.jpg");
  choco = IMG_Load("./img/chocobo.png");
  stat = IMG_Load("./img/stat.png");
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
    if (rect.y == 0)
      {
    Mix_PauseMusic();
    SDL_FreeSurface(hello);
    SDL_DestroyWindow(window);
    hills();
      }
       if (event.key.keysym.sym == SDLK_q)
    {
     Mix_PauseMusic();
     SDL_FreeSurface(hello);
     SDL_DestroyWindow(window);
    }
    if (event.key.keysym.sym == SDLK_RETURN)
    {
    SDL_BlitSurface( stat, NULL, surface_win, NULL);
    SDL_UpdateWindowSurface(window);
    }
  }
 }
  Mix_FreeMusic(town);
  Mix_CloseAudio();
  SDL_FreeSurface(hello);
  return(0);
}


void options()
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *option = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *cristal = NULL;
  SDL_Rect rect ;
  SDL_Event event;
  Mix_Chunk *curseur;
  window = SDL_CreateWindow(
                            "Final Fantasy Midgard Returns",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            800,
                            620,
                            SDL_WINDOW_SHOWN);

  rect.x = 80;
  rect.y = 210;
  curseur = Mix_LoadWAV("./mus/cursor.wav");
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
        if (event.key.keysym.sym == SDLK_RETURN)
	      {
        SDL_FreeSurface(option);
        SDL_DestroyWindow(window);
		menu();
	      }
	if (event.key.keysym.sym == SDLK_UP)
          {
            Mix_PlayChannel(-1, curseur, 0);
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
            Mix_PlayChannel(-1, curseur, 0);
            rect.y += 70;
            j += 1;
            if (j == 3)
              {
                rect.x = 80;
                rect.y = 210;
                j = 0;
              }
    }
  }
}
  SDL_FreeSurface(option);
  SDL_DestroyWindow(window);
  SDL_Quit();
}



int menu()
{
  int i = 0;
  int j = 0;
  SDL_Window  *window;
  SDL_Surface *hello = NULL;
  SDL_Surface *surface_win = NULL;
  SDL_Surface *cristal = NULL;
  SDL_Rect rect ;
  SDL_Event event;
  Mix_Chunk *curseur;
  Mix_Music *musique;
  Mix_AllocateChannels(2);
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
  curseur = Mix_LoadWAV("./mus/cursor.wav");
  hello = IMG_Load("./img/ff.jpg");
  cristal = IMG_Load("./img/cristal.png");
  surface_win = SDL_GetWindowSurface(window);
  while (!i)
    {

      SDL_BlitSurface( hello, NULL, surface_win, NULL );
      SDL_BlitSurface( cristal, NULL, surface_win,&rect);
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
      switch(event.type){
      case SDL_QUIT:
	i = 1;
	break;
      case SDL_KEYDOWN:
	if(event.key.keysym.sym == SDLK_q)
	  {
	    i = 1;
	  }
	if (event.key.keysym.sym == SDLK_UP)
	  {
        Mix_PlayChannel(-1, curseur, 0);
	    rect.y = rect.y - 70;
	    j = j - 1;
	    if(j < 0)
	      {
		rect.x = 80;
		rect.y = 420;
		j = 3;
	      }
	  }
	if (event.key.keysym.sym == SDLK_DOWN)
	  {
        Mix_PlayChannel(-1, curseur, 0);
	    rect.y += 70;
	    j += 1;
	    if (j == 4)
	      {
		rect.x = 80;
		rect.y = 210;
		j = 0;
	      }
	  }
	if (event.key.keysym.sym == SDLK_RETURN && j == 3)
	  {
	    i = 1;
	  }
	if (event.key.keysym.sym == SDLK_RETURN && j == 0)
	  {
        Mix_FreeChunk(curseur);
	    Mix_PauseMusic();
        SDL_FreeSurface(hello);
        SDL_DestroyWindow(window);
	    map();
	  }
	if (event.key.keysym.sym == SDLK_RETURN && j == 2)
	  {
        Mix_PlayChannel(-1, curseur, 0);
        SDL_FreeSurface(hello);
        SDL_DestroyWindow(window);
	    options();
	  }
    }
}
  SDL_FreeSurface(hello);
  SDL_DestroyWindow(window);
  SDL_Quit();
  Mix_FreeChunk(curseur);
  return(0);
}



int main(int argc, char *argv[])
{
  int i = 0;
  SDL_Window  *window;
  SDL_Surface *title = NULL;
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
  title = IMG_Load("./img/title.jpg");
  surface_win = SDL_GetWindowSurface(window);
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
    {
      printf("%s\n", Mix_GetError());
    }
  musique = Mix_LoadMUS("./mus/final.wav"); //Chargement de la musique
  Mix_VolumeMusic(MIX_MAX_VOLUME);
  Mix_PlayMusic(musique, -1); //Jouer infiniment la musique
  while (!i)
    {
      SDL_BlitSurface( title, NULL, surface_win, NULL );
      SDL_WaitEvent(&event);
      SDL_UpdateWindowSurface(window);
      switch(event.type){
      case SDL_KEYDOWN:
	if (event.key.keysym.sym == SDLK_RETURN)
	  {
        SDL_FreeSurface(title);
        SDL_DestroyWindow(window);
	    menu();
	  }
      }
    }
  Mix_FreeMusic(musique);
  Mix_CloseAudio();
  SDL_FreeSurface(title);
  SDL_DestroyWindow(window);
  SDL_Quit();
  return (0);
}

