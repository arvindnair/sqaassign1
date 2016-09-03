//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _BVA_NORMAL_OBJECT_H_
#define _BVA_NORMAL_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "BVA_Object.h"
#include "Partition_Object.h"

/**
 * @class BVA_Normal_Object
 *
 * BVA_Normal_Object derived from BVA_Object.
 * Meant for creation of Boundary Value Analysis Object for variable range.
 */
class BVA_Normal_Object : public BVA_Object
{
public:
  /// Constructor
  BVA_Normal_Object (void);

  /**
	 * Initializing constructor.
	 *
	 * @param[in]      p        Partition Object
	 */
  BVA_Normal_Object (Partition_Object * p);

  /// Destructor
  virtual ~BVA_Normal_Object (void);

  /**
   * Method for getting the nominal value.
   *
   * @return       int        nom_
   */
  virtual int get_nom_value (void);

  /**
   * Method for getting the bva values (min, min+, max- and max).
   *
   * @return       int        nom_
   */
  virtual int get_bva_values (void);

private:
  // Variable to index BVA Objects in values_ array. 
  int count_;

};

#endif //!_BVA_OBJECT_H_