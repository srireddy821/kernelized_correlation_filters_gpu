
#pragma once
#ifndef _BILINEAR_INTERPOLATION_KERNEL_H_
#define _BILINEAR_INTERPOLATION_KERNEL_H_

#include <kernelized_correlation_filters_gpu/cuda_common.h>

float *bilinearInterpolationGPU(const float *, const int, const int,
                                const int, const int, const int, const int);
bool bilinearInterpolationGPU(float **, const float *, const int, const int,
                                const int, const int, const int, const int);

#endif /* _BILINEAR_INTERPOLATION_KERNEL_H_ */
