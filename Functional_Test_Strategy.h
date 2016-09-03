//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _FUNCTIONAL_TEST_STRATEGY_H_
#define _FUNCTIONAL_TEST_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>

#include "Functional_Test_Factory.h"

/**
 * @class Functional_Test_Strategy
 *
 * Basic implementation of Functional_Test_Strategy.
 * Meant for acting as base class for Functional Test Strategies.
 */
class Functional_Test_Strategy 
{
public:
  /// Constructor
  Functional_Test_Strategy (void);

  /// Destructor
  virtual ~Functional_Test_Strategy (void);

  /**
   * Pure virtual method for parsing the input variable range.
   *
	 * @param[in]    std::string        String containing input variable range.
   */
  virtual void parse_input (std::string & s) = 0;

  /**
   * Method for getting the first value of input variable range.
   *
	 * @param[in]     std::string        String containing first part of input variable range.
   */
  virtual int first_part (std::string & first);

  /**
   * Method for getting the second value of input variable range.
   *
	 * @param[in]     std::string        String containing second part of input variable range.
   */
  virtual int second_part (std::string & second);

  /**
   * Method for removing spaces from passed input string
   *
	 * @param[in]     std::string        String containing input variable range.
   */
  virtual void remove_spaces (std::string & s);

  /**
   * Pure virtual method for generating the test cases.
   */
  virtual void generate_test_cases (void) = 0;

protected:
  // Functional Test Factory for creating Functional Test Factory objects.
  Functional_Test_Factory f;

};

#endif // !_FUNCTIONAL_TEST_STRATEGY_H_