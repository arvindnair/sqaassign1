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
#include "Functional_Test_Object.h"

//
// Functional_Test_Object
//
Functional_Test_Object::Functional_Test_Object (void)
{
}

//
// ~Functional_Test_Object
//
Functional_Test_Object::~Functional_Test_Object (void)
{
}

//
// random_generator (int, int)
//
int Functional_Test_Object::random_generator (int num_1, int num_2)
{
  // using srand to remove bias
  srand((unsigned int)time(0));
  // calculating random number between num_1 and num_2 including both.
  int random_range=num_2-num_1+1;
  int s=rand()%random_range+num_1;
  return s;
}

