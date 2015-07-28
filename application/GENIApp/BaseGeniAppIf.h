/**************************************************************************
 This file is auto-generated by FactoryGenerator, do not modify it manually
**************************************************************************/

#ifndef __BASE_GENI_APP_IF_H__
#define __BASE_GENI_APP_IF_H__

/**************************************************************************
 SYSTEM INCLUDES
**************************************************************************/

/**************************************************************************
 PROJECT INCLUDES
**************************************************************************/
#include <Observer.h>
/**************************************************************************
 input\BaseGeniAppIfIncludes.h BEGIN
**************************************************************************/
#include <AlarmDef.h>
#include <AlarmConfig.h>
#include <BoolDataPoint.h>
#include <EnumDataPoint.h>
#include <EventDataPoint.h>
#include <U8DataPoint.h>
#include <U16DataPoint.h>
#include <I16DataPoint.h>
#include <U32DataPoint.h>
#include <I32DataPoint.h>
#include <FloatDataPoint.h>
#include <UserIo.h>
#include <PC_Quirks.h>
/**************************************************************************
 input\BaseGeniAppIfIncludes.h END
**************************************************************************/

/**************************************************************************
 LOCAL INCLUDES
**************************************************************************/
#include <GeniAppIfData.h>
#include <GeniConvertId.h>
#include <GeniConvert.h>

class BaseGeniAppIf : public Observer
{
public:
  // Observer
  virtual void SetSubjectPointer(int /*id*/, Subject* pSubject);
  virtual void ConnectToSubjects(void);
  virtual void Update(Subject* pSubject) = 0;
  virtual void SubscribtionCancelled(Subject* pSubject);

protected:
  // Constructor / Destructor
  BaseGeniAppIf();
  ~BaseGeniAppIf();

  // Operations
  bool SubjectToGeni(Subject* pSubject);
  bool HandleCommand(GAI_CMD_TYPE geniCmd);
  bool GeniToSubject(GAI_VAR_TYPE geniVar, U8 newValue);
  bool GeniToSubject(GAI_VAR_TYPE geniVar, U16 newValue);
  bool GeniToSubject(GAI_VAR_TYPE geniVar, U32 newValue);

  // Subjects
  SubjectPtr<FloatDataPoint*> mp_surface_level;
  SubjectPtr<FloatDataPoint*> mp_system_flow;
  SubjectPtr<FloatDataPoint*> mp_pit_depth;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_1;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_2;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_1;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_2;
  SubjectPtr<FloatDataPoint*> mp_foam_start_level;
  SubjectPtr<FloatDataPoint*> mp_pump_1_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_pump_1_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_system_power;
  SubjectPtr<FloatDataPoint*> mp_pump_2_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_pump_2_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_efficiency_one_hour_avg;
  SubjectPtr<FloatDataPoint*> mp_pumped_volume_yesterday_log;
  SubjectPtr<FloatDataPoint*> mp_overflow_volume_yesterday_log;
  SubjectPtr<FloatDataPoint*> mp_energy_consumption_yesterday_log;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_1;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_2;
  SubjectPtr<FloatDataPoint*> mp_pumped_volume_today_log;
  SubjectPtr<FloatDataPoint*> mp_overflow_volume_today_log;
  SubjectPtr<FloatDataPoint*> mp_energy_consumption_today_log;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_1;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_2;
  SubjectPtr<FloatDataPoint*> mp_ups_voltage_act;
  SubjectPtr<FloatDataPoint*> mp_measured_value_user_defined_source_1;
  SubjectPtr<FloatDataPoint*> mp_measured_value_user_defined_source_2;
  SubjectPtr<FloatDataPoint*> mp_measured_value_user_defined_source_3;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_3;
  SubjectPtr<FloatDataPoint*> mp_pump_3_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_pump_3_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_3;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_3;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_3;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_4;
  SubjectPtr<FloatDataPoint*> mp_pump_4_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_pump_4_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_4;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_4;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_4;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_5;
  SubjectPtr<FloatDataPoint*> mp_pump_5_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_pump_5_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_5;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_5;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_5;
  SubjectPtr<FloatDataPoint*> mp_latest_value_motor_current_pump_6;
  SubjectPtr<FloatDataPoint*> mp_pump_6_calculated_flow_filtered;
  SubjectPtr<FloatDataPoint*> mp_pump_6_calculated_flow_raw;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_water_in_oil_pump_6;
  SubjectPtr<FloatDataPoint*> mp_start_level_pump_6;
  SubjectPtr<FloatDataPoint*> mp_stop_level_pump_6;
  SubjectPtr<FloatDataPoint*> mp_vfd_1_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_2_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_3_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_4_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_5_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_6_output_frequency;
  SubjectPtr<FloatDataPoint*> mp_mp204_1_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_mp204_2_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_mp204_3_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_mp204_4_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_mp204_5_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_mp204_6_cos_phi;
  SubjectPtr<FloatDataPoint*> mp_lowest_start_level_variation;
  SubjectPtr<FloatDataPoint*> mp_vfd_1_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_2_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_3_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_4_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_5_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_vfd_6_fixed_frequency;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_1_torque;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_2_torque;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_3_torque;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_4_torque;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_5_torque;
  SubjectPtr<FloatDataPoint*> mp_cue_pump_6_torque;
  SubjectPtr<FloatDataPoint*> mp_vfd_1_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_vfd_2_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_vfd_3_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_vfd_4_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_vfd_5_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_vfd_6_pid_fixed_setpoint;
  SubjectPtr<FloatDataPoint*> mp_pump_1_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_2_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_3_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_4_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_5_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_6_mains_voltage;
  SubjectPtr<FloatDataPoint*> mp_pump_1_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_2_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_3_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_4_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_5_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_6_temperature;
  SubjectPtr<FloatDataPoint*> mp_pump_1_power;
  SubjectPtr<FloatDataPoint*> mp_pump_2_power;
  SubjectPtr<FloatDataPoint*> mp_pump_3_power;
  SubjectPtr<FloatDataPoint*> mp_pump_4_power;
  SubjectPtr<FloatDataPoint*> mp_pump_5_power;
  SubjectPtr<FloatDataPoint*> mp_pump_6_power;
  SubjectPtr<FloatDataPoint*> mp_ana_out_user_1;
  SubjectPtr<FloatDataPoint*> mp_ana_out_user_2;
  SubjectPtr<FloatDataPoint*> mp_ana_out_user_3;
  SubjectPtr<FloatDataPoint*> mp_mp204_1_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_mp204_2_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_mp204_3_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_mp204_4_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_mp204_5_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_mp204_6_current_asymmetry;
  SubjectPtr<FloatDataPoint*> mp_pump_1_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_2_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_3_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_4_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_5_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_6_energy;
  SubjectPtr<FloatDataPoint*> mp_pump_1_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_pump_2_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_pump_3_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_pump_4_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_pump_5_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_pump_6_insulation_resistance;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_1;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_2;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_3;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_4;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_5;
  SubjectPtr<FloatDataPoint*> mp_resulting_value_motor_current_pump_6;
  SubjectPtr<FloatDataPoint*> mp_measured_value_outlet_pressure;
  SubjectPtr<FloatDataPoint*> mp_dosing_feed_tank_level;
  SubjectPtr<FloatDataPoint*> mp_dosing_volume_total_log;
  SubjectPtr<FloatDataPoint*> mp_dosing_volume_today_log;
  SubjectPtr<FloatDataPoint*> mp_dosing_volume_yesterday_log;
  SubjectPtr<FloatDataPoint*> mp_dosing_ref_act;
  SubjectPtr<FloatDataPoint*> mp_set_dosing_ref;
  SubjectPtr<U32DataPoint*> mp_ethernet_mac_address_hi;
  SubjectPtr<U32DataPoint*> mp_ethernet_mac_address_lo;
  SubjectPtr<U8DataPoint*> mp_geni_setup;
  SubjectPtr<U8DataPoint*> mp_geni_slave_unit_address;
  SubjectPtr<U8DataPoint*> mp_geni_slave_group_address;
  SubjectPtr<U32DataPoint*> mp_pump_1_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_2_run_time;
  SubjectPtr<U32DataPoint*> mp_float_switch_water_level;
  SubjectPtr<U32DataPoint*> mp_pump_1_start_cnt;
  SubjectPtr<U32DataPoint*> mp_pump_2_start_cnt;
  SubjectPtr<U32DataPoint*> mp_system_run_time;
  SubjectPtr<U32DataPoint*> mp_overflow_time;
  SubjectPtr<U32DataPoint*> mp_no_of_overflows;
  SubjectPtr<U32DataPoint*> mp_total_energy_kwh_for_log;
  SubjectPtr<U32DataPoint*> mp_mixer_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_1_starts_pr_hour;
  SubjectPtr<U32DataPoint*> mp_pump_2_starts_pr_hour;
  SubjectPtr<U32DataPoint*> mp_mixer_starts_pr_hour;
  SubjectPtr<U32DataPoint*> mp_mixer_start_cnt;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_1;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_2;
  SubjectPtr<U32DataPoint*> mp_relay_status_relay_func_mixer;
  SubjectPtr<U32DataPoint*> mp_power_on_cnt;
  SubjectPtr<U32DataPoint*> mp_dig_in_func_input_energy_cnt;
  SubjectPtr<U32DataPoint*> mp_sms_out_seq_number;
  SubjectPtr<U32DataPoint*> mp_sms_sent_id;
  SubjectPtr<U8DataPoint*> mp_modem_ctrl;
  SubjectPtr<U32DataPoint*> mp_overflow_count_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_overflow_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_1_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_2_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_1_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_2_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_interlock_timeout;
  SubjectPtr<U32DataPoint*> mp_pump_1_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_pump_2_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_gprs_ip_address;
  SubjectPtr<U8DataPoint*> mp_geni_unit_family;
  SubjectPtr<U8DataPoint*> mp_geni_unit_type;
  SubjectPtr<U8DataPoint*> mp_geni_unit_version;
  SubjectPtr<U32DataPoint*> mp_geni_dummy_data_point;
  SubjectPtr<U8DataPoint*> mp_geni_baud_rate_config;
  SubjectPtr<U8DataPoint*> mp_geni_baud_rate_set;
  SubjectPtr<U8DataPoint*> mp_gsm_setup;
  SubjectPtr<U8DataPoint*> mp_geni_min_reply_delay_config;
  SubjectPtr<U8DataPoint*> mp_geni_min_reply_delay_set;
  SubjectPtr<U8DataPoint*> mp_rtc_second;
  SubjectPtr<U8DataPoint*> mp_rtc_minute;
  SubjectPtr<U8DataPoint*> mp_rtc_hour;
  SubjectPtr<U8DataPoint*> mp_rtc_day_of_month;
  SubjectPtr<U8DataPoint*> mp_rtc_month_of_year;
  SubjectPtr<U8DataPoint*> mp_rtc_year;
  SubjectPtr<U8DataPoint*> mp_rtc_day_of_week;
  SubjectPtr<U32DataPoint*> mp_rtc_seconds_since_1970_act;
  SubjectPtr<U32DataPoint*> mp_rtc_seconds_since_1970_set;
  SubjectPtr<U32DataPoint*> mp_geni_dummy_class_11_par_1;
  SubjectPtr<U32DataPoint*> mp_geni_dummy_class_11_par_2;
  SubjectPtr<U32DataPoint*> mp_geni_dummy_class_11_par_3;
  SubjectPtr<U32DataPoint*> mp_pump_1_run_time_to_service;
  SubjectPtr<U32DataPoint*> mp_pump_2_run_time_to_service;
  SubjectPtr<U8DataPoint*> mp_float_switch_di_status;
  SubjectPtr<U16DataPoint*> mp_pump_fault_status;
  SubjectPtr<U16DataPoint*> mp_system_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_system_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_system_alarm_status_3;
  SubjectPtr<U16DataPoint*> mp_system_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_system_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_system_warning_status_3;
  SubjectPtr<U16DataPoint*> mp_pump_1_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_1_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_1_alarm_status_3;
  SubjectPtr<U16DataPoint*> mp_pump_1_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_1_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_1_warning_status_3;
  SubjectPtr<U16DataPoint*> mp_pump_2_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_2_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_2_alarm_status_3;
  SubjectPtr<U16DataPoint*> mp_pump_2_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_2_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_2_warning_status_3;
  SubjectPtr<U16DataPoint*> mp_pump_monitoring_fault;
  SubjectPtr<U16DataPoint*> mp_scada_pin_code;
  SubjectPtr<U8DataPoint*> mp_event_code_sim;
  SubjectPtr<U8DataPoint*> mp_event_action_type_sim;
  SubjectPtr<U8DataPoint*> mp_event_reset_type_sim;
  SubjectPtr<U8DataPoint*> mp_event_sim_activate;
  SubjectPtr<U32DataPoint*> mp_production_type_code;
  SubjectPtr<U32DataPoint*> mp_production_rev_date_code;
  SubjectPtr<U32DataPoint*> mp_production_serial_no;
  SubjectPtr<U16DataPoint*> mp_event_log_latest_id;
  SubjectPtr<U16DataPoint*> mp_event_log_clear_id;
  SubjectPtr<U32DataPoint*> mp_overflow_count_today_log;
  SubjectPtr<U32DataPoint*> mp_overflow_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_1_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_2_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_1_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_2_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_day_logging_start_hour;
  SubjectPtr<U32DataPoint*> mp_ciu_communication;
  SubjectPtr<U8DataPoint*> mp_gsm_state;
  SubjectPtr<U8DataPoint*> mp_device_type_code_sim;
  SubjectPtr<U8DataPoint*> mp_device_no_sim;
  SubjectPtr<U8DataPoint*> mp_display_current_no_of_float_switches;
  SubjectPtr<U8DataPoint*> mp_rtc_year_set;
  SubjectPtr<U8DataPoint*> mp_rtc_month_set;
  SubjectPtr<U8DataPoint*> mp_rtc_day_set;
  SubjectPtr<U8DataPoint*> mp_rtc_hour_set;
  SubjectPtr<U8DataPoint*> mp_rtc_minute_set;
  SubjectPtr<U8DataPoint*> mp_rtc_second_set;
  SubjectPtr<U8DataPoint*> mp_signal_level_act_geni;
  SubjectPtr<U8DataPoint*> mp_signal_level_avg_geni;
  SubjectPtr<U16DataPoint*> mp_pump_3_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_3_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_3_alarm_status_3;
  SubjectPtr<U32DataPoint*> mp_pump_3_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_pump_3_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_3_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_3_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_3_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_3_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_3_run_time_to_service;
  SubjectPtr<U32DataPoint*> mp_pump_3_start_cnt;
  SubjectPtr<U32DataPoint*> mp_pump_3_starts_pr_hour;
  SubjectPtr<U16DataPoint*> mp_pump_3_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_3_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_3_warning_status_3;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_3;
  SubjectPtr<U16DataPoint*> mp_pump_4_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_4_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_4_alarm_status_3;
  SubjectPtr<U32DataPoint*> mp_pump_4_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_pump_4_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_4_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_4_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_4_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_4_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_4_run_time_to_service;
  SubjectPtr<U32DataPoint*> mp_pump_4_start_cnt;
  SubjectPtr<U32DataPoint*> mp_pump_4_starts_pr_hour;
  SubjectPtr<U16DataPoint*> mp_pump_4_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_4_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_4_warning_status_3;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_4;
  SubjectPtr<U16DataPoint*> mp_pump_5_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_5_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_5_alarm_status_3;
  SubjectPtr<U32DataPoint*> mp_pump_5_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_pump_5_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_5_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_5_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_5_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_5_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_5_run_time_to_service;
  SubjectPtr<U32DataPoint*> mp_pump_5_start_cnt;
  SubjectPtr<U32DataPoint*> mp_pump_5_starts_pr_hour;
  SubjectPtr<U16DataPoint*> mp_pump_5_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_5_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_5_warning_status_3;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_5;
  SubjectPtr<U16DataPoint*> mp_pump_6_alarm_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_6_alarm_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_6_alarm_status_3;
  SubjectPtr<U32DataPoint*> mp_pump_6_latest_runtime;
  SubjectPtr<U32DataPoint*> mp_pump_6_no_of_starts_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_6_no_of_starts_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_6_operation_time_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_6_operation_time_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_6_run_time;
  SubjectPtr<U32DataPoint*> mp_pump_6_run_time_to_service;
  SubjectPtr<U32DataPoint*> mp_pump_6_start_cnt;
  SubjectPtr<U32DataPoint*> mp_pump_6_starts_pr_hour;
  SubjectPtr<U16DataPoint*> mp_pump_6_warning_status_1;
  SubjectPtr<U16DataPoint*> mp_pump_6_warning_status_2;
  SubjectPtr<U16DataPoint*> mp_pump_6_warning_status_3;
  SubjectPtr<U32DataPoint*> mp_relay_func_output_pump_6;
  SubjectPtr<U32DataPoint*> mp_first_pump_in_pump_group_2;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_0_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_1_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_2_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_3_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_4_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_5_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_6_pumps;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_0_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_0_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_1_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_1_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_2_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_2_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_3_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_3_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_4_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_4_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_5_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_5_pumps_today_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_6_pumps_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_pump_run_time_6_pumps_today_log;
  SubjectPtr<U16DataPoint*> mp_pump_1_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_2_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_3_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_4_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_5_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_6_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_1_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_2_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_3_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_4_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_5_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_pump_6_warning_status_4;
  SubjectPtr<U16DataPoint*> mp_system_alarm_status_4;
  SubjectPtr<U16DataPoint*> mp_system_warning_status_4;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_1;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_2;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_3;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_4;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_5;
  SubjectPtr<U32DataPoint*> mp_anti_blocking_performed_counter_pump_6;
  SubjectPtr<U32DataPoint*> mp_total_usd_cnt_1;
  SubjectPtr<U32DataPoint*> mp_total_usd_cnt_2;
  SubjectPtr<U32DataPoint*> mp_total_usd_cnt_3;
  SubjectPtr<U32DataPoint*> mp_overflow_volume_litre_for_log;
  SubjectPtr<U32DataPoint*> mp_pumped_volume_litre_for_log;
  SubjectPtr<U16DataPoint*> mp_yesterday_user_defined_counter_1;
  SubjectPtr<U16DataPoint*> mp_yesterday_user_defined_counter_2;
  SubjectPtr<U16DataPoint*> mp_yesterday_user_defined_counter_3;
  SubjectPtr<U16DataPoint*> mp_today_user_defined_counter_1;
  SubjectPtr<U16DataPoint*> mp_today_user_defined_counter_2;
  SubjectPtr<U16DataPoint*> mp_today_user_defined_counter_3;
  SubjectPtr<U32DataPoint*> mp_h2s_level_act;
  SubjectPtr<U32DataPoint*> mp_h2s_level_today_log;
  SubjectPtr<U32DataPoint*> mp_h2s_level_yesterday_log;
  SubjectPtr<U32DataPoint*> mp_set_h2s_level;
  SubjectPtr<U16DataPoint*> mp_set_h2s_fault;
  SubjectPtr<EnumDataPoint<APPLICATION_MODE_TYPE>*> mp_application_mode;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_1_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_2_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_3_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_4_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_5_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_6_conf_measured_value;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_ana_in_7_conf_measured_value;
  SubjectPtr<EnumDataPoint<STATUS_LED_STATE_TYPE>*> mp_status_led_red_state;
  SubjectPtr<EnumDataPoint<STATUS_LED_STATE_TYPE>*> mp_status_led_green_state;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_1;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_2;
  SubjectPtr<EnumDataPoint<FSW_TYPE>*> mp_float_switch_1_cnf;
  SubjectPtr<EnumDataPoint<FSW_TYPE>*> mp_float_switch_2_cnf;
  SubjectPtr<EnumDataPoint<FSW_TYPE>*> mp_float_switch_3_cnf;
  SubjectPtr<EnumDataPoint<FSW_TYPE>*> mp_float_switch_4_cnf;
  SubjectPtr<EnumDataPoint<FSW_TYPE>*> mp_float_switch_5_cnf;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_1;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_2;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_mixer_operating_mode;
  SubjectPtr<EnumDataPoint<SENSOR_TYPE_TYPE>*> mp_pit_level_ctrl_type;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_1_control_source;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_2_control_source;
  SubjectPtr<EnumDataPoint<SIM_CARD_STATUS_TYPE>*> mp_sim_card_status;
  SubjectPtr<EnumDataPoint<ALARM_ID_TYPE>*> mp_actual_alarm;
  SubjectPtr<EnumDataPoint<ALARM_ID_TYPE>*> mp_actual_warning;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_1_io111_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_2_io111_device_status;
  SubjectPtr<EnumDataPoint<FLOW_QUALITY_TYPE>*> mp_flow_quality;
  SubjectPtr<EnumDataPoint<COM_CARD_TYPE>*> mp_communication_card_received;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_1_conf_func;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_2_conf_func;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_3_conf_func;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_4_conf_func;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_5_conf_func;
  SubjectPtr<EnumDataPoint<ANA_OUT_FUNC_TYPE>*> mp_ana_out_6_conf_func;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_3;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_3;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_3_control_source;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_3_io111_device_status;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_4;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_4;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_4_control_source;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_4_io111_device_status;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_5;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_5;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_5_control_source;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_5_io111_device_status;
  SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*> mp_operation_mode_actual_pump_6;
  SubjectPtr<EnumDataPoint<REQ_OPERATION_MODE_TYPE>*> mp_operation_mode_req_pump_6;
  SubjectPtr<EnumDataPoint<CONTROL_SOURCE_TYPE>*> mp_pump_6_control_source;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_pump_6_io111_device_status;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_1_run_mode;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_2_run_mode;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_3_run_mode;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_4_run_mode;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_5_run_mode;
  SubjectPtr<EnumDataPoint<VFD_RUN_MODE_TYPE>*> mp_vfd_6_run_mode;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_1_state;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_2_state;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_3_state;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_4_state;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_5_state;
  SubjectPtr<EnumDataPoint<VFD_OPERATION_MODE_TYPE>*> mp_vfd_6_state;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_1_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_2_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_3_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_4_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_5_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_cue_pump_6_device_status;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_1_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_2_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_3_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_4_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_5_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_6_pid_ai_feedback;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_1_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_2_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_3_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_4_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_5_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<MEASURED_VALUE_TYPE>*> mp_vfd_6_pid_ai_setpoint;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_1_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_2_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_3_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_4_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_5_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<PID_SETPOINT_TYPE_TYPE>*> mp_vfd_6_pid_setpoint_type;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_1_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_2_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_3_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_4_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_5_device_status;
  SubjectPtr<EnumDataPoint<IO_DEVICE_STATUS_TYPE>*> mp_mp204_6_device_status;
  SubjectPtr<BoolDataPoint*> mp_display_wizard_enable;
  SubjectPtr<BoolDataPoint*> mp_relay_status_relay_func_relay_custom;
  SubjectPtr<BoolDataPoint*> mp_pit_level_sim_enabled;
  SubjectPtr<BoolDataPoint*> mp_scada_pin_code_enabled;
  SubjectPtr<BoolDataPoint*> mp_demo_suitcase_mode_enabled;
  SubjectPtr<BoolDataPoint*> mp_vfd_1_installed;
  SubjectPtr<BoolDataPoint*> mp_vfd_2_installed;
  SubjectPtr<BoolDataPoint*> mp_vfd_3_installed;
  SubjectPtr<BoolDataPoint*> mp_vfd_4_installed;
  SubjectPtr<BoolDataPoint*> mp_vfd_5_installed;
  SubjectPtr<BoolDataPoint*> mp_vfd_6_installed;
  SubjectPtr<BoolDataPoint*> mp_lowest_start_level_variation_enabled;
  SubjectPtr<BoolDataPoint*> mp_vfd_min_velocity_feature_enabled;
  SubjectPtr<BoolDataPoint*> mp_service_mode_enabled;
  SubjectPtr<EventDataPoint*> mp_alarm_reset_event;
  SubjectPtr<EventDataPoint*> mp_alarm_clear_alarm_log_event;
  SubjectPtr<EventDataPoint*> mp_enable_test_mode;
  SubjectPtr<EventDataPoint*> mp_disable_test_mode;
  SubjectPtr<EventDataPoint*> mp_interlock_request;
  SubjectPtr<EventDataPoint*> mp_interlock_off_request;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_1_stop;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_1_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_1_auto;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_2_stop;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_2_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_2_auto;
  SubjectPtr<EventDataPoint*> mp_reset_event_log;
  SubjectPtr<EventDataPoint*> mp_rtc_use_new_time_event;
  SubjectPtr<EventDataPoint*> mp_clear_pending_scada_event;
  SubjectPtr<EventDataPoint*> mp_fill_simulated_log_data;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_3_auto;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_3_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_3_stop;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_4_auto;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_4_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_4_stop;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_5_auto;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_5_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_5_stop;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_6_auto;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_6_start;
  SubjectPtr<EventDataPoint*> mp_bus_cmd_pump_6_stop;
  SubjectPtr<EventDataPoint*> mp_custom_relay_activate_cmd_event;
  SubjectPtr<EventDataPoint*> mp_custom_relay_deactivate_cmd_event;
  SubjectPtr<EventDataPoint*> mp_custom_relay_pulse_cmd_event;
  SubjectPtr<EventDataPoint*> mp_vfd_1_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_vfd_2_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_vfd_3_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_vfd_4_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_vfd_5_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_vfd_6_energy_test_start_test;
  SubjectPtr<EventDataPoint*> mp_adv_flow_calculation_start_learning_event;
  SubjectPtr<EventDataPoint*> mp_antiblock_normal_store_parameters_event;
  SubjectPtr<EventDataPoint*> mp_reset_usd_cnt_1_event;
  SubjectPtr<EventDataPoint*> mp_reset_usd_cnt_2_event;
  SubjectPtr<EventDataPoint*> mp_reset_usd_cnt_3_event;
  SubjectPtr<EventDataPoint*> mp_scada_callback_test_event;
  SubjectPtr<AlarmConfig*> mp_sys_alarm_high_level_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_sys_alarm_level_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_sys_alarm_dry_running_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_sys_alarm_overflow_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_pump_group_1_alarm_motor_current_overload_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_pump_group_1_alarm_motor_current_underload_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_pump_group_2_alarm_motor_current_overload_alarm_conf;
  SubjectPtr<AlarmConfig*> mp_pump_group_2_alarm_motor_current_underload_alarm_conf;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_1;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_2;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_3;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_4;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_5;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_6;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_7;
  SubjectPtr<UserIo*> mp_relay_status_relay_func_user_io_8;
};
#endif
