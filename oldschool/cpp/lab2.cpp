//------------------------------------------------------------------------
// DO_1:
//
// Name:
//
// Course:      CS 102
//
// Description: This program computes a discount on the sale price if the 
//              laptop price is greather than 500, taxes (7.5%), shipping 
//              charges and total sale amount on the purchase of a laptop.  
//
// Input:       sale price of laptop: 
//              weight of laptop: Range is 2.3 to 7.9 inclusive
//                 
// Output:      The sale price, discount, net sale amount, tax (7.5 percent
//              of sale price), shipping charges (based on table below) 
//              and total sale price which is the sum of sale price, tax and
//              shipping charges are all displayed.
//
//                 Computation of shipping charges
//
//        Weight is        and            Shipping charge is 
//    	    
//         >= 2.3         <  4.3         5.40 + ( sale price * 2.5% )
//         >= 4.3         <  5.8         5.80 + ( sale price * 2.75% )
//         >= 5.8         <= 7.9         6.20 + ( sale price * 3.25% )
//------------------------------------------------------------------------

#include <iostream>     
#include <iomanip>     
using namespace std;

const float TOP_SALE_PRICE      = 500.0;    // top laptop cost
const float DISCOUNT_PCT        = .15;      // 15% discount
const float TAX_PCT             = .075;     // tax is 7.5%

const float SMALL_WEIGHT        = 2.3;      // low end 1st range weight
const float TOP_SMALL_WEIGHT    = 4.3;      // top end 1st range weight
const float TOP_MID_WEIGHT      = 5.8;      // top 2nd range weight
const float TOP_WEIGHT          = 7.9;      // top 3rd range weight

const float SMALL_SHIP          = 5.4;      // 1st range ship charge
const float MID_SHIP            = 5.8;      // 2nd range ship charge
const float TOP_SHIP            = 6.2;      // 3rd range ship charge

const float SMALL_SHIP_PCT      = .025;     // small shipping pct is 2.5%

// DO_2: Define two float constant for the following.  Use the names given.
const float MID_SHIP_PCT =   .0275;
const float TOP_SHIP_PCT =  .035;


int main()
{
   float    salePrice, weight;
   float    discountAmount, netSalePrice;                               
   float    taxAmount, shippingCharges, totalSalePrice;
 
   cout << "Enter the sale price of the laptop: ";              
   cin  >> salePrice; 

   cout << "Enter the weight of the laptop: ";
   cin >> weight;
                                 

   // DO_3: Fill in the test conditions to check 
   //       for invalid weight. Use the constants SMALL_WEIGHT
   //       and TOP_WEIGHT in your test.
   if ( weight < SMALL_WEIGHT || weight > TOP_WEIGHT )
   {
      cout << "The weight " << weight << " is not between "
           << SMALL_WEIGHT << " and " << TOP_WEIGHT << endl;
      return 1;
   }

   // DO_4: Use if statement to test if the salePrice is over 500.
   //       If it is, compute the discountAmount. (15% of the 
   //       salePrice)  If it is not, the discountAmount should be 0.
   //       Use the constant defined for the discount percent.
   if (salePrice > 500)
      discountAmount = salePrice * DISCOUNT_PCT;
   else
      discountAmount = 0;
   
   
   

   netSalePrice = salePrice - discountAmount;

   // DO_5: Compute taxAmount based on salePrice
   //       Use the constant for the tax percent.
   
   taxAmount = salePrice * TAX_PCT;

   

   // DO_6: Complete the following nested if statement
   //         to compute the shipping based on the table
   //         given in the comment block. Note that if the
   //         program gets to this if statement, we know that
   //         we have a valid weight.
   //         Be sure to use the constants that are defined!
  
   if (weight < TOP_SMALL_WEIGHT)
      shippingCharges = SMALL_SHIP + ( salePrice * SMALL_SHIP_PCT );

   // (6.1) Fill in the condition so that shippingCharges will be 
   //         computed for the middle range.
   
   else if ( weight < TOP_MID_WEIGHT)
      shippingCharges = MID_SHIP + ( salePrice * MID_SHIP_PCT );
     
      // (6.2)  Write out the assignment statement for computing the 
      //           shippingCharges for the middle range
          
   else
      
      if (weight < TOP_WEIGHT)
      shippingCharges= TOP_SHIP + ( salePrice * TOP_SHIP_PCT );
      
      // (6.3) Compute shippingCharges for the third range
      

   totalSalePrice = netSalePrice + taxAmount + shippingCharges;

   cout <<  fixed << showpoint << setprecision(2);
   cout << "The sale price     : $" << salePrice << endl;
   cout << "The discount       : $" << discountAmount << endl;
   cout << "The net sale price : $" << netSalePrice << endl;
   cout << "The sales tax      : $" << taxAmount << endl;
   cout << "The shipping       : $" << shippingCharges << endl << endl;
   cout << "The total sale     : $" << totalSalePrice; 

   return 0;                                       
}                                                  
