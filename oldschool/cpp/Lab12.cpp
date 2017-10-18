//---------------------------------------------------------------------
// DO_1: Insert your name and section
// Name:
//
// Purpose: This program draws a snowman, based on radius and 
//          coordinates of the head of the snowman.  The user is
//          prompted for radius and coordinates of the snowman
//          as well as the colors of the head, tummy and bottom.
//
// Input :  Integer values for the radius and X and Y coordinates
//          of the head.
//          String values for the colors the head, tummy and
//          bottom.
//
// Output:  The prompts for the radius and coordinates of the head,
//          together with the prompts for the colors of the body
//          parts.
//          The HiC graphics window shows the appropriately drawn
//          and colored snowman.
// Notes:
//          1. Only certain colors are supported by this program.
//          2. The constants Red, Green, Blue, Brown, White, Yellow, 
//             and Black are defined in winbase.h.
//          3. The tummy and bottom are drawn according to assumed
//             ratios given in the constant section.  At present,
//             the tummy is twice the size of the head and the 
//             bottom is thrice the size of the head.
//          
//---------------------------------------------------------------------

#include <graphics.h>
#include <string>
#include <iostream>
using namespace std;

const int RATIO_OF_TUMMY_TO_HEAD = 2;
const int RATIO_OF_BOTTOM_TO_HEAD = 3;

void drawBodyPart( int radius, int XValue, int YValue, Color col );
Color promptForAndReturnColor( string prompt );

int main()
{
   int headRadius, headX, headY;
   Color headColor, tummyColor, bottomColor;
   int tummyY, bottomY, tummyRadius, bottomRadius;

   SetupGraphics();
   SetBrushStyle(Solid);
   
   cout << "Enter radius of the head of the snowman: ";
   cin >> headRadius;
   cout << "Enter X and Y values for center of the head: ";
   cin >> headX >> headY;

   // Prompt for and read the head color.
   headColor = promptForAndReturnColor( "Enter head color: " );

   // DO_2 Call the function promptForAndReturnColor, passing
   //      the appropriate prompt (see Sample run), and 
   //      assigning the return value to tummyColor.
   //      Hint: see the statement immediately above, that
   //            is giving headColor a value.

   tummyColor = promptForAndReturnColor( "Enter tummy color: " );


   // DO_3 Call the function promptForAndReturnColor, passing
   //      the appropriate prompt (see Sample run), and 
   //      assigning the return value to bottomColor.

   bottomColor = promptForAndReturnColor( "Enter bottom color: " );


   // Draw the head of the snowman
   drawBodyPart( headRadius, headX, headY, headColor );

   tummyY = headY + (RATIO_OF_TUMMY_TO_HEAD) * headRadius + headRadius;

   // Calculate the tummyRadius.
   tummyRadius = RATIO_OF_TUMMY_TO_HEAD * headRadius;


   // DO_4 Draw the snowman's tummy by calling drawBodyPart.
   //      Hint: See how the head of the snowman was drawn above.
   //            Use headX for the X value.

   drawBodyPart( tummyRadius, headX, tummyY, tummyColor );



   // DO_5 Calculate the bottomRadius.
   //      Hint: see how the tummyRadius was calculated above.

   bottomRadius = RATIO_OF_BOTTOM_TO_HEAD * headRadius;



   // The Y coordinate for that last part of the snowman is calculated
   // starting at the Y coordinate of the tummy (tummyY) plus the
   // radius of the tummy plus the ratio of the bottom to the head times
   // the radius of the head.
   bottomY = tummyY + RATIO_OF_BOTTOM_TO_HEAD * headRadius + tummyRadius;

   // DO_6 Draw the bottom part of the snowman by calling drawBodyPart.

   drawBodyPart( bottomRadius, headX, bottomY, bottomColor );


   ShowGraphicsWindow();
   return 0;
}

//---------------------------------------------------------------------
// This function uses radius, the color and XY coordinates to 
// draw a body part (circle) of a snowman of the given color.
// params: (in, in, in, in)
//---------------------------------------------------------------------
// DO_7 Write the complete header for the function drawBodyPart.
//      Hint: copy the prototype to here and remove the semicolon.

void drawBodyPart( int radius, int XValue, int YValue, Color col )


{
   // DO_8.1  Call the SetBrushColor to set the brush color to col.
   
   SetBrushColor(col);


   // DO_8.2  Call the Circle function to draw the appropriate Circle.

   Circle( XValue, YValue, radius);


}

//---------------------------------------------------------------------
// This function prompts the user for a color and returns that color.
// The only colors supported in this function are Red, Green, Blue,
// Brown, White, Yellow, and Black.  
// Note that Black is the default color.  The appropriate color is
// returned.
// params: (in)
//---------------------------------------------------------------------
Color promptForAndReturnColor( string prompt )
{
   string strColor;

   cout << prompt;
   cin >> strColor;

   if ( strColor == "Red" )
      return Red;
   if ( strColor == "Green" )
      return Green;
   if ( strColor == "Blue" )
      return Blue;
   if ( strColor == "Brown" )
      return Brown;
   if ( strColor == "White" )
      return White;
   if ( strColor == "Yellow" )
      return Yellow;

    // This is the default value and is not part of the if.
    return Black;
}
