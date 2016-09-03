//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _BVA_NORMAL_STRATEGY_H_
#define _BVA_NORMAL_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "BVA_Strategy.h"
#include "BVA_Normal_Object.h"

#define BVA_NORMAL_VECTOR_VALUE 4      // BVA Normal values vector has 4 values (min, min+, max- and max)

/**
 * @class BVA_Normal_Strategy
 *
 * Basic implementation of BVA_Normal_Strategy derived from BVA_Strategy.
 * Meant for evaluating Normal Boundary Value Analysis Test Cases for given inputs.
 */
class BVA_Normal_Strategy : public BVA_Strategy
{
public:
  /// Constructor
  BVA_Normal_Strategy (void);

  /// Destructor
  virtual ~BVA_Normal_Strategy (void);

  /**
   * Method for parsing the input variable range for Normal
   * Boundary Value Analysis.
   *
	 * @param[in]    Partition_Object *        p i.e., Partition object of BVA variable.
   */
  virtual void parse_bva_input (Partition_Object * p);

  /**
   * Method for generating test cases for Normal
   * Boundary Value Analysis.
   */
  virtual void generate_test_cases (void);

  /**
   * Method for printing values for Normal
   * Boundary Value Analysis.
   *
	 * @param[in]    vector        n i.e., Contains the test cases of normal BVA.
   */
  virtual void print_test_case (std::vector<int> & n);

private:
  // Vector to store the Normal BVA objects.
  std::vector<BVA_Normal_Object *> bva_objects_;
};

#endif //!_BVA_NORMAL_STRATEGY_H_