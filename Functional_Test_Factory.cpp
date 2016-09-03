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
#include "Functional_Test_Factory.h"

//
// Functional_Test_Factory
//
Functional_Test_Factory ::Functional_Test_Factory (void)
{
}

//
// ~Functional_Test_Factory
//
Functional_Test_Factory ::~Functional_Test_Factory (void)
{
}

//
// create_partition_object (int, int)
//
Partition_Object * Functional_Test_Factory::create_partition_object (int num_1, int num_2)
{
  return new Partition_Object(num_1,num_2);
}

//
// create_bva_normal_object (Partition_Object *)
//
BVA_Normal_Object * Functional_Test_Factory::create_bva_normal_object (Partition_Object * p)
{
  return new BVA_Normal_Object(p);
}

//
// create_worst_robust_bva_object (Partition_Object *)
//
Worst_Robust_BVA_Object * Functional_Test_Factory::create_worst_robust_bva_object (Partition_Object * p)
{
  return new Worst_Robust_BVA_Object(p);
}

//
// create_weak_normal_equivalence_object (std::vector<Partition_Object*>)
//
Weak_Normal_Equivalence_Object * Functional_Test_Factory::create_weak_normal_equivalence_object (std::vector<Partition_Object*> regions)
{
  return new Weak_Normal_Equivalence_Object(regions);
}

//
// create_weak_robust_equivalence_object (std::vector<Partition_Object*>)
//
Weak_Robust_Equivalence_Object * Functional_Test_Factory::create_weak_robust_equivalence_object (std::vector<Partition_Object*> regions)
{
  return new Weak_Robust_Equivalence_Object(regions);
}