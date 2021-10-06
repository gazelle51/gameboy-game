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
    // Update sprite index
    if (currentspriteindex == 0)
    {
      currentspriteindex = 1;
    }
    else
    {
      currentspriteindex = 0;
    }

    // Change and move sprite 0
    set_sprite_tile(0, currentspriteindex);
    delay(1000);
    scroll_sprite(0, 10, 0);
  }
}