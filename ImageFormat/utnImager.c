#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>

int main()
{
    //puntero al archivo
    FILE *imagen;

    //creamos la estructura de datos que contendra la imagen en RAM
    u_int8_t imagenArreglo[600][400][3];


    //abrimos la imagen como archivo binario de lectura
    imagen=fopen("imagen.utn","rb");

    fread(imagenArreglo,sizeof(imagenArreglo),1,imagen);

    //window y renderer para abrir ventana
    SDL_Window *window;
    SDL_Renderer *renderer;

    //lanzamos sdl e inicializamos valores
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(600,400,0,&window,&renderer);
    int i,j,r,g,b;
    for(i = 0;i < 600;i++)
    {
        for(j = 0;j < 400;j++)
        {
            SDL_SetRenderDrawColor(renderer,imagenArreglo[i][j][0],imagenArreglo[i][j][1],imagenArreglo[i][j][2],255);
            SDL_RenderDrawPoint(renderer,i,j);
        }
    }
    
    
    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
    SDL_DestroyWindow(window);
}