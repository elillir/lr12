#include "graphics.h"
#include "picture.hpp"

void house() {
   setfillstyle(1, COLOR(225,153,192));
   bar(100,350,350,500);
   
   setcolor(COLOR(199,44,128));
   setfillstyle(1, COLOR(199,44,128));
   
   setcolor(COLOR(122,13,71));
   line(100, 350, 225, 300);
   line(225, 300, 350, 350);
   line(100, 350, 350, 350);

   setfillstyle(1, COLOR(122,13,71));
   bar(100, 300, 225, 350);

   bar(225, 300, 350, 350);
 
   setfillstyle(1, COLOR(255,251,7));
   bar(150,400,200,450);
   
   setcolor(COLOR(122,13,71));
   line(175,400,175,450);
   line(150,425,200,425);
   line(250,500,250,380);
   line(320,500,320,380);
   line(250,380,320,380);
   
   setfillstyle(1, COLOR(122,13,71));
   bar(305,445,310,435);
}