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
#include "Worst_Robust_BVA_Object.h"

//
// Worst_Robust_BVA_Object
//
Worst_Robust_BVA_Object ::Worst_Robust_BVA_Object (void)
{
}

//
// Worst_Robust_BVA_Object (Partition_Object *)
//
Worst_Robust_BVA_Object::Worst_Robust_BVA_Object (Partition_Object * p)
  :BVA_Object(p)
{
  // calling the assign values to store the invalid  and nom values in the vector.
  assign_rem_values();
}

//
// ~Worst_Robust_BVA_Object
//
Worst_Robust_BVA_Object ::~Worst_Robust_BVA_Object (void)
{
}

//
// assign_rem_values ()
//
void Worst_Robust_BVA_Object::assign_rem_values (void)
{
  // calculates the min- and max+ and stores them along with nom value.
  int min_minus=bva_p_->get_min()-1;
  int max_plus=bva_p_->get_max()+1;
  this->values_.push_back(this->nom_);
  this->values_.push_back(min_minus);
  this->values_.push_back(max_plus);
}

//
// get_value (int)
//
int Worst_Robust_BVA_Object::get_value (int i)
{
  // returns the value as per the index passed.
  return this->values_[i];
}
