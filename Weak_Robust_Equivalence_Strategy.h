//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WEAK_ROBUST_EQUIVALENCE_STRATEGY_H_
#define _WEAK_ROBUST_EQUIVALENCE_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Weak_Equivalence_Strategy.h"
#include "Weak_Robust_Equivalence_Object.h"

#define WEAK_ROBUST_EQUIVALENCE_INVALID_VALUE 2          // Only 2 invalids for each variable of weak equivalence.

/**
 * @class Weak_Robust_Equivalence_Strategy
 *
 * Basic implementation of Weak_Robust_Equivalence_Strategy derived from Weak_Equivalence_Strategy.
 * Meant for evaluating Weak Robust Equivalence Test Cases for given inputs and their regions.
 */
class Weak_Robust_Equivalence_Strategy : public Weak_Equivalence_Strategy
{
public:
  /// Constructor
  Weak_Robust_Equivalence_Strategy (void);

  /// Destructor
  virtual ~Weak_Robust_Equivalence_Strategy (void);

  /**
   * Method for parsing the input variable range for Weak
   * Robust Equivalence.
   *
	 * @param[in]    vector        p i.e., vector of Partition objects for weak equivalence variable.
   */
  virtual void parse_weak_eq_input (std::vector<Partition_Object*> p);

  /**
   * Method for generating test cases for Weak Robust
   * Equivalence.
   */
  virtual void generate_test_cases (void);

  /**
   * Method for generating invalid test cases for Weak Robust
   * Equivalence.
   */
  virtual void generate_invalid_test_cases (void);

  /**
   * Method for printing values for Weak Robust
   * Equivalence.
   *
	 * @param[in]    vector        n i.e., Contains the invalid test cases of weak robust equivalence.
   */
  virtual void print_test_case (std::vector<int> & n);

private:
  // Vector for storing the weak robust equivalence objects.
  std::vector<Weak_Robust_Equivalence_Object *> wre_objects_;

};

#endif //!_WEAK_ROBUST_EQUIVALENCE_STRATEGY_H_