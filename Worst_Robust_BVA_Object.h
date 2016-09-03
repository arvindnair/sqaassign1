//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WORST_ROBUST_BVA_OBJECT_H_
#define _WORST_ROBUST_BVA_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "BVA_Object.h"
#include "Partition_Object.h"

/**
 * @class Worst_Robust_BVA_Object
 *
 * Worst_Robust_BVA_Object derived from BVA_Object.
 * Meant for creation of Worst Robust Boundary Value Analysis Object 
 * for variable range.
 */
class Worst_Robust_BVA_Object : public BVA_Object
{
public:
  /// Constructor
  Worst_Robust_BVA_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      p        Partition Object
	 */
  Worst_Robust_BVA_Object (Partition_Object * p);

  /// Destructor
  virtual ~Worst_Robust_BVA_Object (void);

  /**
   * Method for assigning the remaining bva values (min-, nom and max+)
   * in values_ array.
   */
  virtual void assign_rem_values (void);

  /**
   * Method for getting the bva values (min-, min, min+, nom, max-, max and max+).
   *
   * @return       int        BVA values
   */
  virtual int get_value (int i);

private:

};

#endif //!_WORST_ROBUST_BVA_OBJECT_H_