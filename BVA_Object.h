//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _BVA_OBJECT_H_
#define _BVA_OBJECT_H_

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
 * @class BVA_Object
 *
 * BVA_Object derived from Functional_Test_Object.
 * Meant to act as base class for types of Boundary Value Analysis Objects for variable range.
 */
class BVA_Object : public Functional_Test_Object
{
public:
  /// Constructor
  BVA_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      p        Partition Object
	 */
  BVA_Object (Partition_Object * p);
  
  /// Destructor
  virtual ~BVA_Object (void);

  /**
   * Method for assigning the bva values (min, min+, max- and max)
   * in values_ array.
   */
  virtual void assign_values (void);

  /**
   * Method for assigning the nominal value.
   *
	 * @param[in]    int        nom_condition
   * @return       int        nom_
   */
  virtual int assign_nom_value (int nom_condition);

protected:

  // Stores the range of the values for the variable.
  Partition_Object * bva_p_;

  // Stores the bva values of min, min+, max- and max.
  std::vector<int> values_;

  // Stores the nominal value.
  int nom_;

};

#endif // !_BVA_OBJECT_H_
