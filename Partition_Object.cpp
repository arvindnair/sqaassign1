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
#include "Partition_Object.h"

//
// Partition_Object
//
Partition_Object::Partition_Object (void)
{
}

//
// Partition_Object (int, int)
//
Partition_Object::Partition_Object (int num_1, int num_2)
  :min_(num_1),
  max_(num_2)
{
}

//
// ~Partition_Object
//
Partition_Object::~Partition_Object (void)
{
}

//
// get_min ()
//
int Partition_Object::get_min (void)
{
  return min_;
}

//
// get_max ()
//
int Partition_Object::get_max (void)
{
  return max_;
}