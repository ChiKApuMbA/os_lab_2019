#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = INT_MIN;
  min_max.max = INT_MAX;
  if (begin > end || begin >= sizeof(array) / sizeof(int)) {
    min_max.min = INT_MIN;
    min_max.max = INT_MAX;
    return min_max;
  }

  for (unsigned int i = begin; i < end; i++) {
    if (array[i] > min_max.min || i == begin) {
      min_max.min = array[i];
    }
    else if(array[i] < min_max.max || i == begin)
    {
      min_max.max = array[i];
    }
  }
  return min_max;
}
