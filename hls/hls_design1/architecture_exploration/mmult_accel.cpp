#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED
#define MCR_SIZE 1024


void mmult_hw (float a[DIM][DIM], float b[DIM][DIM], float out[DIM][DIM])
{

	L1:for (int ia = 0; ia < DIM; ++ia)
		L2:for (int ib = 0; ib < DIM; ++ib)
		{
			float sum = 0;
			L3:for (int id = 0; id < DIM; ++id)
				sum += a[ia][id] * b[id][ib];
			out[ia][ib] = sum;
		};


		return;
}


