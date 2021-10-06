#include <gb/gb.h>
#include <stdio.h>
#include "SmilerSprites.c"

void main()
{
  uint8_t currentspriteindex = 0;

  // Load sprite
  set_sprite_data(0, 2, Smiler);
  set_sprite_tile(0, 0);
  move_sprite(0, 88, 78); // Good for initial position
  SHOW_SPRITES;

  // Game loop
  while (1)
  {
    switch (joypad())
    {
    case J_LEFT:
      scroll_sprite(0, -5, 0);
      break;

    case J_RIGHT:
      scroll_sprite(0, 5, 0);
      break;

    case J_UP:
      scroll_sprite(0, 0, -5);
      break;

    case J_DOWN:
      scroll_sprite(0, 0, 5);
      break;

    default:
      break;
    }

    delay(75);
  }
}