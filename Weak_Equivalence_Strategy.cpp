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
#include "Weak_Equivalence_Strategy.h"

//
// Weak_Equivalence_Strategy
//
Weak_Equivalence_Strategy::Weak_Equivalence_Strategy (void)
  :max_region_(0)
{
}

//
// ~Weak_Equivalence_Strategy
//
Weak_Equivalence_Strategy::~Weak_Equivalence_Strategy (void)
{
}

//
// parse_input (std::string &)
//
void Weak_Equivalence_Strategy::parse_input (std::string & s)
{
  // using istringstream to tokenize the input
  std::istringstream ss(s);
  // flag to indicate that first value is selected to be parsed
  bool first=true;
  int num_1=0;
  int num_2=0;
  // creating a vector of partition objects
  std::vector<Partition_Object*> p;
  while (ss)
  {
    std::string s1;
    // using getline to parse by using comma as delimiter
    if (!std::getline(ss,s1,','))
    {
      break;
    }
    // parse first part of a region if flag indicates
    if (first)
    {
      num_1=first_part(s1);
      first=false;
    }
    // otherwise parse second part of that region
    else
    {
      num_2=second_part(s1);
      // create partition object for that one region
      Partition_Object * x=f.create_partition_object(num_1,num_2);
      p.push_back(x);
      first=true;
      // repeat the while loop till all regions are stored as input
    }
  }
  // if for a particular variable the regions are more compared to all other
  // passed variables' regions then take that as maximum region.
  if (p.size()>max_region_)
  {
    max_region_=p.size();
  }
  // calling the respective weak equivalence class.
  this->parse_weak_eq_input(p);
}