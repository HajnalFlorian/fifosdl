#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "fifosdl.h"


int main( int argc, char* args[] )
{
    SDL_Window *fenetre;
    SDL_Renderer *renderer;
    tFile *file;
    tActor *actor1;
    tVector vect1 = {400, 300};

    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        printf("Erreur d'initialisation de la SDL : %s",SDL_GetError());
        return EXIT_FAILURE;
    }


    fenetre = SDL_CreateWindow("FIFO SDL" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , 800 , 600, SDL_WINDOW_RESIZABLE);
    if(fenetre == NULL)
    {
        printf("Erreur de la creation d'une fenetre : %s",SDL_GetError());
        return EXIT_FAILURE;
    }


    renderer = SDL_CreateRenderer(fenetre, -1, 0);
    if(renderer == NULL)
        printf("Erreur de création du renderer : %s,",SDL_GetError());

    return 0;
}




