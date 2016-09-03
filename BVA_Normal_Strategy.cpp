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
#include "BVA_Normal_Strategy.h"
#include "BVA_Normal_Object.h"
#include "Partition_Object.h"

//
// BVA_Normal_Strategy
//
BVA_Normal_Strategy::BVA_Normal_Strategy (void)
  :bva_objects_(0)
{
}

//
// ~BVA_Normal_Strategy
//
BVA_Normal_Strategy::~BVA_Normal_Strategy (void)
{
  // deleting bva normal objects to free memory from heap
  for (size_t i = 0; i < this->bva_objects_.size(); i++)
  {
    delete bva_objects_[i];
  }
}

//
// parse_bva_input (Partition_Object *)
//
void BVA_Normal_Strategy::parse_bva_input (Partition_Object * p)
{
  // using abstract factory method to create normal bva object and store in vector.
  BVA_Normal_Object * x=f.create_bva_normal_object(p);
  bva_objects_.push_back(x);
}

//
// generate_test_cases ()
//
void BVA_Normal_Strategy::generate_test_cases (void)
{
  // taking the nom values and storing in  temporary vector n.
  std::vector<int> n(bva_objects_.size());
  for (size_t i = 0; i < bva_objects_.size(); i++)
  {
    n[i]=bva_objects_[i]->get_nom_value();
  }
  //printing out the nom values
  print_test_case(n);
  // making a copy of the nom values
  std::vector<int> v(n);
  // here one variable's bva values expect nom are combined with all other variables' nom values.
  for (size_t i = 0; i < bva_objects_.size(); i++)
  {
    for (int j = 0; j < BVA_NORMAL_VECTOR_VALUE; j++)
    {
      // changing that particular variable's value in nom vector and fixing the others at nom and printing.
      n[i]=bva_objects_[i]->get_bva_values();
      print_test_case(n);
    }
    // assign back all nom values.
    n=v;
  }
}

//
// print_test_case (std::vector<int> &)
//
void BVA_Normal_Strategy::print_test_case (std::vector<int> & n)
{
  // printing the test case for the passed vector.
  for (size_t i = 0; i < n.size(); i++)
  {
    std::cout<<n[i]<<" ";
  }
  std::cout<<std::endl;
}
