# Install script for directory: /home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/lib/DriverFramework/framework/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/barometer/ms5611/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/differential_pressure/ms4525/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/distance_sensor/ll40ls/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/gps/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/imu/l3gd20/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/imu/lsm303d/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/imu/mpu6000/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/imu/mpu9250/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/lights/rgbled/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/magnetometer/hmc5883/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/optical_flow/px4flow/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/pwm_out_sim/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/px4fmu/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/px4io/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/stm32/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/stm32/adc/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/stm32/tone_alarm/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/drivers/tone_alarm/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/camera_feedback/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/commander/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/dataman/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/ekf2/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/events/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/fw_att_control/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/fw_pos_control_l1/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/land_detector/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/load_mon/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/logger/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/mavlink/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/mc_att_control/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/mc_pos_control/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/navigator/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/sensors/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/vmount/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/modules/vtol_att_control/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/bl_update/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/hardfault_log/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/mixer/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/mtd/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/param/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/perf/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/pwm/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/reboot/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/top/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/tune_control/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/src/systemcmds/ver/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/boards/px4/fmu-v2/src/cmake_install.cmake")
  include("/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/platforms/nuttx/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/build/px4_fmu-v2_default/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
