/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file vehicle_odometry.msg */


#include <inttypes.h>
#include <px4_log.h>
#include <px4_defines.h>
#include <uORB/topics/vehicle_odometry.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_vehicle_odometry_fields[] = "uint64_t timestamp;float x;float y;float z;float[4] q;float[21] pose_covariance;float vx;float vy;float vz;float rollspeed;float pitchspeed;float yawspeed;float[21] velocity_covariance;uint8_t local_frame;uint8_t[3] _padding0;";

ORB_DEFINE(vehicle_odometry, struct vehicle_odometry_s, 229, __orb_vehicle_odometry_fields);
ORB_DEFINE(vehicle_mocap_odometry, struct vehicle_odometry_s, 229, __orb_vehicle_odometry_fields);
ORB_DEFINE(vehicle_visual_odometry, struct vehicle_odometry_s, 229, __orb_vehicle_odometry_fields);


void print_message(const vehicle_odometry_s& message)
{
	PX4_INFO_RAW(" vehicle_odometry_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tx: %.4f\n", (double)message.x);
	PX4_INFO_RAW("\ty: %.4f\n", (double)message.y);
	PX4_INFO_RAW("\tz: %.4f\n", (double)message.z);
	PX4_INFO_RAW("\tq: [%.4f, %.4f, %.4f, %.4f]\n", (double)message.q[0], (double)message.q[1], (double)message.q[2], (double)message.q[3]);
	PX4_INFO_RAW("\tpose_covariance: [%.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f]\n", (double)message.pose_covariance[0], (double)message.pose_covariance[1], (double)message.pose_covariance[2], (double)message.pose_covariance[3], (double)message.pose_covariance[4], (double)message.pose_covariance[5], (double)message.pose_covariance[6], (double)message.pose_covariance[7], (double)message.pose_covariance[8], (double)message.pose_covariance[9], (double)message.pose_covariance[10], (double)message.pose_covariance[11], (double)message.pose_covariance[12], (double)message.pose_covariance[13], (double)message.pose_covariance[14], (double)message.pose_covariance[15], (double)message.pose_covariance[16], (double)message.pose_covariance[17], (double)message.pose_covariance[18], (double)message.pose_covariance[19], (double)message.pose_covariance[20]);
	PX4_INFO_RAW("\tvx: %.4f\n", (double)message.vx);
	PX4_INFO_RAW("\tvy: %.4f\n", (double)message.vy);
	PX4_INFO_RAW("\tvz: %.4f\n", (double)message.vz);
	PX4_INFO_RAW("\trollspeed: %.4f\n", (double)message.rollspeed);
	PX4_INFO_RAW("\tpitchspeed: %.4f\n", (double)message.pitchspeed);
	PX4_INFO_RAW("\tyawspeed: %.4f\n", (double)message.yawspeed);
	PX4_INFO_RAW("\tvelocity_covariance: [%.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f]\n", (double)message.velocity_covariance[0], (double)message.velocity_covariance[1], (double)message.velocity_covariance[2], (double)message.velocity_covariance[3], (double)message.velocity_covariance[4], (double)message.velocity_covariance[5], (double)message.velocity_covariance[6], (double)message.velocity_covariance[7], (double)message.velocity_covariance[8], (double)message.velocity_covariance[9], (double)message.velocity_covariance[10], (double)message.velocity_covariance[11], (double)message.velocity_covariance[12], (double)message.velocity_covariance[13], (double)message.velocity_covariance[14], (double)message.velocity_covariance[15], (double)message.velocity_covariance[16], (double)message.velocity_covariance[17], (double)message.velocity_covariance[18], (double)message.velocity_covariance[19], (double)message.velocity_covariance[20]);
	PX4_INFO_RAW("\tlocal_frame: %u\n", message.local_frame);
	
}
