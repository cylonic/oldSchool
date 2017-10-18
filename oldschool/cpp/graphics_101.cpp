// graphics_101.cpp: illustrates basic graphic concepts

// include graphics library:
#include <graphics.h>

int main()
{
   SetupGraphics();             // must be called before drawing images

   //
   // mark corners
   //
   MoveTo(0, 0);                // move pen to upper left corner
   LineTo(30, 40);              // draw line to x = 30, y = 40
   TextOut(31, 41, "(0, 0)");   // write text on window
   MoveTo(0, 350);              // lower left corner
   LineTo(30, 310);
   TextOut(31, 309 - TextHeight("(0, 350)"), "(0, 350)");
   MoveTo(500, 350);            // move to lower right corner
   LineTo(450, 320);            // draw line to x = 460, y = 310
   TextOut(450 - TextWidth("(500, 350)")  - 1,
           320 - TextHeight("(500, 350)") - 1,
           "(500, 350)");

   //
   // draw a couple of simple shapes, one on top of the other
   //
   SetPenColor(Orange);          // pen: used to draw lines
   Rectangle(200, 30, 300, 90);  // rectangle from (200, 30) to (300, 90)
   SetBrushColor(Green);         // brush: used to fill things in
   SetBrushStyle(Solid);         // use solid brush; default is "Clear"
   Circle(250, 60, 20);          // draw circle w/ radius 10 at (20, 40)

   //
   // circle in center of display
   //
   SetPenStyle(ClearPen);        // no pen (no outline on circle)
   SetBrushColor(Purple);
   Circle(250, 175, 50);
   SetBrushColor(Yellow);
   Circle(250, 175, 1);
   SetPenColor(Red);             // color for line
   SetBrushColor(White);         // same color as background (for line)
   SetPenStyle(DashDot);         // dashes & dots using pen & brush
   MoveTo(252, 174);
   LineTo(350, 150);
   SetPenStyle(Dot);             // return to solid pen
   SetPenColor(Gray);
   float char_height = TextHeight("(C0");
   float msg_width   = TextWidth("Center: (250, 175)");
   RoundRect(351, 150 - char_height / 2 - 4,
                  351 + msg_width + 20, 150 + char_height / 2 + 5,
                  5, 5);
   // note pen color does not effect text
   TextOut(351 + 10, 150 - char_height / 2,
           "Center: (250, 175)");

   return 0;
}
