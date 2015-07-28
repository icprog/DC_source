/**************************************************************************
 This file is auto-generated by FactoryGenerator, do not modify it manually
**************************************************************************/

/**************************************************************************
 SYSTEM INCLUDES
**************************************************************************/

/**************************************************************************
 PROJECT INCLUDES
**************************************************************************/

/**************************************************************************
 LOCAL INCLUDES
**************************************************************************/
#include <GeniAppIfData.h>

/**************************************************************************
 GLOBAL VARIABLES (shared with GENIPRO bu_tab files and GeniAppIf)
**************************************************************************/

U8 gai_2_0_no_of_float_switches;  // 2,0 no_of_float_switches
U8 gai_2_1_float_switch_status;  // 2,1 Bit 0-4 eq. float switch 1-5 ; Bit 5 eq. over flow switch
U8 gai_2_2_float_switch_1_func;  // 2,2 float_switch_1_func
U8 gai_2_3_float_switch_2_func;  // 2,3 float_switch_2_func
U8 gai_2_4_float_switch_3_func;  // 2,4 float_switch_3_func
U8 gai_2_5_float_switch_4_func;  // 2,5 float_switch_4_func
U8 gai_2_6_float_switch_5_func;  // 2,6 float_switch_5_func
U8 gai_2_7_pit_sensors;  // 2,7 pit_sensors
U8 gai_2_8_day_cnt_zero_time;  // 2,8 day_cnt_zero_time
U8 gai_2_9_scada_pin_code_hi;  // 2,9 scada_pin_code
U8 gai_2_10_scada_pin_code_lo;  // 2,10 scada_pin_code
U8 gai_2_11_scada_pin_code_enabled;  // 2,11 scada_pin_code_enabled
U8 gai_2_12_first_group_2_pump;  // 2,12 
U8 gai_2_25_signal_level_act;  // 2,25 
U8 gai_2_26_signal_level_avg;  // 2,26 
U8 gai_2_71_pit_opr_mode;  // 2,71 pit_opr_mode
U8 gai_2_72_pit_main_status;  // 2,72 pit_main_status, bits
U8 gai_2_73_led_status;  // 2,73 bit10=0: green OFF, bit10=1: green ON; bit10=2: green flashing; bit32=0: red OFF, bit32=1: red ON; bit32=2: red flashing
U8 gai_2_74_alarm_code;  // 2,74 alarm_code
U8 gai_2_75_warning_code;  // 2,75 warning_code
U8 gai_2_76_battery_voltage;  // 2,76 
U8 gai_2_77_io_logic_outputs;  // 2,77 
U8 gai_2_140_rtc_year;  // 2,140 rtc_year (since 1900)
U8 gai_2_141_rtc_month_of_year;  // 2,141 rtc_month_of_year
U8 gai_2_142_rtc_day_of_month;  // 2,142 rtc_day_of_month
U8 gai_2_143_rtc_hour;  // 2,143 rtc_hour
U8 gai_2_144_rtc_minute;  // 2,144 rtc_minute
U8 gai_2_145_rtc_second;  // 2,145 rtc_second
U8 gai_2_146_rtc_day_of_week;  // 2,146 rtc_day_of_week
U8 gai_2_148_unit_family;  // 2,148 unit_family
U8 gai_2_149_unit_type;  // 2,149 unit_family
U8 gai_2_150_unit_version;  // 2,150 unit_version
U8 gai_2_237_gsm_ctr;  // 2,237 gsm_ctr
U8 gai_2_238_gsm_setup;  // 2,238 gsm_setup
U8 gai_2_239_sms_out_seq_no;  // 2,239 sms_out_seq_no
U8 gai_2_240_vfd_min_velocity_feature_enabled;  // 2,240 added for test during development
U8 gai_4_0_production_code_1;  // 4,0 production_type_code
U8 gai_4_1_production_code_2;  // 4,1 production_type_code
U8 gai_4_2_production_code_3;  // 4,2 production_type_code
U8 gai_4_3_production_code_4;  // 4,3 production_type_code
U8 gai_4_4_production_code_5;  // 4,4 production_rev_date_code
U8 gai_4_5_production_code_6;  // 4,5 production_rev_date_code
U8 gai_4_6_production_code_7;  // 4,6 production_rev_date_code
U8 gai_4_7_production_code_8;  // 4,7 production_serial_no
U8 gai_4_8_production_code_9;  // 4,8 production_serial_no
U8 gai_4_9_production_code_10;  // 4,9 production_serial_no
U8 gai_4_21_mac_addr_0;  // 4,21 MAC address byte 0 - least significant
U8 gai_4_22_mac_addr_1;  // 4,22 MAC address byte 1
U8 gai_4_23_mac_addr_2;  // 4,23 MAC address byte 2
U8 gai_4_24_mac_addr_3;  // 4,24 MAC address byte 3
U8 gai_4_25_mac_addr_4;  // 4,25 MAC address byte 4
U8 gai_4_26_mac_addr_5;  // 4,26 MAC address byte 5 - most significant
U8 gai_4_46_slave_unit_address;  // 4,46 slave_unit_address
U8 gai_4_47_slave_group_address;  // 4,47 slave_group_address
U8 gai_4_79_baud_rate_default;  // 4,79 baud_rate_default
U8 gai_4_80_min_reply_delay_default;  // 4,80 min_reply_delay_default
U8 gai_4_81_geni_setup;  // 4,81 
U8 gai_4_85_demo_suitcase_mode_enabled;  // 4,85 demo_suitcase_mode_enabled
U8 gai_4_86_display_wizard_enable;  // 4,86 Wizard is active if true
U8 gai_4_87_pit_level_sim_enabled;  // 4,87 pit_level_sim_enabled
U8 gai_4_110_ana_out_1_conf_func;  // 4,110 Analog output 1 config
U8 gai_4_111_ana_out_2_conf_func;  // 4,111 Analog output 2 config
U8 gai_4_112_ana_out_3_conf_func;  // 4,112 Analog output 3 config
U8 gai_4_113_ana_out_4_conf_func;  // 4,113 Analog output 4 config
U8 gai_4_114_ana_out_5_conf_func;  // 4,114 Analog output 5 config
U8 gai_4_115_ana_out_6_conf_func;  // 4,115 Analog output 6 config
U8 gai_4_122_control_mode_pump1;  // 4,122 pump1 control mode
U8 gai_4_123_control_mode_pump2;  // 4,123 pump2 control mode
U8 gai_4_124_control_mode_pump3;  // 4,124 pump3 control mode
U8 gai_4_125_control_mode_pump4;  // 4,125 pump4 control mode
U8 gai_4_126_control_mode_pump5;  // 4,126 pump5 control mode
U8 gai_4_127_control_mode_pump6;  // 4,127 pump6 control mode
U8 gai_4_128_pid_feedback_pump1;  // 4,128 pump1 pid feedback signal
U8 gai_4_129_pid_feedback_pump2;  // 4,129 pump2 pid feedback signal
U8 gai_4_130_pid_feedback_pump3;  // 4,130 pump3 pidfeedback signal
U8 gai_4_131_pid_feedback_pump4;  // 4,131 pump4 pidfeedback signal
U8 gai_4_132_pid_feedback_pump5;  // 4,132 pump5 pidfeedback signal
U8 gai_4_133_pid_feedback_pump6;  // 4,133 pump6 pidfeedback signal
U8 gai_4_134_set_point_type_pump1;  // 4,134 pump1 setpoint type
U8 gai_4_135_set_point_type_pump2;  // 4,135 pump2 setpoint type
U8 gai_4_136_set_point_type_pump3;  // 4,136 pump3 setpoint type
U8 gai_4_137_set_point_type_pump4;  // 4,137 pump4 setpoint type
U8 gai_4_138_set_point_type_pump5;  // 4,138 pump5 setpoint type
U8 gai_4_139_set_point_type_pump6;  // 4,139 pump6 setpoint type
U8 gai_4_140_ai_setpoint_pump1;  // 4,140 pump1 setpoint(ai)
U8 gai_4_141_ai_setpoint_pump2;  // 4,141 pump2 setpoint(ai)
U8 gai_4_142_ai_setpoint_pump3;  // 4,142 pump3 setpoint(ai)
U8 gai_4_143_ai_setpoint_pump4;  // 4,143 pump4 setpoint(ai)
U8 gai_4_144_ai_setpoint_pump5;  // 4,144 pump5 setpoint(ai)
U8 gai_4_145_ai_setpoint_pump6;  // 4,145 pump6 setpoint(ai)
U8 gai_4_146_fixed_setpoint_pump1;  // 4,146 pump1 setpoint(fixed)
U8 gai_4_147_fixed_setpoint_pump2;  // 4,147 pump2 setpoint(fixed)
U8 gai_4_148_fixed_setpoint_pump3;  // 4,148 pump3 setpoint(fixed)
U8 gai_4_149_fixed_setpoint_pump4;  // 4,149 pump4 setpoint(fixed)
U8 gai_4_150_fixed_setpoint_pump5;  // 4,150 pump5 setpoint(fixed)
U8 gai_4_151_fixed_setpoint_pump6;  // 4,151 pump6 setpoint(fixed)
U8 gai_5_9_custom_relay;  // 5,9 custom_relay
U8 gai_5_10_rtc_year_set;  // 5,10 Set real time clock the MPC way
U8 gai_5_11_rtc_month_set;  // 5,11 Set real time clock the MPC way
U8 gai_5_12_rtc_day_set;  // 5,12 Set real time clock the MPC way
U8 gai_5_13_rtc_hour_set;  // 5,13 Set real time clock the MPC way
U8 gai_5_14_rtc_minute_set;  // 5,14 Set real time clock the MPC way
U8 gai_5_15_rtc_second_set;  // 5,15 Set real time clock the MPC way
U8 gai_5_32_event_code_sim;  // 5,32 event_code_sim
U8 gai_5_33_device_type_code_sim_id;  // 5,33 device_type_code_sim_id
U8 gai_5_34_device_no_sim_id;  // 5,34 device_no_sim_id
U8 gai_5_35_event_sim_activate;  // 5,35 event_sim_activate
U8 gai_5_36_event_source_sim;  // 5,36 event_source_sim
U8 gai_5_37_event_type_and_cond_sim;  // 5,37 event_type_and_cond_sim
U8 gai_5_38_set_min_reply_delay;  // 5,38 set_min_reply_delay
U8 gai_5_39_set_baud_rate;  // 5,39 set_baud_rate
U8 gai_5_45_sms_out_seq_no_ack;  // 5,45 sms_out_seq_no_ack
U8 gai_5_49_sim_card_status;  // 5,49 sim_card_status
U8 gai_5_55_gsm_state;  // 5,55 gsm_state
U8 gai_5_56_cim_heartbeat;  // 5,56 Heartbeat from ciu module, telling that communication is ok
U8 gai_5_57_cim_type;  // 5,57 Type of CIM/CIU connected. A CIM/CIU master writes the value
U16 gai_11_0_pit_water_level;  // 11,0 Actual pit level
U16 gai_11_1_pit_switch_water_level;  // 11,1 float_switch_water_level (number)
U16 gai_11_2_pit_depth;  // 11,2 Pit depth (config)
U16 gai_11_3_pit_act_flow_in;  // 11,3 Flow (TBD)
U16 gai_11_4_pit_avg_flow_in;  // 11,4 Flow (TBD)
U16 gai_11_5_pit_act_flow_out;  // 11,5 Flow (TBD)
U16 gai_11_6_pit_avg_flow_out;  // 11,6 Flow (TBD)
U16 gai_11_7_pit_energy_yesterday;  // 11,7 pit_energy_yesterday
U16 gai_11_8_pit_energy_today;  // 11,8 pit_energy_today
U16 gai_11_9_pit_specific_energy;  // 11,9 Efficiency
U16 gai_11_10_pit_pumped_volume_yesterday;  // 11,10 pit_pumped_volume_yesterday
U16 gai_11_11_pit_pumped_volume_today;  // 11,11 pit_pumped_volume_today
U16 gai_11_12_pit_2_pumps_opr_time_yesterday;  // 11,12 pit_2_pumps_opr_time_yesterday
U16 gai_11_13_pit_3_pumps_opr_time_yesterday;  // 11,13 pit_3_pumps_opr_time_yesterday
U16 gai_11_14_pit_4_pumps_opr_time_yesterday;  // 11,14 pit_4_pumps_opr_time_yesterday
U16 gai_11_15_pit_5_pumps_opr_time_yesterday;  // 11,15 pit_5_pumps_opr_time_yesterday
U16 gai_11_16_pit_6_pumps_opr_time_yesterday;  // 11,16 pit_6_pumps_opr_time_yesterday
U16 gai_11_17_pit_2_pumps_opr_time_today;  // 11,17 pit_2_pumps_opr_time_today
U16 gai_11_18_pit_3_pumps_opr_time_today;  // 11,18 pit_3_pumps_opr_time_today
U16 gai_11_19_pit_4_pumps_opr_time_today;  // 11,19 pit_4_pumps_opr_time_today
U16 gai_11_20_pit_5_pumps_opr_time_today;  // 11,20 pit_5_pumps_opr_time_today
U16 gai_11_21_pit_6_pumps_opr_time_today;  // 11,21 pit_6_pumps_opr_time_today
U16 gai_11_22_pit_mixer_starts_per_h;  // 11,22 mixer_starts_pr_hour
U16 gai_11_23_pit_overflow_volume;  // 11,23 overflow volume
U16 gai_11_24_pit_overflow_volume_yesterday;  // 11,24 pit_overflow_volume_yesterday
U16 gai_11_25_pit_overflow_volume_today;  // 11,25 pit_overflow_volume_today
U16 gai_11_26_pit_overflow_time;  // 11,26 overflow time
U16 gai_11_27_pit_overflow_time_yesterday;  // 11,27 pit_overflow_time_yesterday
U16 gai_11_28_pit_overflow_time_today;  // 11,28 pit_overflow_time_today
U16 gai_11_29_pit_overflow_count;  // 11,29 overflow_count
U16 gai_11_30_pit_overflow_cnt_yesterday;  // 11,30 pit_overflow_cnt_yesterday
U16 gai_11_31_pit_overflow_cnt_today;  // 11,31 pit_overflow_cnt_today
U16 gai_11_32_pit_pump_mode;  // 11,32 pit_pump_mode
U16 gai_11_33_pit_pump_fault;  // 11,33 pit_pump_fault
U16 gai_11_34_pit_pump_mon_fault;  // 11,34 pit_pump_mon_fault
U16 gai_11_35_pit_pump_conn_type;  // 11,35 pit_pump_conn_type
U16 gai_11_36_pit_pump_ctr_source;  // 11,36 pit_pump_ctr_source
U16 gai_11_37_pit_alarms1;  // 11,37 pit_alarms1
U16 gai_11_38_pit_alarms2;  // 11,38 pit_alarms2
U16 gai_11_39_pit_alarms3;  // 11,39 pit_alarms3
U16 gai_11_40_pit_warn1;  // 11,40 pit_warn1
U16 gai_11_41_pit_warn2;  // 11,41 pit_warn2
U16 gai_11_42_pit_warn3;  // 11,42 pit_warn3
U16 gai_11_43_event_log_latest_id;  // 11,43 event_log_latest_id
U16 gai_11_45_user_ana_in_1;  // 11,45 user_ana_in_1
U16 gai_11_46_user_ana_in_2;  // 11,46 user_ana_in_2
U16 gai_11_47_user_ana_in_3;  // 11,47 user_ana_in_3
U16 gai_11_48_pit_rand_start_level_band;  // 11,48 
U16 gai_11_49_pit_0_pumps_opr_time_yesterday;  // 11,49 pit_0_pumps_opr_time_yesterday
U16 gai_11_50_pit_1_pumps_opr_time_yesterday;  // 11,50 pit_1_pumps_opr_time_yesterday
U16 gai_11_51_pit_0_pumps_opr_time_today;  // 11,51 pit_0_pumps_opr_time_today
U16 gai_11_52_pit_1_pumps_opr_time_today;  // 11,52 pit_1_pumps_opr_time_today
U16 gai_11_53_discharge_pressure;  // 11,53 Discharge pressure
U16 gai_11_55_pit_alarms4;  // 11,55 
U16 gai_11_56_pit_warn4;  // 11,56 
U16 gai_11_59_power_on_counter;  // 11,59 power_on_counter (not in profile)
U16 gai_11_60_p1_opr_time_yesterday;  // 11,60 p1_opr_time_yesterday
U16 gai_11_61_p1_opr_time_today;  // 11,61 p1_opr_time_today
U16 gai_11_62_p1_latest_runtime;  // 11,62 pump_1_latest_runtime
U16 gai_11_63_p1_start_cnt_yesterday;  // 11,63 p1_start_cnt_yesterday
U16 gai_11_64_p1_start_cnt_today;  // 11,64 p1_start_cnt_today
U16 gai_11_65_p1_starts_pr_hour;  // 11,65 pump_1_starts_pr_hour
U16 gai_11_66_p1_flow;  // 11,66 pump_1_calculated_flow_filtered
U16 gai_11_67_p1_latest_flow;  // 11,67 pump_1_calculated_flow_raw
U16 gai_11_68_p1_current;  // 11,68 
U16 gai_11_69_p1_latest_current;  // 11,69 p1_latest_current
U16 gai_11_70_p1_insulation;  // 11,70 
U16 gai_11_71_p1_water_in_oil;  // 11,71 pump_1_water_in_oil
U16 gai_11_72_p1_motor_temp1;  // 11,72 pump_1_temperature
U16 gai_11_74_p1_cosine_phi;  // 11,74 
U16 gai_11_75_p1_freq;  // 11,75 
U16 gai_11_76_p1_mode_and_connect;  // 11,76 p1_mode_and_connect
U16 gai_11_77_p1_alarms1;  // 11,77 p1_alarms1
U16 gai_11_78_p1_alarms2;  // 11,78 p1_alarms2
U16 gai_11_79_p1_alarms3;  // 11,79 p1_alarms3
U16 gai_11_80_p1_warn1;  // 11,80 p1_warn1
U16 gai_11_81_p1_warn2;  // 11,81 p1_warn2
U16 gai_11_82_p1_warn3;  // 11,82 p1_warn3
U16 gai_11_83_p1_voltage;  // 11,83 
U16 gai_11_85_p1_vfd_mode;  // 11,85 
U16 gai_11_86_p1_torque;  // 11,86 
U16 gai_11_87_p1_i_asym;  // 11,87 
U16 gai_11_88_p1_alarms4;  // 11,88 p1_alarms4
U16 gai_11_89_p1_warn4;  // 11,89 p1_warn4
U16 gai_11_90_p2_opr_time_yesterday;  // 11,90 p2_opr_time_yesterday
U16 gai_11_91_p2_opr_time_today;  // 11,91 p2_opr_time_today
U16 gai_11_92_p2_latest_runtime;  // 11,92 pump_2_latest_runtime
U16 gai_11_93_p2_start_cnt_yesterday;  // 11,93 p2_start_cnt_yesterday
U16 gai_11_94_p2_start_cnt_today;  // 11,94 p2_start_cnt_today
U16 gai_11_95_p2_starts_pr_hour;  // 11,95 pump_2_starts_pr_hour
U16 gai_11_96_p2_flow;  // 11,96 pump_2_calculated_flow_filtered
U16 gai_11_97_p2_latest_flow;  // 11,97 pump_2_calculated_flow_raw
U16 gai_11_98_p2_current;  // 11,98 
U16 gai_11_99_p2_latest_current;  // 11,99 p2_latest_current
U16 gai_11_100_p2_insulation;  // 11,100 
U16 gai_11_101_p2_water_in_oil;  // 11,101 pump_2_water_in_oil
U16 gai_11_102_p2_motor_temp;  // 11,102 pump_2_temperature
U16 gai_11_104_p2_cosine_phi;  // 11,104 
U16 gai_11_105_p2_freq;  // 11,105 
U16 gai_11_106_p2_mode_and_connect;  // 11,106 p2_mode_and_connect
U16 gai_11_107_p2_alarms1;  // 11,107 p2_alarms1
U16 gai_11_108_p2_alarms2;  // 11,108 p2_alarms2
U16 gai_11_109_p2_alarms3;  // 11,109 p2_alarms3
U16 gai_11_110_p2_warn1;  // 11,110 p2_warn1
U16 gai_11_111_p2_warn2;  // 11,111 p2_warn2
U16 gai_11_112_p2_warn3;  // 11,112 p2_warn3
U16 gai_11_113_p2_voltage;  // 11,113 
U16 gai_11_115_p2_vfd_mode;  // 11,115 
U16 gai_11_116_p2_torque;  // 11,116 
U16 gai_11_117_p2_i_asym;  // 11,117 
U16 gai_11_118_p2_alarms4;  // 11,118 p2_alarms4
U16 gai_11_119_p2_warn4;  // 11,119 p2_warn4
U16 gai_11_120_p3_opr_time_yesterday;  // 11,120 p3_opr_time_yesterday
U16 gai_11_121_p3_opr_time_today;  // 11,121 p3_opr_time_today
U16 gai_11_122_p3_latest_runtime;  // 11,122 pump_3_latest_runtime
U16 gai_11_123_p3_start_cnt_yesterday;  // 11,123 p3_start_cnt_yesterday
U16 gai_11_124_p3_start_cnt_today;  // 11,124 p3_start_cnt_today
U16 gai_11_125_p3_starts_pr_hour;  // 11,125 pump_3_starts_pr_hour
U16 gai_11_126_p3_flow;  // 11,126 pump_3_calculated_flow_filtered
U16 gai_11_127_p3_latest_flow;  // 11,127 pump_3_calculated_flow_raw
U16 gai_11_128_p3_current;  // 11,128 
U16 gai_11_129_p3_latest_current;  // 11,129 p3_latest_current
U16 gai_11_130_p3_insulation;  // 11,130 
U16 gai_11_131_p3_water_in_oil;  // 11,131 pump_3_water_in_oil
U16 gai_11_132_p3_motor_temp;  // 11,132 pump_3_temperature
U16 gai_11_134_p3_cosine_phi;  // 11,134 
U16 gai_11_135_p3_freq;  // 11,135 
U16 gai_11_136_p3_mode_and_connect;  // 11,136 p3_mode_and_connect
U16 gai_11_137_p3_alarms1;  // 11,137 p3_alarms1
U16 gai_11_138_p3_alarms2;  // 11,138 p3_alarms2
U16 gai_11_139_p3_alarms3;  // 11,139 p3_alarms3
U16 gai_11_140_p3_warn1;  // 11,140 p3_warn1
U16 gai_11_141_p3_warn2;  // 11,141 p3_warn2
U16 gai_11_142_p3_warn3;  // 11,142 p3_warn3
U16 gai_11_143_p3_voltage;  // 11,143 
U16 gai_11_145_p3_vfd_mode;  // 11,145 
U16 gai_11_146_p3_torque;  // 11,146 
U16 gai_11_147_p3_i_asym;  // 11,147 
U16 gai_11_148_p3_alarms4;  // 11,148 p3_alarms4
U16 gai_11_149_p3_warn4;  // 11,149 p3_warn4
U16 gai_11_150_p4_opr_time_yesterday;  // 11,150 p4_opr_time_yesterday
U16 gai_11_151_p4_opr_time_today;  // 11,151 p4_opr_time_today
U16 gai_11_152_p4_latest_runtime;  // 11,152 pump_4_latest_runtime
U16 gai_11_153_p4_start_cnt_yesterday;  // 11,153 p4_start_cnt_yesterday
U16 gai_11_154_p4_start_cnt_today;  // 11,154 p4_start_cnt_today
U16 gai_11_155_p4_starts_pr_hour;  // 11,155 pump_4_starts_pr_hour
U16 gai_11_156_p4_flow;  // 11,156 pump_4_calculated_flow_filtered
U16 gai_11_157_p4_latest_flow;  // 11,157 pump_4_calculated_flow_raw
U16 gai_11_158_p4_current;  // 11,158 
U16 gai_11_159_p4_latest_current;  // 11,159 p4_latest_current
U16 gai_11_160_p4_insulation;  // 11,160 
U16 gai_11_161_p4_water_in_oil;  // 11,161 pump_4_water_in_oil
U16 gai_11_162_p4_motor_temp;  // 11,162 pump_4_temperature
U16 gai_11_164_p4_cosine_phi;  // 11,164 
U16 gai_11_165_p4_freq;  // 11,165 
U16 gai_11_166_p4_mode_and_connect;  // 11,166 p4_mode_and_connect
U16 gai_11_167_p4_alarms1;  // 11,167 p4_alarms1
U16 gai_11_168_p4_alarms2;  // 11,168 p4_alarms2
U16 gai_11_169_p4_alarms3;  // 11,169 p4_alarms3
U16 gai_11_170_p4_warn1;  // 11,170 p4_warn1
U16 gai_11_171_p4_warn2;  // 11,171 p4_warn2
U16 gai_11_172_p4_warn3;  // 11,172 p4_warn3
U16 gai_11_173_p4_voltage;  // 11,173 
U16 gai_11_175_p4_vfd_mode;  // 11,175 
U16 gai_11_176_p4_torque;  // 11,176 
U16 gai_11_177_p4_i_asym;  // 11,177 
U16 gai_11_178_p4_alarms4;  // 11,178 p4_alarms4
U16 gai_11_179_p4_warn4;  // 11,179 p4_warn4
U16 gai_11_180_p5_opr_time_yesterday;  // 11,180 p5_opr_time_yesterday
U16 gai_11_181_p5_opr_time_today;  // 11,181 p5_opr_time_today
U16 gai_11_182_p5_latest_runtime;  // 11,182 pump_5_latest_runtime
U16 gai_11_183_p5_start_cnt_yesterday;  // 11,183 p5_start_cnt_yesterday
U16 gai_11_184_p5_start_cnt_today;  // 11,184 p5_start_cnt_today
U16 gai_11_185_p5_starts_pr_hour;  // 11,185 pump_5_starts_pr_hour
U16 gai_11_186_p5_flow;  // 11,186 pump_5_calculated_flow_filtered
U16 gai_11_187_p5_latest_flow;  // 11,187 pump_5_calculated_flow_raw
U16 gai_11_188_p5_current;  // 11,188 
U16 gai_11_189_p5_latest_current;  // 11,189 p5_latest_current
U16 gai_11_190_p5_insulation;  // 11,190 
U16 gai_11_191_p5_water_in_oil;  // 11,191 pump_5_water_in_oil
U16 gai_11_192_p5_motor_temp;  // 11,192 pump_5_temperature
U16 gai_11_194_p5_cosine_phi;  // 11,194 
U16 gai_11_195_p5_freq;  // 11,195 
U16 gai_11_196_p5_mode_and_connect;  // 11,196 p5_mode_and_connect
U16 gai_11_197_p5_alarms1;  // 11,197 p5_alarms1
U16 gai_11_198_p5_alarms2;  // 11,198 p5_alarms2
U16 gai_11_199_p5_alarms3;  // 11,199 p5_alarms3
U16 gai_11_200_p5_warn1;  // 11,200 p5_warn1
U16 gai_11_201_p5_warn2;  // 11,201 p5_warn2
U16 gai_11_202_p5_warn3;  // 11,202 p5_warn3
U16 gai_11_203_p5_voltage;  // 11,203 
U16 gai_11_205_p5_vfd_mode;  // 11,205 
U16 gai_11_206_p5_torque;  // 11,206 
U16 gai_11_207_p5_i_asym;  // 11,207 
U16 gai_11_208_p5_alarms4;  // 11,208 p5_alarms4
U16 gai_11_209_p5_warn4;  // 11,209 p5_warn4
U16 gai_11_210_p6_opr_time_yesterday;  // 11,210 p6_opr_time_yesterday
U16 gai_11_211_p6_opr_time_today;  // 11,211 p6_opr_time_today
U16 gai_11_212_p6_latest_runtime;  // 11,212 pump_6_latest_runtime
U16 gai_11_213_p6_start_cnt_yesterday;  // 11,213 p6_start_cnt_yesterday
U16 gai_11_214_p6_start_cnt_today;  // 11,214 p6_start_cnt_today
U16 gai_11_215_p6_starts_pr_hour;  // 11,215 pump_6_starts_pr_hour
U16 gai_11_216_p6_flow;  // 11,216 pump_6_calculated_flow_filtered
U16 gai_11_217_p6_latest_flow;  // 11,217 pump_6_calculated_flow_raw
U16 gai_11_218_p6_current;  // 11,218 
U16 gai_11_219_p6_latest_current;  // 11,219 p6_latest_current
U16 gai_11_220_p6_insulation;  // 11,220 
U16 gai_11_221_p6_water_in_oil;  // 11,221 pump_6_water_in_oil
U16 gai_11_222_p6_motor_temp;  // 11,222 pump_6_temperature
U16 gai_11_224_p6_cosine_phi;  // 11,224 
U16 gai_11_225_p6_freq;  // 11,225 
U16 gai_11_226_p6_mode_and_connect;  // 11,226 p6_mode_and_connect
U16 gai_11_227_p6_alarms1;  // 11,227 p6_alarms1
U16 gai_11_228_p6_alarms2;  // 11,228 p6_alarms2
U16 gai_11_229_p6_alarms3;  // 11,229 p6_alarms3
U16 gai_11_230_p6_warn1;  // 11,230 p6_warn1
U16 gai_11_231_p6_warn2;  // 11,231 p6_warn2
U16 gai_11_232_p6_warn3;  // 11,232 p6_warn3
U16 gai_11_233_p6_voltage;  // 11,233 
U16 gai_11_235_p6_vfd_mode;  // 11,235 
U16 gai_11_236_p6_torque;  // 11,236 
U16 gai_11_237_p6_i_asym;  // 11,237 
U16 gai_11_238_p6_alarms4;  // 11,238 p6_alarms4
U16 gai_11_239_p6_warn4;  // 11,239 p6_warn4
U16 gai_11_251_class_11_dummy_1;  // 11,251 Dummy par, used for debug
U16 gai_11_252_class_11_dummy_2;  // 11,252 Dummy par, used for debug
U16 gai_11_253_class_11_dummy_3;  // 11,253 Dummy par, used for debug
U16 gai_12_0_overflow_level;  // 12,0 overflow_alarm_level
U16 gai_12_1_high_level;  // 12,1 high_level_alarm_level
U16 gai_12_2_alarm_level;  // 12,2 level_alarm_alarm_level
U16 gai_12_3_dry_running_level;  // 12,3 dry_running_alarm_level
U16 gai_12_4_foam_drain_level;  // 12,4 foam_drain_level
U16 gai_12_5_start_level_p1;  // 12,5 start_level_pump_1
U16 gai_12_6_start_level_p2;  // 12,6 start_level_pump_2
U16 gai_12_7_start_level_p3;  // 12,7 start_level_pump_3
U16 gai_12_8_start_level_p4;  // 12,8 start_level_pump_4
U16 gai_12_9_start_level_p5;  // 12,9 start_level_pump_5
U16 gai_12_10_start_level_p6;  // 12,10 start_level_pump_6
U16 gai_12_11_stop_level_p1;  // 12,11 stop_level_pump_1
U16 gai_12_12_stop_level_p2;  // 12,12 stop_level_pump_2
U16 gai_12_13_stop_level_p3;  // 12,13 stop_level_pump_3
U16 gai_12_14_stop_level_p4;  // 12,14 stop_level_pump_4
U16 gai_12_15_stop_level_p5;  // 12,15 stop_level_pump_5
U16 gai_12_16_stop_level_p6;  // 12,16 stop_level_pump_6
U16 gai_12_20_interlock_timeout_slave;  // 12,20 interlock timeout value (for return to auto)
U16 gai_12_21_current_max_alarm_group1;  // 12,21 pump group 1 over load alarm limit
U16 gai_12_22_current_min_alarm_group1;  // 12,22 pump group 1 under load alarm limit
U16 gai_12_23_current_max_warn_group1;  // 12,23 pump group 1 over load warning limit
U16 gai_12_24_current_min_warn_group1;  // 12,24 pump group 1 under load warning limit
U16 gai_12_25_current_max_alarm_group2;  // 12,25 pump group 2 over load alarm limit
U16 gai_12_26_current_min_alarm_group2;  // 12,26 pump group 2 under load alarm limit
U16 gai_12_27_current_max_warn_group2;  // 12,27 pump group 2 over load warning limit
U16 gai_12_28_current_min_warn_group2;  // 12,28 pump group 2 under load warning limit
U16 gai_12_30_fixed_freq_pump1;  // 12,30 pump1 fixed frequency
U16 gai_12_31_fixed_freq_pump2;  // 12,31 pump2 fixed frequency
U16 gai_12_32_fixed_freq_pump3;  // 12,32 pump3 fixed frequency
U16 gai_12_33_fixed_freq_pump4;  // 12,33 pump4 fixed frequency
U16 gai_12_34_fixed_freq_pump5;  // 12,34 pump5 fixed frequency
U16 gai_12_35_fixed_freq_pump6;  // 12,35 pump6 fixed frequency
U16 gai_13_0_event_log_clear_id;  // 13,0 event_log_clear_id
U16 gai_13_1_ana_out_user_1;  // 13,1 
U16 gai_13_2_ana_out_user_2;  // 13,2 
U16 gai_13_3_ana_out_user_3;  // 13,3 
U16 gai_13_4_set_h2s_level;  // 13,4 
U16 gai_13_5_set_h2s_fault;  // 13,5 
U16 gai_13_6_set_dosing_ref;  // 13,6 
U32 gai_14_0_pit_power;  // 14,0 pit_power
U32 gai_14_1_pit_energy;  // 14,1 pit_energy
U32 gai_14_2_pit_pumped_volume;  // 14,2 pit_pumped_volume
U32 gai_14_3_pit_opr_time;  // 14,3 pit_operation_time
U32 gai_14_4_pit_2_pumps_opr_time;  // 14,4 parallel_operation_time
U32 gai_14_5_pit_3_pumps_opr_time;  // 14,5 Total simultaneous 3 pump operating time
U32 gai_14_6_pit_4_pumps_opr_time;  // 14,6 Total simultaneous 4 pump operating time
U32 gai_14_7_pit_5_pumps_opr_time;  // 14,7 Total simultaneous 5 pump operating time
U32 gai_14_8_pit_6_pumps_opr_time;  // 14,8 Total simultaneous 6 pump operating time
U32 gai_14_9_pit_0_pumps_opr_time;  // 14,9 Total simultaneous 0 pump operating time
U32 gai_14_10_pit_1_pumps_opr_time;  // 14,10 Total simultaneous 1 pump operating time
U32 gai_14_30_pit_mixer_opr_time;  // 14,30 
U32 gai_14_31_pit_mixer_start_cnt;  // 14,31 
U32 gai_14_40_p1_opr_time;  // 14,40 p1_opr_time
U32 gai_14_41_p1_time_to_service;  // 14,41 p1_time_to_service
U32 gai_14_42_p1_start_cnt;  // 14,42 p1_start_cnt
U32 gai_14_43_p1_power;  // 14,43 
U32 gai_14_44_p1_energy;  // 14,44 
U32 gai_14_45_p1_anti_blocking_cnt;  // 14,45 anti-blocking count for pump1
U32 gai_14_60_p2_opr_time;  // 14,60 p2_opr_time
U32 gai_14_61_p2_time_to_service;  // 14,61 p2_time_to_service
U32 gai_14_62_p2_start_cnt;  // 14,62 p2_start_cnt
U32 gai_14_63_p2_power;  // 14,63 
U32 gai_14_64_p2_energy;  // 14,64 
U32 gai_14_65_p2_anti_blocking_cnt;  // 14,65 anti-blocking count for pump2
U32 gai_14_80_p3_opr_time;  // 14,80 p3_opr_time
U32 gai_14_81_p3_time_to_service;  // 14,81 p3_time_to_service
U32 gai_14_82_p3_start_cnt;  // 14,82 p3_start_cnt
U32 gai_14_83_p3_power;  // 14,83 p3 power
U32 gai_14_84_p3_energy;  // 14,84 
U32 gai_14_85_p3_anti_blocking_cnt;  // 14,85 anti-blocking count for pump3
U32 gai_14_100_p4_opr_time;  // 14,100 p4_opr_time
U32 gai_14_101_p4_time_to_service;  // 14,101 p4_time_to_service
U32 gai_14_102_p4_start_cnt;  // 14,102 p4_start_cnt
U32 gai_14_103_p4_power;  // 14,103 p4 power
U32 gai_14_104_p4_energy;  // 14,104 
U32 gai_14_105_p4_anti_blocking_cnt;  // 14,105 anti-blocking count for pump4
U32 gai_14_120_p5_opr_time;  // 14,120 p5_opr_time
U32 gai_14_121_p5_time_to_service;  // 14,121 p5_time_to_service
U32 gai_14_122_p5_start_cnt;  // 14,122 p5_start_cnt
U32 gai_14_123_p5_power;  // 14,123 p5 power
U32 gai_14_124_p5_energy;  // 14,124 
U32 gai_14_125_p5_anti_blocking_cnt;  // 14,125 anti-blocking count for pump5
U32 gai_14_140_p6_opr_time;  // 14,140 p6_opr_time
U32 gai_14_141_p6_time_to_service;  // 14,141 p6_time_to_service
U32 gai_14_142_p6_start_cnt;  // 14,142 p6_start_cnt
U32 gai_14_143_p6_power;  // 14,143 p6 power
U32 gai_14_144_p6_energy;  // 14,144 
U32 gai_14_145_p6_anti_blocking_cnt;  // 14,145 anti-blocking count for pump6
U32 gai_14_160_real_time_clock;  // 14,160 real_time_clock
U32 gai_14_161_ip_address;  // 14,161 IP address of GPRS connection
U32 gai_14_170_user_defined_cnt_1;  // 14,170 user defined counter 1
U32 gai_14_171_user_defined_cnt_2;  // 14,171 user defined counter 2
U32 gai_14_172_user_defined_cnt_3;  // 14,172 user defined counter 3
U32 gai_14_173_today_udc_counter1;  // 14,173 
U32 gai_14_174_today_udc_counter2;  // 14,174 
U32 gai_14_175_today_udc_counter3;  // 14,175 
U32 gai_14_176_yesterday_udc_counter1;  // 14,176 
U32 gai_14_177_yesterday_udc_counter2;  // 14,177 
U32 gai_14_178_yesterday_udc_counter3;  // 14,178 
U32 gai_14_179_overflow_volume;  // 14,179 overflow volume
U32 gai_14_180_overflow_time;  // 14,180 overflow time
U32 gai_14_190_h2s_level;  // 14,190 
U32 gai_14_191_h2s_level_today_log;  // 14,191 
U32 gai_14_192_h2s_level_yesterday_log;  // 14,192 
U32 gai_14_193_dosing_feed_tank_level;  // 14,193 
U32 gai_14_194_dosing_volume_total_log;  // 14,194 
U32 gai_14_195_dosing_volume_today_log;  // 14,195 
U32 gai_14_196_dosing_volume_yesterday_log;  // 14,196 
U32 gai_14_197_dosing_ref_act;  // 14,197 
U32 gai_15_1_dummy15;  // 15,1 Dummy: Last id must be > 0
U32 gai_16_0_set_real_time_clock;  // 16,0 set_real_time_clock
U32 gai_16_1_dummy16;  // 16,1 Dummy: Last id must be > 0
