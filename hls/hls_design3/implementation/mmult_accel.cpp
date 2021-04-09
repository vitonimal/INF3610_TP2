#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"


void standalone_mmult (float A[X][X], float B[X][X], float C[X][X])
{

	mmult_hw <float, X>(A, B, C);

}



void HLS_accel (AXI_VAL INPUT_STREAM[2*MCR_SIZE], AXI_VAL OUTPUT_STREAM[MCR_SIZE])
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=OUTPUT_STREAM
#pragma HLS INTERFACE axis      port=INPUT_STREAM

	wrapped_mmult_hw <float, X, X*X, 4, 5, 5>(INPUT_STREAM, OUTPUT_STREAM);

	return;
}

