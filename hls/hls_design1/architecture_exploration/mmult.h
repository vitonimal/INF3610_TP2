
#include <assert.h>
#include <ap_axi_sdata.h>


#define MCR_SIZE 1024

int const DIM = 32;
int const SIZE = DIM*DIM;

// function prototypes
void mmult_hw (float a[DIM][DIM], float b[DIM][DIM], float c[DIM][DIM]);


