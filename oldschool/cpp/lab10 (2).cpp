//---------------------------------------------------------------------
//
//       DO_01:
// Name:
// 
//          Purpose: This program asks for a starting number of a progression
//          of numbers and the differeence between each value of the
//          progression and keeps track of the next 49 values in the
//          progression.  The user then is asked in enter a value and the
//          program will determine if the value is part of the 
//          progression and if so, where it is located.  If the value is
//          not part of the progression, an appropriate message is 
//          displayed.  Finally the user enters in a number between 0 
//          and 50 and lists that many values of the progression 
//          starting with the first value of the progression.  No more 
//          than 10 values are displayed on a line.
//
// Input:   The input for this program is the beginning value of the
//          progression, the difference between each value,
//          the lookup value and how many values to display starting
//          with the first value of the progression.
//
// Output:  A prompt for starting number and difference at the start of
//          the program.  There is a prompt for a number to lookup and
//          a message saying if the number is in the progression and
//          where it is located in the progression or a message saying
//          that the number is not in the progression.  The last output
//          is a prompt for how many numbers in the progression to show 
//          and a list of that many numbers from the progression starting
//          with the first value of the progression - no more than ten 
//          values per line.
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

const int ARRAYSIZE = 50;
const int DSPERLINE = 10;
const int WIDE = 7;

void GetProgressVals(int& startval, int& diff);

// DO_06: Complete the following prototypes:
void LoadArray(       int progress_arr[], int startnum, int diff           );
int FindLookup(       const int progress_arr[], int lookupval           );
void showList(       const int progress_arr[], int howmany            );

int main()
{
   int startnum = 0;
   int difference = 0;
   int lookupval = 0;
   int location;       // negative if not in the array or the
                       // location in the array
   int dsp_howmany;
   int progression[ ARRAYSIZE ];

// DO_2a:  Write the function call for GetProgressVals.  Hint: Look at
//         the prototype above for number and type of parameters
   
   GetProgressVals(startnum, difference);
   LoadArray( progression, startnum, difference );

   cout << endl << "Enter a value to locate in the progression: ";
   cin >> lookupval;

// DO_2b:  Complete the function call for FindLookup.  Hint: Look at
//         the function header below for number and type of parameters.

   location =  FindLookup(progression, lookupval);
   
   if ( location < 0 )
      cout << lookupval << " is not in the array." << endl;
   else
      cout << lookupval << " is in the array at index position " 
           << location << "." << endl;

   cout << endl << "How many would you like me to show? ";
   cin >> dsp_howmany;
   while ( dsp_howmany < 0 || dsp_howmany > ARRAYSIZE )
   { 
      cout << "Enter a number between 0 and " << ARRAYSIZE << ". "
           << endl;
      cout << "How many would you like me to show? ";
      cin >> dsp_howmany;
   }
   
   showList( progression, dsp_howmany );
   return 0;
}

// DO_03: Complete GetProgressVals by filling in the function header.
// This function prompts for the starting value of the progression
// and the difference between each value. These are sent back to 
// the main program. 
// params: (out, out)

void GetProgressVals(int& startval, int& diff )
{
   cout << "Enter a starting value for the progression: ";
   cin >> startval;
   cout << endl << "Enter the difference between values in the "
        << " progression: ";
   cin >> diff;
}


// This function uses the startnum and the difference sent to the
//  function to determine 50 numbers of the progression and place them
//  in the array.
// params: (out, in, in)

void LoadArray( int progress_arr[], int startnum, int diff )
{
   int loopcount;
   
   progress_arr[ 0 ] = startnum;
// DO_04: Add the necessary code to compute the next 49 values of the 
//        progression and place them in the array.
   for ( int i = 0; i < 49; i++)                                 
   {
   progress_arr[i] = startnum + diff*i;

   }
}

// FindLoopup determines if the lookup value is in the list of the 50
//  values of the progression. If it is, the location in the list is
// returned otherwise -1 is returned to indicate that the value is not
//  in the list.
// params:  in, in
int FindLookup( const int progress_arr[], int lookupval )
{ 
// DO_05 Write a loop for this function to see if the lookup value
//       is in the array.  If it is, return the location in the
//       array.  If not, return a negative number.
//       Remember:  Arrays begin with location 0 so a negative number
//                  would mean it is not in the array. 0 through 49 are
//                  valid for locations where the number is in array.

int count = 0;
int position = 0;
int x = 0;

for ( int loopcount = 0; loopcount < ARRAYSIZE; loopcount++ )
   {
     if ( lookupval == progress_arr[ loopcount ] )
       return loopcount;
   }

   return -1;
}

//position = x+1;


//return position;

//return -1;


// showList prints 10 numbers per line in evenly spaced columns.  Stop
//     showing numbers after showing the quantity indicated by howmany.
// params: (in, in)
void showList( const int progress_arr[], int howmany )
{
   int count = 0;
   int shownsofar;
  
   for ( shownsofar = 0; shownsofar < howmany; shownsofar++ )
   {
      cout << setw(WIDE) << progress_arr[ shownsofar ];
      count++;

      if ( count == DSPERLINE )
      {
         cout << endl;
         count = 0;
      }
   }
}
