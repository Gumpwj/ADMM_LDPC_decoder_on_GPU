/*
 * GPU_functions.h
 *
 *  Created on: 8 avr. 2013
 *      Author: legal
 */

#ifndef GPU_FUNCTIONS_64b_H_
#define GPU_FUNCTIONS_64b_H_

// Includes
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>

// includes, project
// includes, CUDA
#include <cuda.h>
#include <cuda_runtime.h>
#include <builtin_types.h>


using namespace std;

extern __global__ void ADMM_InitArrays_64b(double *LZr,  int N);

extern __global__ void ADMM_VN_kernel_deg3(
	const double *_LogLikelihoodRatio,
	double *OutputFromDecoder,
	double *LZr,
	const unsigned int *t_row,
	int N);

extern  __global__ void ADMM_CN_kernel_deg6(
	const double *OutputFromDecoder,
	double *LZr,
	const unsigned int *t_col1,
	int *cn_synrome,
	int N);

#endif /* GPU_FUNCTIONS_H_ */
