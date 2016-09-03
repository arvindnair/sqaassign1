//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _WORST_ROBUST_BVA_STRATEGY_H_
#define _WORST_ROBUST_BVA_STRATEGY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "BVA_Strategy.h"
#include "Worst_Robust_BVA_Object.h"

#define ROBUST_WORST_BVA_VALUE 7          // the number of values for Robust Worst BVA

/**
 * @class BVA_Normal_Strategy
 *
 * Basic implementation of BVA_Normal_Strategy derived from BVA_Strategy.
 * Meant for evaluating Worst Robust Boundary Value Analysis Test Cases for given inputs.
 */
class Worst_Robust_BVA_Strategy : public BVA_Strategy
{
public:
  /// Constructor
  Worst_Robust_BVA_Strategy (void);

  /// Destructor
  virtual ~Worst_Robust_BVA_Strategy (void);

  /**
   * Method for parsing the input variable range for Worst Robust
   * Boundary Value Analysis.
   *
	 * @param[in]    Partition_Object *        p i.e., Partition object of BVA variable.
   */
  virtual void parse_bva_input (Partition_Object * p);

  /**
   * Method for generating test cases for Worst Robust
   * Boundary Value Analysis.
   */
  virtual void generate_test_cases (void);

  /**
   * Method for printing values for Worst Robust
   * Boundary Value Analysis.
   *
	 * @param[in]    vector        n i.e., Contains the index of test cases of Worst Robust BVA.
   */
  virtual void print_test_case (std::vector<int> & v);


private:
  // Vector to store the Worst Robust BVA objects.
  std::vector<Worst_Robust_BVA_Object *> wr_bva_objects_;

};

#endif //!_WORST_ROBUST_BVA_STRATEGY_H_