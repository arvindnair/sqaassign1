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
#include "Weak_Equivalence_Object.h"

//
// Weak_Equivalence_Object
//
Weak_Equivalence_Object::Weak_Equivalence_Object (void)
{
}

//
// Weak_Equivalence_Object (std::vector<Partition_Object*>)
//
Weak_Equivalence_Object::Weak_Equivalence_Object (std::vector<Partition_Object*> regions)
  :regions_(regions),
  valid_regions_(0),
  max_region_(regions.size()),
  count_region_(0)
{
  // calling assign values function so that when the object is created the valid values from valid
  // regions are selected and stored
  this->assign_values();
}

//
// ~Weak_Equivalence_Object
//
Weak_Equivalence_Object::~Weak_Equivalence_Object (void)
{
  for (size_t i = 0; i < regions_.size(); i++)
  {
    delete regions_[i];
  }
}

//
// assign_values ()
//
void Weak_Equivalence_Object::assign_values (void)
{
  for (size_t i = 0; i < regions_.size(); i++)
  {
    int x=0;
    // if the min and max is same for cases like (10,12) take one value i.e., 11
    if (regions_[i]->get_min()==regions_[i]->get_max())
    {
      x=regions_[i]->get_min();
    }
    // if the cases are not same then use random generator to select a value between the region.
    else
    {
      x=random_generator(regions_[i]->get_min(),regions_[i]->get_max());
    }
    valid_regions_.push_back(x);
  }
}

//
// get_number ()
//
int Weak_Equivalence_Object::get_number (void)
{
  int a=0;
  // if all the valid regions are covered once then select randomly a value from any of the regions
  if (count_region_==max_region_)
  {
    int x=0;
    if ((max_region_-1)!=0)
    {
      x=random_generator(0,max_region_-1);
    }
    a=valid_regions_[x];
  }
  // if all regions are not covered then take values from uncovered regions.
  else
  {
    a=valid_regions_[count_region_];
    count_region_++;
  }
  return a;
}