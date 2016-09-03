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
#include "BVA_Strategy.h"

//
// BVA_Strategy
//
BVA_Strategy::BVA_Strategy (void)
{
}

//
// ~BVA_Strategy
//
BVA_Strategy::~BVA_Strategy (void)
{
}

//
// parse_input (std::string &)
//
void BVA_Strategy::parse_input (std::string & s)
{
  // using istringstream to tokenize inputs
  std::istringstream ss(s);
  // first flag to check if first or second part of the range.
  bool first=true;
  int first_value=0;
  int second_value=0;
  while (!ss.eof())
  {
    std::string temp;
    // parsing the first part
    if (first)
    {
      std::getline(ss,temp,',');
      first_value=this->first_part(temp);
      first=false;
    }
    // parsing the second part
    else
    {
      std::getline(ss,temp);
      second_value=this->second_part(temp);
    }
  }
  // creating partition object using abstract factory method
  Partition_Object * p=f.create_partition_object(first_value,second_value);
  // calling the particular bva parse method to store partition object for that method.
  this->parse_bva_input(p);
}