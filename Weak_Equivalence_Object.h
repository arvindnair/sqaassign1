//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_EQUIVALENCE_OBJECT_H_
#define _WEAK_EQUIVALENCE_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Functional_Test_Object.h"
#include "Partition_Object.h"

/**
 * @class Weak_Equivalence_Object
 *
 * Weak_Equivalence_Object derived from Functional_Test_Object.
 * Meant to act as base class for types of Weak Equivalence Objects for variables.
 */
class Weak_Equivalence_Object : public Functional_Test_Object
{
public:
  /// Constructor
  Weak_Equivalence_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      regions        vector of partition objects
	 */
  Weak_Equivalence_Object (std::vector<Partition_Object*> regions);

  /// Destructor
  virtual ~Weak_Equivalence_Object (void);

  /**
   * Method for assigning the values of the regions
   * in valid_regions_ array.
   */
  virtual void assign_values (void);

  /**
   * Method for getting the values of the valid regions
   * from valid_regions_ array.
   *
   * @return       int        number from valid region.
   */
  virtual int get_number (void);

protected:
  // Vector for storing the equivalence regions of the variable.
  std::vector<Partition_Object*> regions_;

  // Vector for storing a value from each of the valid regions.
  std::vector<int> valid_regions_;

  // Variable for keeping track of maximum regions for variable.
  int max_region_;

  // Variable to index the values in valid regions.
  int count_region_;
};

#endif // !_WEAK_EQUIVALENCE_OBJECT_H_
