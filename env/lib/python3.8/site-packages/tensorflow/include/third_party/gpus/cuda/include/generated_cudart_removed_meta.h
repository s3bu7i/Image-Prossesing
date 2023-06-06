// This file is generated.  Any changes you make will be lost during the next clean build.

// CUDA public interface, for type definitions and api function prototypes
#include "cudart_removed.h"

// *************************************************************************
//      Definitions of structs to hold parameters for each function
// *************************************************************************

// Currently used parameter trace structures
typedef struct cudaStreamDestroy_v3020_params_st {
    cudaStream_t stream;
} cudaStreamDestroy_v3020_params;

typedef struct cudaOccupancyMaxActiveBlocksPerMultiprocessor_v6000_params_st {
    int *numBlocks;
    const void *func;
    size_t numDynamicSmemBytes;
} cudaOccupancyMaxActiveBlocksPerMultiprocessor_v6000_params;

typedef struct cudaConfigureCall_v3020_params_st {
    dim3 gridDim;
    dim3 blockDim;
    size_t sharedMem  __dv;
    cudaStream_t stream  __dv;
} cudaConfigureCall_v3020_params;

typedef struct cudaSetupArgument_v3020_params_st {
    const void *arg;
    size_t size;
    size_t offset;
} cudaSetupArgument_v3020_params;

typedef struct cudaLaunch_v3020_params_st {
    const void *func;
} cudaLaunch_v3020_params;

typedef struct cudaLaunch_ptsz_v7000_params_st {
    const void *func;
} cudaLaunch_ptsz_v7000_params;

typedef struct cudaStreamSetFlags_v10200_params_st {
    cudaStream_t hStream;
    unsigned int flags;
} cudaStreamSetFlags_v10200_params;

typedef struct cudaStreamSetFlags_ptsz_v10200_params_st {
    cudaStream_t hStream;
    unsigned int flags;
} cudaStreamSetFlags_ptsz_v10200_params;

// Parameter trace structures for removed functions


// End of parameter trace structures
