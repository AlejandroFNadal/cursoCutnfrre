#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
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
            
        }
    }
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderDrawPoint(renderer,400,300);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_DestroyWindow(window);
}