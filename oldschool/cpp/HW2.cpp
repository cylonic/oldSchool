#include<iostream>
#include<iomanip>
using namespace std;







int main()
{
int grades,  sections=1;
int high, low;
int num_scores;
float average, master_sum=0, master_avg;
int master_num_scores=0;

cin>> num_scores;

while(cin)
{
float sum=0;
int first_loop=0;
int a=0, b=0, c=0, d=0, e=0, f=0;



   for(int i = 0; i < num_scores; i++)
    {
    
     cin >> grades;
     sum=grades+sum; 
     master_sum = grades+master_sum;
     
     

     
     if (grades >= 90)
     a++;
      else if(grades >= 80)
       b++;
        else if(grades >= 70)
         c++;
          else if(grades >=60)
           d++;
            else
             f++;   
     
     if(first_loop == 0){
      low = grades;
      high = grades;
      }
       if(grades < low)
        low = grades;
       if(grades > high)
        high = grades; 
      
      first_loop++;  
    }
    
      master_num_scores = num_scores + master_num_scores;
      master_avg = master_sum / master_num_scores;
      average = sum/num_scores;










cout << endl << "Scores for section " << sections << endl;
cout << "A's: "<< a << endl << "B's: " << b << endl << "C's: " << c << endl
     << "D's: " << d << endl << "F's: " << f << endl;     
cout<< "Lowest score: " << low << endl << "Highest score: " << high << endl;
cout<< fixed << showpoint <<setprecision(2);
cout<< "Average score: " << average << endl << endl;

sections++;
cin >> num_scores;

}

cout << endl << "Total number of sections: " << sections-1 << endl 
     << "Total number of scores: " << master_num_scores << endl;
cout<<  "Class Average: " << master_avg << endl;     
cout<< endl<< "That's all the sections!! Normal Terminaiton.";


return 0;
}
