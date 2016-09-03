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
#include "Worst_Robust_BVA_Strategy.h"

//
// Worst_Robust_BVA_Strategy
//
Worst_Robust_BVA_Strategy::Worst_Robust_BVA_Strategy (void)
  :wr_bva_objects_(0)
{
}

//
// ~Worst_Robust_BVA_Strategy
//
Worst_Robust_BVA_Strategy::~Worst_Robust_BVA_Strategy (void)
{
  // deleting the worst robust bva objects to free memory from heap
  for (size_t i = 0; i < wr_bva_objects_.size(); i++)
  {
    delete wr_bva_objects_[i];
  }
}

//
// parse_bva_input (Partition_Object *)
//
void Worst_Robust_BVA_Strategy::parse_bva_input (Partition_Object * p)
{
  // using abstract factory to create weak robust equivalence objects and store them in vector.
  Worst_Robust_BVA_Object * x=f.create_worst_robust_bva_object(p);
  wr_bva_objects_.push_back(x);
}

//
// generate_test_cases ()
//
void Worst_Robust_BVA_Strategy::generate_test_cases (void)
{
  // making a vector of size equal to number of variables and initializing to zero.
  // we use this vector to count from e.g., for 3 variables 000,001,002,...,007,010,011...so on
  // till 777 and print the values of worst robust bva vector using these vector values as indices.
  // this technique is used in cartesian product.
  std::vector <int>v(wr_bva_objects_.size(),0);
  // variable used to point to last variable's index
  int count=wr_bva_objects_.size()-1;
  bool break_flag=false;
  // run the loop 7 times and reset in while till the first variable reaches till 7.
  for (size_t i = 0; i < ROBUST_WORST_BVA_VALUE; i++)
  {
    print_test_case(v);
    v[count]++;
    if (i==ROBUST_WORST_BVA_VALUE-1)
    {
      i=-1;
      // if current variable has reached 7
      while (v[count]==ROBUST_WORST_BVA_VALUE)
      {
        // if the first variable has reached till 7 then exit as all test cases are done.
        if (count==0 && v[count]==ROBUST_WORST_BVA_VALUE)
        {
          break_flag=true;
          break;
        }
        // if it is not first variable then reset it to zero and increment the previous variable's counter.
        // e.g., if it is 017 then make it 020.
        v[count]=0;
        count--;
        v[count]++;
      }
      // make the count as last variable index
      count=wr_bva_objects_.size()-1;
      if (break_flag)
      {
        break;
      }
    }
  }
}

//
// print_test_case (std::vector<int> &)
//
void Worst_Robust_BVA_Strategy::print_test_case (std::vector<int> & v)
{
  // prints the test case using the vector v's index.
  for (size_t i = 0; i < v.size(); i++)
  {
    std::cout<<wr_bva_objects_[i]->get_value(v[i])<<" ";
  }
  std::cout<<std::endl;
}