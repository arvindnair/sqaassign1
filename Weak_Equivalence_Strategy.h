//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_EQUIVALENCE_STRATEGY_H_
#define _WEAK_EQUIVALENCE_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Functional_Test_Strategy.h"
#include "Partition_Object.h"

/**
 * @class Weak_Equivalence_Strategy
 *
 * Basic implementation of Weak_Equivalence_Strategy derived from Functional_Test_Strategy.
 * Meant for acting as base class for Weak Equivalence Test Strategies.
 */
class Weak_Equivalence_Strategy : public Functional_Test_Strategy
{
public:
  /// Constructor
  Weak_Equivalence_Strategy (void);

  /// Destructor
  virtual ~Weak_Equivalence_Strategy (void);

  /**
   * Method for parsing the input variable range for BVA inputs.
   *
	 * @param[in]    std::string        String containing BVA input variable range.
   */
  virtual void parse_input (std::string & s);

  /**
   * Pure virtual method for parsing the input variable range for particular
   * type of Weak Equivalence.
   *
	 * @param[in]    vector        p i.e., vector of Partition objects for weak equivalence variable.
   */
  virtual void parse_weak_eq_input (std::vector<Partition_Object*> p) = 0;

protected:
  // Variable to store the maximum regions of test input variable
  size_t max_region_;

};

#endif // !_WEAK_EQUIVALENCE_STRATEGY_H_
