#include<iostream>
using namespace std;


float Sum(float nums[], int length)
	{
	   float sum = 0.0;
	   for(int i = 0; i < length; i++)
	      sum += nums[i];
	   return sum;
	}

void print_beer_total()
	{
	   float beer[4];	// in pints
	   beer[0] = 4.5;
	   beer[1] = 6.5;
	   beer[2] = 0.0;	// designated driver
	   beer[3] = -1.0;	// first-time drinker!

	   cout << "Total consumption: " << Sum(beer, 4) << endl;
	}





void main()
{
	print_beer_total();
	
}	
