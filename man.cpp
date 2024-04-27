#include "graphics.h"
#include "picture.hpp"
void man() {
   setcolor(COLOR(255, 229, 204));
   setfillstyle(1, COLOR(255, 229, 204));
   fillellipse(600, 300, 30, 30);
   bar(595, 300, 605, 450);
   bar(550, 350, 650, 360);
   setlinestyle(SOLID_LINE, 0, 10);
   line(605, 450, 635, 500);
   line(595, 450, 565, 500);
   

}
