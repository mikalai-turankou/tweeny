/*
 This file is part of the Tweeny library.

 Copyright (c) 2016-2017 Leonardo G. Lucena de Freitas
 Copyright (c) 2016 Guilherme R. Costa

 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "input.h"
#include "SDL.h"

static bool keydown(int scancode) {
  static int numkeys = 0;
  static const uint8_t * state = SDL_GetKeyboardState(&numkeys);
  return state[scancode] != 0;
}

bool tweeny::extras::sdl2::input::pressed() {
  return left() || right() || up() || down();
}

bool tweeny::extras::sdl2::input::left() {
  return keydown(SDL_SCANCODE_LEFT);
}

bool tweeny::extras::sdl2::input::right() {
  return keydown(SDL_SCANCODE_RIGHT);
}

bool tweeny::extras::sdl2::input::up() {
  return keydown(SDL_SCANCODE_UP);
}

bool tweeny::extras::sdl2::input::down() {
  return keydown(SDL_SCANCODE_DOWN);
}

bool tweeny::extras::sdl2::input::space() {
  return keydown(SDL_SCANCODE_SPACE);
}







