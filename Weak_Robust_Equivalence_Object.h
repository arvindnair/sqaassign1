//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_ROBUST_EQUIVALENCE_OBJECT_H_
#define _WEAK_ROBUST_EQUIVALENCE_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Weak_Equivalence_Object.h"
#include "Partition_Object.h"

/**
 * @class Weak_Robust_Equivalence_Object
 *
 * Weak_Robust_Equivalence_Object derived from Weak_Equivalence_Object.
 * Meant for creation of Weak Robust Equivalence Objects for variables.
 */
class Weak_Robust_Equivalence_Object : public Weak_Equivalence_Object 
{
public:
  /// Constructor
  Weak_Robust_Equivalence_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      regions        vector of partition objects
	 */
  Weak_Robust_Equivalence_Object (std::vector<Partition_Object*> regions);

  /// Destructor
  virtual ~Weak_Robust_Equivalence_Object (void);

  /**
   * Method for assigning the values of the regions
   * in invalid_regions_ array.
   */
  virtual void assign_invalid_values (void);

  /**
   * Method for getting the values of the invalid regions
   * from invalid_regions_ array.
   *
   * @return       int        number from invalid region.
   */
  virtual int get_invalid_number (void);

private:
  // Vector to store the invalid regions values of variable.
  std::vector<int> invalid_regions_;

  // Variable to index the invalid regions.
  int invalid_count_;

};

#endif //!_WEAK_ROBUST_EQUIVALENCE_OBJECT_H_