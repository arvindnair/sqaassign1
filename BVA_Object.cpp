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
#include "BVA_Object.h"

//
// BVA_Object 
//
BVA_Object::BVA_Object (void)
{
}

//
// BVA_Object (Partition_Object *)
//
BVA_Object::BVA_Object (Partition_Object * p)
  :bva_p_(p),
  values_(0),
  nom_(0)
{
  this->assign_values();
}

//
// ~BVA_Object
//
BVA_Object::~BVA_Object (void)
{
  delete bva_p_;
}

//
// assign_values ()
//
void BVA_Object::assign_values (void)
{
  // calculating all values of min, min+, max- and max.
  int min=bva_p_->get_min();
  int max=bva_p_->get_max();
  int min_plus=0;
  int max_minus=0;
  // calculating min and max for conditions like (10,12)
  if (min==max)
  {
    min_plus=min;
    max_minus=max;
  }
  else
  {
    min_plus=min+1;
    max_minus=max-1;
  }
  // storing all the values of min, min+, max- and max.
  values_.push_back(min);
  values_.push_back(min_plus);
  values_.push_back(max_minus);
  values_.push_back(max);
  // calculating the nom value.
  nom_=assign_nom_value(max-min);
}

//
// assign_nom_value (int)
//
int BVA_Object::assign_nom_value (int nom_condition)
{
  // calculating nom for conditions like (10,12) where only 11 is value of range
  if (nom_condition==0)
  {
    return bva_p_->get_min();
  }
  // calculating nom for conditions like [10,13] where nom can be from 10 to 13.
  else if (nom_condition<=3)
  {
    return random_generator(bva_p_->get_min(),bva_p_->get_max());
  }
  // calculating nom for conditions like [10,14] where nom is 12.
  else if (nom_condition==4)
  {
    return bva_p_->get_min()+2;
  }
  // calculating nom for conditions like [10,20] where nom is between 12 and 18 including both 12 and 18.
  else
  {
    return random_generator(bva_p_->get_min()+2,bva_p_->get_max()-2);
  }
}