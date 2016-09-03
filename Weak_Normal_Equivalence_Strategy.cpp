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
#include "Weak_Normal_Equivalence_Strategy.h"

//
// Weak_Normal_Equivalence_Strategy
//
Weak_Normal_Equivalence_Strategy::Weak_Normal_Equivalence_Strategy (void)
  :Weak_Equivalence_Strategy()
{
}

//
// ~Weak_Normal_Equivalence_Strategy
//
Weak_Normal_Equivalence_Strategy::~Weak_Normal_Equivalence_Strategy (void)
{
  // deleting weak normal equivalence objects to free memory from heap
  for (size_t i = 0; i < wne_objects_.size(); i++)
  {
    delete wne_objects_[i];
  }
}

//
// parse_weak_eq_input(std::vector<Partition_Object*>)
//
void Weak_Normal_Equivalence_Strategy::parse_weak_eq_input (std::vector<Partition_Object*> p)
{
  // creating and storing weak normal equivalence object in the wne objects vector.
  Weak_Normal_Equivalence_Object * w=f.create_weak_normal_equivalence_object(p);
  wne_objects_.push_back(w);
}

//
// generate_test_cases ()
//
void Weak_Normal_Equivalence_Strategy::generate_test_cases (void)
{
  // the first for loop for iterating all the max regions
  for (size_t i = 0; i < max_region_; i++)
  {
    // the second for loop iterates over all the objects
    for (size_t j = 0; j < wne_objects_.size(); j++)
    {
      // the get number function takes care of returning the value from the regions.
      std::cout<<wne_objects_[j]->get_number()<<" ";
    }
    std::cout<<std::endl;
  }
}