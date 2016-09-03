//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Functional_Test_Strategy.h"

//
// Functional_Test_Strategy
//
Functional_Test_Strategy::Functional_Test_Strategy (void)
{
}

//
// ~Functional_Test_Strategy
//
Functional_Test_Strategy::~Functional_Test_Strategy (void)
{
}

//
// first_part (std::string &)
//
int Functional_Test_Strategy::first_part (std::string & s)
{
  // remove spaces from string
  remove_spaces(s);
  // flag to increase the value if '(' is encountered
  bool increase=false;
  int a=0;
  if (s[0]=='(')
  {
    increase=true;
  }
  // erasing the bracket from string
  s.erase(0,1);
  a=std::stoi(s);
  // increase the value if '(' was encountered
  if (increase)
  {
    a++;
    increase=false;
  }
  return a;
}

//
// second_part (std::string &)
//
int Functional_Test_Strategy::second_part (std::string & s)
{
  // remove spaces from string
  remove_spaces(s);
  // flag to increase the value if ')' is encountered.
  bool decrease=false;
  int b=0;
  if (s[s.size()-1]==')')
  {
    decrease=true;
  }
  // erasing the bracket from string
  s.erase(s.size()-1,1);
  b=std::stoi(s);
  // increase the value if ')' was encountered
  if (decrease)
  {
    b--;
    decrease=false;
  }
  return b;
}

//
// remove_spaces (std::string &)
//
void Functional_Test_Strategy::remove_spaces (std::string & s)
{
  // using string erase to remove spaces permanently from passed string
  s.erase(std::remove_if(s.begin(), s.end(), isspace), s.end());
}