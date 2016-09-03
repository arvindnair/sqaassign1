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
#include "Weak_Robust_Equivalence_Object.h"

//
// Weak_Robust_Equivalence_Object
//
Weak_Robust_Equivalence_Object::Weak_Robust_Equivalence_Object (void)
{
}

//
// Weak_Robust_Equivalence_Object (std::vector<Partition_Object*>)
//
Weak_Robust_Equivalence_Object::Weak_Robust_Equivalence_Object (std::vector<Partition_Object*> regions)
  :Weak_Equivalence_Object(regions),
  invalid_regions_(0),
  invalid_count_(0)
{
  // calling assign invalid values function to select invalid values
  assign_invalid_values();
}

//
// ~Weak_Robust_Equivalence_Object
//
Weak_Robust_Equivalence_Object::~Weak_Robust_Equivalence_Object (void)
{
}

//
// assign_invalid_values ()
//
void Weak_Robust_Equivalence_Object::assign_invalid_values (void)
{
  // calculating and assigning the min- and max+ values
  int x=regions_[0]->get_min()-1;
  invalid_regions_.push_back(x);
  int y=regions_[regions_.size()-1]->get_max()+1;
  invalid_regions_.push_back(y);
}

//
// get_invalid_number ()
//
int Weak_Robust_Equivalence_Object::get_invalid_number (void)
{
  // returns the invalid values for the particular variable indexing the invalid regions 
  // using invalid count variable as counter.
  int x=invalid_regions_[invalid_count_];
  invalid_count_++;
  return x;
}