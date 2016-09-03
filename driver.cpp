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
#include "BVA_Normal_Strategy.h"
#include "Weak_Normal_Equivalence_Strategy.h"
#include "Weak_Robust_Equivalence_Strategy.h"
#include "Worst_Robust_BVA_Strategy.h"

// choose function to determine the strategy
Functional_Test_Strategy * choose (int & choice);

int main ()
{
  try
  {
    int choice=0;
    int variable_count=0;
    std::string a,c;
    std::getline(std::cin, a);
    std::istringstream is (a);
    is>>choice;
    // if choice of strategy is between 1 to 4 then choose the 4 strategies.
    if (choice<5)
    {
      // using polymorphism  to get the required test case
      Functional_Test_Strategy * f=choose(choice);
      std::getline(std::cin, c);
      std::istringstream iss (c);
      iss>>variable_count;
      // reading all the other variable ranges
      while (variable_count>0)
      {
        variable_count--;
        std::string s;
        std::getline(std::cin, s);
        // parsing the string to store the partitions or ranges of variables
        f->parse_input(s);
      }
      // generating and printing the test cases.
      f->generate_test_cases();
      delete f;
    }
    // if any number not between 1 to 4 for testing strategy then exit program
    else
    {
      std::cout<<"Invalid Choice! Exiting Program"<<std::endl;
    }
  }
  // handling all exceptions here
  catch (std::exception & e)
  {
    std::cout<<e.what()<<std::endl;
  }
  return 0;
}

Functional_Test_Strategy * choose (int & choice)
{
  // if choice is 1 then normal bva
  if (choice==1)
  {
    return new BVA_Normal_Strategy();
  }
  // if choice is 2 then worst robust bva
  else if (choice==2)
  {
    return new Worst_Robust_BVA_Strategy();
  }
  // if choice is 3 then weak normal equivalence
  else if (choice==3)
  {
    return new Weak_Normal_Equivalence_Strategy();
  }
  // if choice is 4 then weak robust equivalence
  else
  {
    return new Weak_Robust_Equivalence_Strategy();
  }
}