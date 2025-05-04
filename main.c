#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_log.h>
#include <SDL3/SDL_video.h>
#include <SDL3_image/SDL_image.h>

int main() {

  SDL_Window *window = SDL_CreateWindow("Poortify", 500, 500, SDL_WINDOW_RESIZABLE);
  
  if (window == NULL)
    SDL_Log("ERROR: %s\n", SDL_GetError());
  int done = 0;
  while (done != 1) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      switch (event.type) {
      case SDL_EVENT_MOUSE_BUTTON_DOWN:
        SDL_Log("Hello there, mouse clicked\n");
        done = 1;
        break;
      default:
        SDL_Log("unhandled event\n");
        break;
      }
    }
  }
  SDL_Quit();
  return 0;
}
