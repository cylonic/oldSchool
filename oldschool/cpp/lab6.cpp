#include<iostream>
#include<cmath>
using namespace std;

//Wesley Turner
//CS 102-006
//Lab 6


//NOTE: I had to increase HiC's max steps to 2 million for this to run upto 9474.

int main()
{
int sum, armstrong;
int b, c, d, e;


for(int a=1; a<10000; a++)
{

if(a<10)
armstrong = a;


else if(a < 100)
{
b = a / 10;
c = a % 10;
armstrong = pow(b, 2)+ pow(c, 2);
}

else if(a < 1000)
{
b = a/100;
c = (a/10)%10;
d = (a%10);
armstrong = pow(b, 3)+pow(c, 3)+pow(d, 3);
}

else
{
b = a / 1000;
c = (a/100)%10;
d = a%100/10;
e = a % 10;
armstrong = (pow(b, 4))+(pow(c, 4))+(pow(d, 4))+(pow(e, 4));
}



if(a == armstrong)
cout << "armstrong # = "<< armstrong << endl;

}


return 0;
}


