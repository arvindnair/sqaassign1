//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_NORMAL_EQUIVALENCE_STRATEGY_H_
#define _WEAK_NORMAL_EQUIVALENCE_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Weak_Equivalence_Strategy.h"
#include "Weak_Normal_Equivalence_Object.h"

/**
 * @class Weak_Normal_Equivalence_Strategy
 *
 * Basic implementation of Weak_Normal_Equivalence_Strategy derived from Weak_Equivalence_Strategy.
 * Meant for evaluating Weak Normal Equivalence Test Cases for given inputs and their regions.
 */
class Weak_Normal_Equivalence_Strategy : public Weak_Equivalence_Strategy
{
public:
  /// Constructor
  Weak_Normal_Equivalence_Strategy (void);

  /// Destructor
  virtual ~Weak_Normal_Equivalence_Strategy (void);

  /**
   * Method for parsing the input variable range for Weak
   * Normal Equivalence.
   *
	 * @param[in]    vector        p i.e., vector of Partition objects for weak equivalence variable.
   */
  virtual void parse_weak_eq_input (std::vector<Partition_Object*> p);

  /**
   * Method for generating test cases for Weak Normal
   * Equivalence.
   */
  virtual void generate_test_cases (void);

private:
  // Vector to store the weak normal equivalence objects.
  std::vector<Weak_Normal_Equivalence_Object *> wne_objects_;

};

#endif //!_WEAK_NORMAL_EQUIVALENCE_STRATEGY_H_