//----------------- lab3.cpp -----------------------------
//  (1) DO: Fill in your name 
//
//  Name:
//                              
//  
//  Purpose: This program processes the output of a 
//           poker chip-counter to determine the 
//           number of dollars for cash out in 
//           exchange for chips.  
//
//  Inputs:  The input for this program are symbols that 
//           represent the color of each chip.  The variable 
//           chip is of type char and has values:
//              'G'   for golden chip worth $1000
//              'S'   for silver chip worth $100
//              'R'   for red chip worth $50
//              'B'   for blue chip worth $10
//           The program stops reading coins when an 'X' 
//           is read.
//           You do not need to test for other char values.
//               
//  Outputs:   The output for this program includes the labeled 
//             counts for each of the chip types, and the total value 
//             of the cash out.  The output for GGSSRBBX would
//             Golden Chip = 2
//             Silver Chip = 2
//             Red chip    = 1
//             Blue chip   = 2
//             Cash out    = $2270 
//--------------------------------------------------------------

#include <iostream>
using namespace std;

//----Global Constants---------------------------------

const char GOLD    = 'G';    // Gold chip indicator
const char SILVER  = 'S';    // Silver chip indicators 
const char RED     = 'R';    // Red chip indicators
const char BLUE    = 'B';    // Blue chip indicator
const char EXIT    = 'X';    // Exit flag, Sentinel

const int VALUE_OF_GOLD_CHIP     = 1000;  // Thousand dollars 
const int VALUE_OF_SILVER_CHIP   = 100;   // Hundred dollars

// (2) DO: Define two int constants: 
//     VALUE_OF_RED_CHIP for fifty 
//     VALUE_OF_BLUE_CHIP for ten 

const int RED_VALUE = 50;
const int BLUE_VALUE = 10;


//---------start of main-------------------------
int  main()
{
   // (3) DO: Declare a variable named "chip" to
   //         be of type char.
   char chip;


   //----coin counters------
   int gold_chips   = 0;
   int silver_chips = 0;
   int red_chips    = 0;
   int blue_chips   = 0;  

   int cash_out     = 0;

   //------------------------------------------
   //  Read chip indicators until we get 
   //  an 'X' to exit 
   //------------------------------------------

   cin >> chip; // Read in the first chip

   // (4) DO: Fill in the condition in while-loop to test 
   //         when to exit the loop.
   while ( chip != EXIT )                              
   {                    
      if ( chip == GOLD )
         gold_chips++;
      else if ( chip == SILVER )  
         silver_chips++;
      else if ( chip == RED )  
         red_chips++;
      else 
         blue_chips++;
      
      
    
         
      // (5) DO: Count the chip type that has not been counted so far.
      // (6) DO: Read the next chip from the input.
      
      cin >> chip;
      

   
   } // end while reading and counting chips



   //----------------------------
   // Output the chip counts 
   //----------------------------

   

   cout << "Golden chips = " << gold_chips << endl;
   cout << "Silver chips = " << silver_chips << endl;
   cout << "Red chips    = " << red_chips << endl;

   // (7) DO: Output the blue chip count.
   
   cout << "Blue chips   = " << blue_chips << endl;
  


   // (8) DO: Calculate and output the cash-out amount.
   
   cout << "Cash out     = $" << gold_chips*1000+silver_chips*100+red_chips*50+blue_chips*10 ;



   return 0;
} //----------------------- end of MAIN() ----------------------------

