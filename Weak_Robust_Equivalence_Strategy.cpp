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
#include "Weak_Robust_Equivalence_Strategy.h"

//
// Weak_Robust_Equivalence_Strategy
//
Weak_Robust_Equivalence_Strategy::Weak_Robust_Equivalence_Strategy (void)
  :Weak_Equivalence_Strategy()
{
}

//
// ~Weak_Robust_Equivalence_Strategy
//
Weak_Robust_Equivalence_Strategy::~Weak_Robust_Equivalence_Strategy (void)
{
  // deleting the weak robust equivalence objects to free memory from heap
  for (size_t i = 0; i < wre_objects_.size(); i++)
  {
    delete wre_objects_[i];
  }
}

//
// parse_weak_eq_input(std::vector<Partition_Object*>)
//
void Weak_Robust_Equivalence_Strategy::parse_weak_eq_input (std::vector<Partition_Object*> p)
{
  // using abstract factory to create weak robust equivalence objects and store them in vector.
  Weak_Robust_Equivalence_Object * w=f.create_weak_robust_equivalence_object(p);
  wre_objects_.push_back(w);
}

//
// generate_test_cases ()
//
void Weak_Robust_Equivalence_Strategy::generate_test_cases (void)
{
  // the first for loop for iterating all the max regions
  for (size_t i = 0; i < max_region_; i++)
  {
    // the second for loop iterates over all the objects
    for (size_t j = 0; j < wre_objects_.size(); j++)
    {
      std::cout<<wre_objects_[j]->get_number()<<" ";
    }
    std::cout<<std::endl;
  }
  // now generate the invalid test cases
  generate_invalid_test_cases();
}

//
// generate_invalid_test_cases ()
//
void Weak_Robust_Equivalence_Strategy::generate_invalid_test_cases (void)
{
  // using a temporary vector v to store the test cases
  std::vector<int> v(wre_objects_.size());
  for (size_t i = 0; i < wre_objects_.size(); i++)
  {
    for (size_t j = 0; j < wre_objects_.size(); j++)
    {
      // for the variable whose invalid is being considered ignore that and for all others 
      // store the valid values in a temporary vector.
      if (i!=j)
      {
        v[j]=wre_objects_[j]->get_number();
      }
    }
    // now store the particular variable's both invalid values one after another and print them
    for (size_t k = 0; k < WEAK_ROBUST_EQUIVALENCE_INVALID_VALUE; k++)
    {
      v[i]=wre_objects_[i]->get_invalid_number();
      print_test_case(v);
    }
  }
}

//
// print_test_case(std::vector<int> &)
//
void Weak_Robust_Equivalence_Strategy::print_test_case (std::vector<int> & n)
{
  // printing the test cases
  for (size_t i = 0; i < n.size(); i++)
  {
    std::cout<<n[i]<<" ";
  }
  std::cout<<std::endl;
}