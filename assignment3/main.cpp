#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string init = "--init";
string iterations = "--iterations";
string lastopponentmove = "--last_opponent_move";
string confess = "confess";
string silent = "silent";
string zero = "zero";

int main() {
  int numOfiterations;
  string prisonerA;
  string prisonerB;
  int AYears = 0;
  int BYears = 0;
  int iteration;



  iteration = 1;

  cout << "How many iterations: ";
  cin >> numOfiterations;

while (numOfiterations > 0)
 {
   numOfiterations = numOfiterations - 1;
   cout << "Game " << iteration++ << endl;

   cout<< "What is your decision Prisoner A? confess or silent: ";
   cin >> prisonerA;
   cout<< "What is your decision Prisoner B? confess or silent: ";
   cin >> prisonerB;

    if (prisonerA == confess && prisonerB == confess) 
    {
        AYears = 5;
        BYears = 5;
        cout << "Prisoner A chose: " << confess << " \nPrisoner B chose: " << confess << endl;
        cout << "Prisoner A was given: " << AYears << " years." << endl;
        cout << "Prisoner B was given: " << BYears << " years." << endl;
    }

    else if (prisonerA == silent && prisonerB == silent)
    {
        AYears = 1;
        BYears = 1;
        cout << "Prisoner A chose: " << silent << " \nPrisoner B chose: " << silent << endl;
        cout << "Prisoner A was given: " << AYears << " year." << endl;
        cout << "Prisoner B was given: " << BYears << " year." << endl;
    }

    else if (prisonerA == confess && prisonerB == silent)
    {
        AYears = 0;
        BYears = 20;
        cout << "Prisoner A chose: " << confess << " \nPrisoner B chose: " << silent << endl;
        cout << "Prisoner A was given: " << AYears << " years." << endl;
        cout << "Prisoner B was given: " << BYears << " years." << endl;
    }
    else if (prisonerA == silent && prisonerB == confess)
    {
        AYears = 20;
        BYears = 0;
        cout << "Prisoner A chose: " << silent <<  " \nPrisoner B chose: " << confess << endl;
        cout << "Prisoner A was given: " << AYears << " years." << endl;
        cout << "Prisoner B was given: " << BYears << " years." << endl;
    }
    
    if(AYears > BYears)
    {
      cout << "Prisoner A loses. Opponent advances." << endl;
    }
    if(AYears < BYears)
    {
      cout << "Prisoner B loses. You advance." << endl;
    }
    if(AYears == BYears)
    {
      cout << "You both are staying in prison for the same amount of time. Its a tie." << endl;
    }
 }
return 0;
}
