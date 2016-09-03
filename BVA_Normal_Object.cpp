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
#include "BVA_Normal_Object.h"

//
// BVA_Normal_Object
//
BVA_Normal_Object::BVA_Normal_Object (void)
{
}

//
// BVA_Normal_Object (Partition_Object *)
//
BVA_Normal_Object::BVA_Normal_Object (Partition_Object * p)
  :BVA_Object(p),
  count_(0)
{
}

//
// ~BVA_Normal_Object
//
BVA_Normal_Object::~BVA_Normal_Object (void)
{
}

//
// get_nom_value ()
//
int BVA_Normal_Object::get_nom_value (void)
{
  return nom_;
}

//
// get_bva_values ()
//
int BVA_Normal_Object::get_bva_values (void)
{
  // count starts from zero and indexes the values_ vector for getting bva values.
  int x = values_[count_];
  count_++;
  return x;
}