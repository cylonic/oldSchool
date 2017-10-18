#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>
using namespace std;


void getkey(char key[],int numquestions){
for(int i = 0; i < numquestions; i++)
cin >> key[i];
}

void readanswers(char answers[], int numquestions){
string name;

cout << "enter the students answers, then name: ";
for(int i = 0; i < numquestions; i++)
cin >> answers[i];
cin >> name;
}

void header(){
cout << endl;

cout << setw(8) << "        Name" << "        Correct Answers"
     << "        PASS/FAIL" << endl;
cout << "        ----" << "        ---------------" << "        ---------";
cout << endl;
}

void updatetotal(int numstudents, int good, int numsections, bool passfail){
int totalstudents = 0;
int totalpassed = 0;
int totalsections = 0;

totalstudents += numstudents;
totalsections += numsections;

if(passfail == true)
totalpassed ++;

cout << totalpassed << " out of "
     << totalstudents << " students passed the exam.";
cout << endl << endl;     
}






void displayresult( bool passfail, string name, int good){

header();


cout << setw(20) << name << good; 
if(passfail == true)
cout << setw(26) << "PASS";
else
cout << setw(26) << "FAIL";
cout << endl << endl;
}



void processanswer( const char key[], const char answers[], 
                    int numquestions, int& good, bool& passfail){
good = 0;
int passed = 0;

for( int i = 0; i < numquestions; i++){
   if (toupper(key[i]) == toupper(answers[i]))
      good++;
}
   if((good / float(numquestions)) >= .6){
      passfail = true;
      passed++;
      }
   else
      passfail = false;   

    
}                                            


void processonesection( int numquestions, const char key[], int numsections){
char answers[30];
string name;
int good, numstudents;
bool passfail;


cout << "enter number of students in the section: ";
cin >> numstudents;

for( int z = 0; z < numstudents; z++){   
   for(int i = 0; i < numquestions; i++){
      readanswers(answers, numquestions);
      processanswer( key, answers, numquestions, good, passfail   );
      displayresult( passfail, name, good );
      updatetotal( numstudents,  good, numsections, passfail);


}}}





void main(){

char key[30];
int numquestions, numsections;


cout << "enter number of questions: ";
cin>> numquestions;
cout << "enter the answer key: ";

getkey( key, numquestions);

cout << "enter the number of sections: ";
cin >> numsections;


for(int x = 0; x < numsections; x++){
processonesection(numquestions, key, numsections);
}




}

