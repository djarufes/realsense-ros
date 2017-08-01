// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2017 Intel Corporation. All Rights Reserved

#include <iostream>
#include <string>
#include <utility>
#include <map>

#pragma once
#ifndef REALSENSE_CAMERA_CONSTANTS_H
#define REALSENSE_CAMERA_CONSTANTS_H

namespace realsense_ros_camera
{
// Default Constants.
const std::string DEFAULT_SERIAL_NO = "";

const int DEPTH_WIDTH     = 1280;
const int DEPTH_HEIGHT    = 720;
const int INFRA1_WIDTH    = 1280;
const int INFRA1_HEIGHT   = 720;
const int INFRA2_WIDTH    = 1280;
const int INFRA2_HEIGHT   = 720;
const int COLOR_WIDTH     = 640;
const int COLOR_HEIGHT    = 480;
const int FISHEYE_WIDTH   = 640;
const int FISHEYE_HEIGHT  = 480;
const int DEPTH_FPS       = 30;
const int INFRA1_FPS      = 30;
const int INFRA2_FPS      = 30;
const int COLOR_FPS       = 30;
const int FISHEYE_FPS     = 30;
const int GYRO_FPS        = 1000;
const int ACCEL_FPS       = 1000;
const bool ENABLE_DEPTH   = false;
const bool ENABLE_INFRA1  = false;
const bool ENABLE_INFRA2  = false;
const bool ENABLE_COLOR   = false;
const bool ENABLE_FISHEYE = false;
const bool ENABLE_IMU     = false;

const double ROTATION_IDENTITY[] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
const float MILLIMETER_METERS  = 0.001;
const float MAX_Z = 3.5f; // meters

const std::string DEFAULT_BASE_FRAME_ID            = "camera_link";
const std::string DEFAULT_DEPTH_FRAME_ID           = "camera_depth_frame";
const std::string DEFAULT_INFRA1_FRAME_ID          = "camera_infra1_frame";
const std::string DEFAULT_INFRA2_FRAME_ID          = "camera_infra2_frame";
const std::string DEFAULT_COLOR_FRAME_ID           = "camera_color_frame";
const std::string DEFAULT_FISHEYE_FRAME_ID         = "camera_fisheye_frame";
const std::string DEFAULT_IMU_FRAME_ID             = "camera_imu_frame";
const std::string DEFAULT_DEPTH_OPTICAL_FRAME_ID   = "camera_depth_optical_frame";
const std::string DEFAULT_INFRA1_OPTICAL_FRAME_ID   = "camera_infra1_optical_frame";
const std::string DEFAULT_INFRA2_OPTICAL_FRAME_ID   = "camera_infra2_optical_frame";
const std::string DEFAULT_COLOR_OPTICAL_FRAME_ID   = "camera_color_optical_frame";
const std::string DEFAULT_FISHEYE_OPTICAL_FRAME_ID = "camera_fisheye_optical_frame";
const std::string DEFAULT_ACCEL_OPTICAL_FRAME_ID   = "camera_accel_optical_frame";
const std::string DEFAULT_GYRO_OPTICAL_FRAME_ID    = "camera_gyro_optical_frame";
const std::string DEFAULT_IMU_OPTICAL_FRAME_ID     = "camera_imu_optical_frame";
}  // namespace realsense_camera
#endif  // REALSENSE_CAMERA_CONSTANTS_H
