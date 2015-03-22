#ifndef __OPENCV_H__
#define __OPENCV_H__

#include "math.h"

void estimate_initial_pose(struct blob *blobs, int num_blobs,
			   vec3 *leds, int num_leds,
			   double camera_matrix[9], double dist_coeffs[5],
			   double rot[9], double trans[3],
			   bool use_extrinsic_guess);

#endif /* __OPENCV_H__ */
