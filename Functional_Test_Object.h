//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _FUNCTIONAL_TEST_OBJECT_H_
#define _FUNCTIONAL_TEST_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>

/**
 * @class Functional_Test_Object
 *
 * Basic implementation of Functional_Test_Object.
 * Meant for creation of Functional Test Objects for variable range.
 */
class Functional_Test_Object 
{
public:
  /// Constructor
  Functional_Test_Object (void);

  /// Destructor
  virtual ~Functional_Test_Object (void);

  /**
	* It is a random number generator to generate a random number 
	* between the specified two numbers.
	* 
	* @param[in]       int                 First Number.
  * @param[in]       int                 Second Number.
	* @return          Random number between first and second number.
	*/
  virtual int random_generator (int num_1, int num_2);

  /**
	* It is a pure virtual method for assigning test values for the  
	* respective derived classes.
	*/
  virtual void assign_values (void) = 0;

private:

};

#endif // !_FUNCTIONAL_TEST_OBJECT_H_
