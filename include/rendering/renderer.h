#include <SDL2/SDL.h>
#ifndef RENDERER_H
#define RENDERER_H

void rndr_init(SDL_Window* w);
void rndr_clear(SDL_Renderer* rndr, float r, float g, float b, float a);
void rndr_present(void);
void rndr_draw_rect(float x, float y, float w, float h, SDL_Color color);
void rndr_destroy(void);

#endif