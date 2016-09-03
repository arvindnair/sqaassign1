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
#include "Weak_Normal_Equivalence_Object.h"

//
// Weak_Normal_Equivalence_Object
//
Weak_Normal_Equivalence_Object::Weak_Normal_Equivalence_Object (void)
{
}

//
// Weak_Normal_Equivalence_Object(std::vector<Partition_Object*>)
//
Weak_Normal_Equivalence_Object::Weak_Normal_Equivalence_Object(std::vector<Partition_Object*> regions)
  :Weak_Equivalence_Object(regions)
{
}

//
// ~Weak_Normal_Equivalence_Object
//
Weak_Normal_Equivalence_Object::~Weak_Normal_Equivalence_Object (void)
{
}