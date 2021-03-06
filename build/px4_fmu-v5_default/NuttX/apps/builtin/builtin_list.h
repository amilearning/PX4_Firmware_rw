{ "perf", SCHED_PRIORITY_DEFAULT, 1800, perf_main },
{ "sih", SCHED_PRIORITY_DEFAULT, 1200, sih_main },
{ "tone_alarm", SCHED_PRIORITY_DEFAULT, 1024, tone_alarm_main },
{ "mkblctrl", SCHED_PRIORITY_DEFAULT, 1024, mkblctrl_main },
{ "uorb_tests", SCHED_PRIORITY_MAX, 2048, uorb_tests_main },
{ "rgbled", SCHED_PRIORITY_DEFAULT, 1500, rgbled_main },
{ "px4io", SCHED_PRIORITY_DEFAULT, 1816, px4io_main },
{ "pca9685", SCHED_PRIORITY_DEFAULT, 1024, pca9685_main },
{ "bmp280", SCHED_PRIORITY_DEFAULT, 1200, bmp280_main },
{ "adis16448", SCHED_PRIORITY_DEFAULT, 1200, adis16448_main },
{ "ak09916", SCHED_PRIORITY_DEFAULT, 1200, ak09916_main },
{ "tune_control", SCHED_PRIORITY_DEFAULT, 2500, tune_control_main },
{ "ms5611", SCHED_PRIORITY_DEFAULT, 1500, ms5611_main },
{ "reflect", SCHED_PRIORITY_DEFAULT, 1024, reflect_main },
{ "camera_feedback", SCHED_PRIORITY_DEFAULT, 1024, camera_feedback_main },
{ "oreoled", SCHED_PRIORITY_DEFAULT, 1024, oreoled_main },
{ "mpu9250", SCHED_PRIORITY_DEFAULT, 1500, mpu9250_main },
{ "irlock", SCHED_PRIORITY_DEFAULT, 1024, irlock_main },
{ "motor_ramp", SCHED_PRIORITY_DEFAULT, 1200, motor_ramp_main },
{ "px4_mavlink_debug", SCHED_PRIORITY_DEFAULT, 2000, px4_mavlink_debug_main },
{ "bst", SCHED_PRIORITY_DEFAULT, 1200, bst_main },
{ "cm8jl65", SCHED_PRIORITY_DEFAULT, 1400, cm8jl65_main },
{ "cdev_test", SCHED_PRIORITY_DEFAULT, 1024, cdev_test_main },
{ "lis3mdl", SCHED_PRIORITY_DEFAULT, 1200, lis3mdl_main },
{ "rm3100", SCHED_PRIORITY_DEFAULT, 1200, rm3100_main },
{ "ina226", SCHED_PRIORITY_DEFAULT, 1024, ina226_main },
{ "param", SCHED_PRIORITY_DEFAULT, 2500, param_main },
{ "ex_fixedwing_control", SCHED_PRIORITY_DEFAULT, 1200, ex_fixedwing_control_main },
{ "test_ppm", SCHED_PRIORITY_DEFAULT, 1200, test_ppm_main },
{ "mixer", SCHED_PRIORITY_DEFAULT, 4096, mixer_main },
{ "uavcan", SCHED_PRIORITY_DEFAULT, 3200, uavcan_main },
{ "camera_capture", SCHED_PRIORITY_DEFAULT, 1024, camera_capture_main },
{ "hmc5883", SCHED_PRIORITY_DEFAULT, 1500, hmc5883_main },
{ "local_position_estimator", SCHED_PRIORITY_DEFAULT, 5700, local_position_estimator_main },
{ "mavlink_tests", SCHED_PRIORITY_DEFAULT, 5000, mavlink_tests_main },
{ "hott_telemetry", SCHED_PRIORITY_DEFAULT, 1024, hott_telemetry_main },
{ "dcache", SCHED_PRIORITY_DEFAULT, 1024, dcache_main },
{ "ll40ls", SCHED_PRIORITY_DEFAULT, 1024, ll40ls_main },
{ "ms5525_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ms5525_airspeed_main },
{ "ist8310", SCHED_PRIORITY_DEFAULT, 1500, ist8310_main },
{ "config", SCHED_PRIORITY_DEFAULT, 4096, config_main },
{ "rc_input", SCHED_PRIORITY_DEFAULT, 1200, rc_input_main },
{ "commander", SCHED_PRIORITY_DEFAULT, 4096, commander_main },
{ "teraranger", SCHED_PRIORITY_DEFAULT, 1200, teraranger_main },
{ "adc", SCHED_PRIORITY_DEFAULT, 1024, adc_main },
{ "bmm150", SCHED_PRIORITY_DEFAULT, 1200, bmm150_main },
{ "iridiumsbd", SCHED_PRIORITY_DEFAULT, 1024, iridiumsbd_main },
{ "hardfault_log", SCHED_PRIORITY_DEFAULT, 2100, hardfault_log_main },
{ "frsky_telemetry", SCHED_PRIORITY_DEFAULT, 1500, frsky_telemetry_main },
{ "pca8574", SCHED_PRIORITY_DEFAULT, 1024, pca8574_main },
{ "ets_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ets_airspeed_main },
{ "attitude_estimator_q", SCHED_PRIORITY_DEFAULT, 1200, attitude_estimator_q_main },
{ "hrt_test", SCHED_PRIORITY_DEFAULT, 1024, hrt_test_main },
{ "pwm_out_sim", SCHED_PRIORITY_DEFAULT, 1024, pwm_out_sim_main },
{ "sf0x_tests", SCHED_PRIORITY_DEFAULT, 1024, sf0x_tests_main },
{ "bmi055", SCHED_PRIORITY_DEFAULT, 1500, bmi055_main },
{ "tap_esc", SCHED_PRIORITY_DEFAULT, 1024, tap_esc_main },
{ "vmount", SCHED_PRIORITY_DEFAULT, 1024, vmount_main },
{ "sf1xx", SCHED_PRIORITY_DEFAULT, 1024, sf1xx_main },
{ "fw_att_control", SCHED_PRIORITY_DEFAULT, 1024, fw_att_control_main },
{ "pga460", SCHED_PRIORITY_DEFAULT, 1024, pga460_main },
{ "tests", SCHED_PRIORITY_DEFAULT, 10000, tests_main },
{ "sdp3x_airspeed", SCHED_PRIORITY_DEFAULT, 1200, sdp3x_airspeed_main },
{ "px4flow", SCHED_PRIORITY_DEFAULT, 1200, px4flow_main },
{ "dumpfile", SCHED_PRIORITY_DEFAULT, 4096, dumpfile_main },
{ "sd_bench", SCHED_PRIORITY_DEFAULT, 2500, sd_bench_main },
{ "px4_simple_app", SCHED_PRIORITY_DEFAULT, 2000, px4_simple_app_main },
{ "listener", SCHED_PRIORITY_DEFAULT, 1800, listener_main },
{ "rgbled_pwm", SCHED_PRIORITY_DEFAULT, 1500, rgbled_pwm_main },
{ "segway", SCHED_PRIORITY_DEFAULT, 1400, segway_main },
{ "mpu6000", SCHED_PRIORITY_DEFAULT, 1500, mpu6000_main },
{ "vl53lxx", SCHED_PRIORITY_DEFAULT, 1024, vl53lxx_main },
{ "reboot", SCHED_PRIORITY_DEFAULT, 800, reboot_main },
{ "wqueue_test", SCHED_PRIORITY_DEFAULT, 1024, wqueue_test_main },
{ "leddar_one", SCHED_PRIORITY_DEFAULT, 1200, leddar_one_main },
{ "ekf2", SCHED_PRIORITY_DEFAULT, 2500, ekf2_main },
{ "navigator", SCHED_PRIORITY_DEFAULT, 1300, navigator_main },
{ "usb_connected", SCHED_PRIORITY_DEFAULT, 1024, usb_connected_main },
{ "bl_update", SCHED_PRIORITY_DEFAULT, 4096, bl_update_main },
{ "ex_hwtest", SCHED_PRIORITY_DEFAULT, 2000, ex_hwtest_main },
{ "position_estimator_inav", SCHED_PRIORITY_DEFAULT, 1200, position_estimator_inav_main },
{ "batt_smbus", SCHED_PRIORITY_DEFAULT, 1100, batt_smbus_main },
{ "lps22hb", SCHED_PRIORITY_DEFAULT, 1024, lps22hb_main },
{ "sf0x", SCHED_PRIORITY_DEFAULT, 1024, sf0x_main },
{ "pwm_input", SCHED_PRIORITY_DEFAULT, 1024, pwm_input_main },
{ "gnd_att_control", SCHED_PRIORITY_DEFAULT, 1200, gnd_att_control_main },
{ "sensors", SCHED_PRIORITY_MAX-5, 1500, sensors_main },
{ "mtd", SCHED_PRIORITY_DEFAULT, 1500, mtd_main },
{ "land_detector", SCHED_PRIORITY_DEFAULT, 1200, land_detector_main },
{ "serdis", SCHED_PRIORITY_DEFAULT, 2048, serdis_main },
{ "camera_trigger", SCHED_PRIORITY_DEFAULT, 1200, camera_trigger_main },
{ "roboclaw", SCHED_PRIORITY_DEFAULT, 1024, roboclaw_main },
{ "esc_calib", SCHED_PRIORITY_DEFAULT, 4096, esc_calib_main },
{ "hello", SCHED_PRIORITY_DEFAULT, 1024, hello_main },
{ "ms4525_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ms4525_airspeed_main },
{ "gnd_pos_control", SCHED_PRIORITY_DEFAULT, 1024, gnd_pos_control_main },
{ "blinkm", SCHED_PRIORITY_DEFAULT, 1024, blinkm_main },
{ "led_control", SCHED_PRIORITY_DEFAULT, 2500, led_control_main },
{ "hott_sensors", SCHED_PRIORITY_DEFAULT, 1024, hott_sensors_main },
{ "motor_test", SCHED_PRIORITY_DEFAULT, 4096, motor_test_main },
{ "pwm", SCHED_PRIORITY_DEFAULT, 2500, pwm_main },
{ "top", SCHED_PRIORITY_MAX, 1700, top_main },
{ "gps", SCHED_PRIORITY_DEFAULT, 1200, gps_main },
{ "uorb", SCHED_PRIORITY_DEFAULT, 2100, uorb_main },
{ "fmu", SCHED_PRIORITY_DEFAULT, 1200, fmu_main },
{ "landing_target_estimator", SCHED_PRIORITY_DEFAULT, 1200, landing_target_estimator_main },
{ "ulanding_radar", SCHED_PRIORITY_DEFAULT, 1024, ulanding_radar_main },
{ "qmc5883", SCHED_PRIORITY_DEFAULT, 1500, qmc5883_main },
{ "ver", SCHED_PRIORITY_DEFAULT, 1224, ver_main },
{ "controllib_test", SCHED_PRIORITY_DEFAULT, 1024, controllib_test_main },
{ "wind_estimator", SCHED_PRIORITY_DEFAULT, 1024, wind_estimator_main },
{ "mb12xx", SCHED_PRIORITY_DEFAULT, 1024, mb12xx_main },
{ "pmw3901", SCHED_PRIORITY_DEFAULT, 1400, pmw3901_main },
{ "commander_tests", SCHED_PRIORITY_DEFAULT, 1024, commander_tests_main },
{ "sercon", SCHED_PRIORITY_DEFAULT, 2048, sercon_main },
{ "logger", SCHED_PRIORITY_MAX-30, 2200, logger_main },
{ "srf02", SCHED_PRIORITY_DEFAULT, 1024, srf02_main },
{ "mc_att_control", SCHED_PRIORITY_DEFAULT, 1200, mc_att_control_main },
{ "vtol_att_control", SCHED_PRIORITY_DEFAULT, 1300, vtol_att_control_main },
{ "adis16497", SCHED_PRIORITY_DEFAULT, 1200, adis16497_main },
{ "bottle_drop", SCHED_PRIORITY_DEFAULT, 1200, bottle_drop_main },
{ "mavlink", SCHED_PRIORITY_DEFAULT, 1600, mavlink_main },
{ "fw_pos_control_l1", SCHED_PRIORITY_DEFAULT, 1200, fw_pos_control_l1_main },
{ "rover_steering_control", SCHED_PRIORITY_DEFAULT, 1200, rover_steering_control_main },
{ "uuv_example_app", SCHED_PRIORITY_DEFAULT, 2000, uuv_example_app_main },
{ "shutdown", SCHED_PRIORITY_DEFAULT, 800, shutdown_main },
{ "nshterm", SCHED_PRIORITY_DEFAULT-30, 1500, nshterm_main },
{ "dataman", SCHED_PRIORITY_DEFAULT, 1200, dataman_main },
{ "lsm303agr", SCHED_PRIORITY_DEFAULT, 1024, lsm303agr_main },
{ "rgbled_ncp5623c", SCHED_PRIORITY_DEFAULT, 1500, rgbled_ncp5623c_main },
{ "send_event", SCHED_PRIORITY_DEFAULT, 2200, send_event_main },
{ "tfmini", SCHED_PRIORITY_DEFAULT, 1024, tfmini_main },
{ "load_mon", SCHED_PRIORITY_DEFAULT, 1200, load_mon_main },
{ "mc_pos_control", SCHED_PRIORITY_DEFAULT, 1200, mc_pos_control_main },
