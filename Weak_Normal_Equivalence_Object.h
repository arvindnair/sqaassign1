//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_NORMAL_EQUIVALENCE_OBJECT_H_
#define _WEAK_NORMAL_EQUIVALENCE_OBJECT_H_

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
 * @class Weak_Normal_Equivalence_Object
 *
 * Weak_Normal_Equivalence_Object derived from Weak_Equivalence_Object.
 * Meant for creation of Weak Normal Equivalence Objects for variables.
 */
class Weak_Normal_Equivalence_Object : public Weak_Equivalence_Object
{
public:
  /// Constructor
  Weak_Normal_Equivalence_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      regions        vector of partition objects
	 */
  Weak_Normal_Equivalence_Object(std::vector<Partition_Object*> regions);

  /// Destructor
  virtual ~Weak_Normal_Equivalence_Object (void);

private:

};

#endif //!_WEAK_NORMAL_EQUIVALENCE_OBJECT_H_