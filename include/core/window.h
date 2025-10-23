#include <SDL2/SDL.h>
#ifndef WINDOW_H
#define WINDOW_H

bool win_init(const char* title, int w, int h, bool fullscreen);
void win_destroy(void);
SDL_Window* win_get_handle(void);
int win_get_width(void);
int win_get_height(void);

void win_set_title(const char* t);
bool win_is_open(void);

#endif