
#include <assert.h>
#include <ap_axi_sdata.h>

int const DIM = X;       // X à déterminer
int const SIZE = DIM*DIM;

// function prototypes
void mmult_hw (float a[DIM][DIM], float b[DIM][DIM], float c[DIM][DIM]);


