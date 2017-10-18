//---------------------------------------------------------------------
//
// Name:    DO_01  Enter your Name
//
//  Purpose: This program prints a simple calendar.
//          It reads in a date, writes out the date, then
//          writes out the next consecutive 14 dates, one per line.
//
// Input:   A date in the form of MM/DD/YYYY.  See ReadDate()
//          Where MM is an integer from 1 to 12 
//                DD is an integer from 1 to 31 (you may assume that 
//                   DD is correct with respect to MM and YYYY).
//                YYYY is the year from -32768 to 32767                        
//
// Output:  The current date and the next consecutive 14 dates are 
//          output in the form of MM/DD/YYYY  
//             Ex. output: 11/3/2005       
//---------------------------------------------------------------------

#include <iostream>
using namespace std;

const int NUM_DATES_TO_WRITE = 14;
const int MONTHS_IN_YEAR = 12;

// Stores information for one date
//-------------------------------------------------------
//  DO_02:
//         Complete the structure for TDate, which consists 
//         of three integers members : day, month and year. 
//
//-------------------------------------------------------- 
struct TDate
{
  


};


void ReadDate ( TDate& startDate );
void WriteDate ( const TDate& someDate);
bool IsLastDayOfTheMonth ( TDate theDate);

//--------------------------------------------------------
// DO_07:
//        Complete the prototype for the function 
//        IncrementDate.
//
// HINT:  Do this after you have implemented the function. 
//--------------------------------------------------------
void IncrementDate (           );



void main()
{
   TDate date;

   cout << "Enter a date (MM/DD/YYYY): ";

   ReadDate(date);   
  
   cout << endl;

   WriteDate(date);  // Write out the date

   //-----------------------------------------------------------------
   // DO_9: 
   //        Write the code to output the next consecutive 14 dates.
   //   
   //
   //   Hint: Use a for loop and inside the body:
   //         call IncrementDate and WriteDate in that order.
   //         Use the constant NUM_DATES_TO_WRITE!
   //----------------------------------------------------------------





}//------------- END OF main () -------------------------------------


//------------------------------------------------------------------
// Reads a date from standard input.  The date must be of the 
// form:  month/day/year  
// PRECONDITION: It is assumed that the date is in the correct form.
// params: (out)
//------------------------------------------------------------------
void ReadDate(TDate& date)
{
   char slash;
   cin >> date.month >> slash
       >> date.day >> slash
       >> date.year;
} // ----------END OF ReadDate () ---------------------------------


//------------------------------------------------------------------
// DO_08:
//        Write the function WriteDate that will display a date to
//        standard output in the  format:  M/D/YYYY.
//        Make sure to write a new line after writing the date.
//        Single digit months and days can be just one digit.
//        (That is . . . don't worry about fancy formatting).
//
// HINTS:  The prototype is given and see the ReadDate function
//
// PRECONDITION: It is assumed that the date is in the correct form.
// params: (in)
//------------------------------------------------------------------






//------------END OF WriteDate -----------------------------------


//------------------------------------------------------------------
// Returns a TRUE if the date passed is the last day of the month,
// returns FALSE otherwise.
// params: (in)
//------------------------------------------------------------------
bool IsLastDayOfTheMonth ( TDate date )
{
   int last_day;
   switch ( date.month )
   {
      case 2 :     // February - the tough one!  Leap year.
         if ( date.year % 4 == 0 && date.year % 100 != 0
              || date.year % 400 == 0 )
            last_day = 29;
         else
            last_day = 28;
         break;

      case 4:
      case 6:
      case 9:
      case 11:  // 30 days, hath September...
         last_day = 30;
         break;

      default:
         last_day = 31;
   }
   if (last_day == date.day)
      return true;
   else
      return false;
} //-----------END OF IsLastDayOfTheMonth()------------------------------


//-----------------------------------------------------------------------
//  DO_03-06:    
//      Complete a function that increments the date.  See the individual
//      DO_'s below.
//
//      Be sure to handle the end of the month, and in particular, handle 
//      December 31 properly.
//      1.  USE IsLastDayOfTheMonth to see if you need to 
//      increment the month and set day back to 1.
//
//      2. Check the month to see if you need to increment 
//      the year and set month back to 1.
//
//      3. If the year and month do not need to change then
//      increment the day.   
//-------------------------------------------------------------
// params: (inout)
void IncrementDate ( TDate& date)
{

   //------------------------------------------------------
   //  DO_03:
   //         Call IsLastDayOfTheMonth passing in the date
   //         to determine if the date is the last day of 
   //         a month. 
   //------------------------------------------------------
   if (                         )
   {
      date.day = 1;

      //------------------------------------------------------
      //  DO_04:
      //          Complete the condition to check for the last
      //          month of the year.  HINT: there is a constant
      //          named MONTHS_IN_YEAR.
      //------------------------------------------------------   
      if (                           )
      {
         date.month = 1;
         date.year++;
      }
      else

         //------------------------------------------------------- 
         //  DO_05:
         //         Increment the month
         //-------------------------------------------------------
        

   }
   else

      //-------------------------------------------------------
      //  DO_06:
      //         Increment the day 
      //-------------------------------------------------------
      



} // ----------------END OF IncrementDate () -------------

