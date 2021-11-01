#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//commands for terminal usage
string init = "--init";
string iterations = "--iterations";
string lastopponentmove = "--last_opponent_move";
string commconfess = "confess";
string commsilent = "silent";
string commzero = "zero";
int turnsToPlay = 1000;
const int zero = 0;
const int silent = 1;
const int confess = 2;

int main(int argc, char *argv[]) 
  {
  vector<string>arg = vector<string>(); // manipulation for the argument to eventually parse strings by using argv and argc

  for (int i = 0; i < argc; i++) 
  {
    arg.push_back(string(argv[i])); // making our argument compatible to be able to parse strings by deriving
  }

   int count = (argc - 1) / 2; // this will allow the iteration to occur
  for (int i = 0; i < count; i++)
  {
    int a = (i * 2) + 1; // first command
    int b = (i * 2) + 2; // second command

    if (arg[a].compare(init) == 0) 
    {
     cout << " \n";
    }
    else if (arg[a].compare(iterations) == 0) 
    {
      turnsToPlay = atoi(arg[b].c_str()); // where we will be able to use the string for the char* into an integer
    }
    else if (arg[a].compare(lastopponentmove) == 0) 
    {
      int lastmove = zero; // value of 0
      if (arg[b].compare(commsilent) == 0) 
      {
        lastmove = silent; // value of 1
      }
      if (arg[b].compare(commconfess) == 0) 
      {
        lastmove = confess; // value of 2
      }

      if (!(lastmove >= turnsToPlay))
      {
        if (lastmove == confess) 
        {
          cout << "\n" << commconfess; // making the decision to confess
        }
        else 
        {
          cout << "\n" << commsilent; // making the decision to stay silent
        }
      }
      else 
      {
        cout << "\n" << commzero; // default
      }
    }
  }
}
/* sources: 
  http://www.cplusplus.com/articles/DEN36Up4/
  https://www.cplusplus.com/reference/cstdlib/atoi/
  https://ornl-training.github.io/cpp-novice/24-commandline/
 thank you professor Jardin for the source ^!
 */