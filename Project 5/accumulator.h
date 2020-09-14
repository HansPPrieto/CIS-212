#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__

typedef struct accumulator {
	char *name;
	long long calls;
	long long musecs;
} Accumulator;

extern long nAccumulators;
extern Accumulator *accumulators[1000];
#endif
