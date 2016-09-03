//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _FUNCTIONAL_TEST_FACTORY_H_
#define _FUNCTIONAL_TEST_FACTORY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Test_Factory.h"

/**
 * @class Functional_Test_Factory
 *
 * Basic implementation of Test_Factory derived from Test_Factory.
 * Concrete Factory for Functional Test Object creation.
 */
class Functional_Test_Factory : Test_Factory
{
public:
  /// Constructor
  Functional_Test_Factory (void);

  /// Destructor
  virtual ~Functional_Test_Factory (void);

  /**
   * Method for creating and returning a Partition Object.
   *
	 * @param[in]    int                       First Number
	 * @param[in]    int                       Second Number
   * @return       Partition_Object *        new Partition Object
   */
  virtual Partition_Object * create_partition_object (int num_1, int num_2);

  /**
   * Method for creating and returning a new BVA_Normal_Object.
   *
	 * @param[in]    Partition_Object *         p
   * @return       BVA_Normal_Object *        new BVA_Normal_Object
   */
  virtual BVA_Normal_Object * create_bva_normal_object (Partition_Object * p);

  /**
   * Method for creating and returning a new Worst_Robust_BVA_Object.
   *
	 * @param[in]    Partition_Object *               p
   * @return       Worst_Robust_BVA_Object *        new Worst_Robust_BVA_Object
   */
  virtual Worst_Robust_BVA_Object * create_worst_robust_bva_object (Partition_Object * p);

  /**
   * Method for creating and returning a new Weak_Normal_Equivalence_Object.
   *
	 * @param[in]    vector of Partition_Objects             regions
   * @return       Weak_Normal_Equivalence_Object *        new Weak_Normal_Equivalence_Object
   */
  virtual Weak_Normal_Equivalence_Object * create_weak_normal_equivalence_object (std::vector<Partition_Object*> regions);

  /**
   * Method for creating and returning a new Weak_Robust_Equivalence_Object.
   *
	 * @param[in]    vector of Partition_Objects             regions
   * @return       Weak_Robust_Equivalence_Object *        new Weak_Robust_Equivalence_Object
   */
  virtual Weak_Robust_Equivalence_Object * create_weak_robust_equivalence_object (std::vector<Partition_Object*> regions);

private:

};

#endif // !_FUNCTIONAL_TEST_FACTORY_H_
