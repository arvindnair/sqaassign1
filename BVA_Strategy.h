//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _BVA_STRATEGY_H_
#define _BVA_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Partition_Object.h"
#include "Functional_Test_Strategy.h"

/**
 * @class BVA_Strategy
 *
 * Basic implementation of BVA_Strategy derived from Functional_Test_Strategy.
 * Meant for acting as base class for Boundary Value Analysis Test Strategies.
 */
class BVA_Strategy : public Functional_Test_Strategy
{
public:
  /// Constructor
  BVA_Strategy (void);

  /// Destructor
  virtual ~BVA_Strategy (void);

  /**
   * Method for parsing the input variable range for BVA inputs.
   *
	 * @param[in]    std::string        String containing BVA input variable range.
   */
  virtual void parse_input (std::string & s);

  /**
   * Pure virtual method for parsing the input variable range for particular
   * type of BVA.
   *
	 * @param[in]    Partition_Object *        p i.e., Partition object of BVA variable.
   */
  virtual void parse_bva_input (Partition_Object * p) = 0;

private:

};

#endif // !_BVA_STRATEGY_H_
