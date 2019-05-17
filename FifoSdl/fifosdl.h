#ifndef FIFOSDL_H_INCLUDED
#define FIFOSDL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>

typedef struct tVector{
    int nX;
    int nY;
}tVector;

typedef struct tActor {
    SDL_Texture *textActor;
    tVector vect;
    int height;
    int width;
}tActor;

typedef struct tElement {
    struct tActor *donnee;
    struct tElement *suivant;
}tElement;


typedef struct tFile {
    tElement *debut;
    tElement *fin;
    int taille;
}tFile;



#endif // FIFOSDL_H_INCLUDED
