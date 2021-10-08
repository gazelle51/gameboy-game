#include <gb/gb.h>
#include "simplebackground.c"
#include "simplebackgroundmap.c"

void main()
{
  // Load background tiles 0 to 7
  set_bkg_data(0, 7, backgroundtiles);

  // Load background
  set_bkg_tiles(0, 0, 40, 18, backgroundmap);

  // Show background
  SHOW_BKG;
  DISPLAY_ON;

  // Scroll background
  while (1)
  {
    scroll_bkg(1, 0);
    delay(100);
  }
}