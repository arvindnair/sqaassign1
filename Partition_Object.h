//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _PARTITION_OBJECT_H_
#define _PARTITION_OBJECT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>

/**
 * @class Partition_Object
 *
 * Meant to create and store the variable ranges or regions for calculation and retrieval.
 */
class Partition_Object 
{
public:
  /// Constructor
  Partition_Object (void);

  /**
   * Initializing constructor.
   *
   * @param[in]      p        Partition Object
   */
  Partition_Object (int num_1, int num_2);

  /// Destructor
  virtual ~Partition_Object (void);

  /**
   * Method for retrieving the minimum value of the region or range.
   *
   * @return       int        min_
   */
  virtual int get_min (void);

  /**
   * Method for retrieving the maximum value of the region or range.
   *
   * @return       int        max_
   */
  virtual int get_max (void);

private:
  // stores the minimum value of the region or range.
  int min_;

  // stores the maximum value of the region or range.
  int max_;

};

#endif // !_PARTITION_OBJECT_H_