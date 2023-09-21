#include "find_min_max.h"

#include <limits.h>
#include <stdio.h>
struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = INT_MAX;
  min_max.max = INT_MIN;
  if (begin > end) {
    min_max.min = INT_MIN;
    min_max.max = INT_MAX;
    return min_max;
  }
  //printf("For %d -> %d\n",begin,end);
  for (unsigned int i = begin; i < end; i++) {
    if (array[i] < min_max.min) {
      min_max.min = array[i];
      //printf("Cur_min:%d\n",min_max.min);
    }
    if(array[i] > min_max.max)
    {
      min_max.max = array[i];
      //printf("Cur_max:%d\n",min_max.max);
    }
  }
  //printf("For %d -> %d:\nCur_min:%d\nCur_max:%d\n", begin, end, min_max.min, min_max.max);
  //fflush(stdout);
  return min_max;
}
