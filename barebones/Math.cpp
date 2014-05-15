#include <stdlib.h>

inline int rand_int(void)
{
    return (rand());
}

inline float rand_float(void) 
{
    return((float)rand() / (float)RAND_MAX);
}

inline void set_rand_seed(const int seed)
{
    srand(seed);
}
