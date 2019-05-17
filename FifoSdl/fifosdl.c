#include <stdio.h>
#include <stdlib.h>
#include "fifosdl.h"


void enFiler(tFile *file, tElement *courant, tActor *nvTexture)
{
    tElement *nouvel_element;

    if((nouvel_element = malloc(sizeof(tElement))) == NULL)
        return -1;
    if((nouvel_element->donnee = malloc(sizeof(tActor))) == NULL)
        return -1;

    nouvel_element->donnee = nvTexture;

    if(courant == NULL && file->taille == 0)
    {
        file->fin = nouvel_element;
        nouvel_element->suivant = file->debut;
        file->debut = nouvel_element;
    }
    else
    {
        if(courant->suivant == NULL)
        {
            file->fin = nouvel_element;
            nouvel_element->suivant = courant->suivant;
            courant->suivant = nouvel_element;
        }
    }

    file->taille++;

}


void afficher(tFile *file, SDL_Renderer *renderer)
{
    tElement *courant;
    int i = 0;

    courant = file->debut;

    for(i=0;i<file->taille;++i)
    {
        SDL_RenderCopy(courant->donnee, renderer, i); //Copie de la texture sur le renderer
        courant = courant->suivant;
    }
}
