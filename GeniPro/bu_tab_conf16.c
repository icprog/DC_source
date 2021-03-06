/**************************************************************************
 This file is auto-generated by FactoryGenerator, do not modify it manually
**************************************************************************/

/**************************************************************************
 INCLUDES
**************************************************************************/
#include <common.h>
#include <InfoDef.h>
#include <GeniAppIfData.h>

/**************************************************************************
 DEFINES
**************************************************************************/
#define UC_ADDR_0_LI(X) ((UCHAR*)&X)

/**************************************************************************
 TABLE
**************************************************************************/
const ID_PTR conf16_tab[] = 
{
/* ID   0 */ UC_ADDR_0_LI(gai_12_0_overflow_level), // overflow_alarm_level
/* ID   1 */ UC_ADDR_0_LI(gai_12_1_high_level), // high_level_alarm_level
/* ID   2 */ UC_ADDR_0_LI(gai_12_2_alarm_level), // level_alarm_alarm_level
/* ID   3 */ UC_ADDR_0_LI(gai_12_3_dry_running_level), // dry_running_alarm_level
/* ID   4 */ UC_ADDR_0_LI(gai_12_4_foam_drain_level), // foam_drain_level
/* ID   5 */ UC_ADDR_0_LI(gai_12_5_start_level_p1), // start_level_pump_1
/* ID   6 */ UC_ADDR_0_LI(gai_12_6_start_level_p2), // start_level_pump_2
/* ID   7 */ UC_ADDR_0_LI(gai_12_7_start_level_p3), // start_level_pump_3
/* ID   8 */ UC_ADDR_0_LI(gai_12_8_start_level_p4), // start_level_pump_4
/* ID   9 */ UC_ADDR_0_LI(gai_12_9_start_level_p5), // start_level_pump_5
/* ID  10 */ UC_ADDR_0_LI(gai_12_10_start_level_p6), // start_level_pump_6
/* ID  11 */ UC_ADDR_0_LI(gai_12_11_stop_level_p1), // stop_level_pump_1
/* ID  12 */ UC_ADDR_0_LI(gai_12_12_stop_level_p2), // stop_level_pump_2
/* ID  13 */ UC_ADDR_0_LI(gai_12_13_stop_level_p3), // stop_level_pump_3
/* ID  14 */ UC_ADDR_0_LI(gai_12_14_stop_level_p4), // stop_level_pump_4
/* ID  15 */ UC_ADDR_0_LI(gai_12_15_stop_level_p5), // stop_level_pump_5
/* ID  16 */ UC_ADDR_0_LI(gai_12_16_stop_level_p6), // stop_level_pump_6
/* ID  17 */ NA,
/* ID  18 */ NA,
/* ID  19 */ NA,
/* ID  20 */ UC_ADDR_0_LI(gai_12_20_interlock_timeout_slave), // interlock timeout value (for return to auto)
/* ID  21 */ UC_ADDR_0_LI(gai_12_21_current_max_alarm_group1), // pump group 1 over load alarm limit
/* ID  22 */ UC_ADDR_0_LI(gai_12_22_current_min_alarm_group1), // pump group 1 under load alarm limit
/* ID  23 */ UC_ADDR_0_LI(gai_12_23_current_max_warn_group1), // pump group 1 over load warning limit
/* ID  24 */ UC_ADDR_0_LI(gai_12_24_current_min_warn_group1), // pump group 1 under load warning limit
/* ID  25 */ UC_ADDR_0_LI(gai_12_25_current_max_alarm_group2), // pump group 2 over load alarm limit
/* ID  26 */ UC_ADDR_0_LI(gai_12_26_current_min_alarm_group2), // pump group 2 under load alarm limit
/* ID  27 */ UC_ADDR_0_LI(gai_12_27_current_max_warn_group2), // pump group 2 over load warning limit
/* ID  28 */ UC_ADDR_0_LI(gai_12_28_current_min_warn_group2), // pump group 2 under load warning limit
/* ID  29 */ NA,
/* ID  30 */ UC_ADDR_0_LI(gai_12_30_fixed_freq_pump1), // pump1 fixed frequency
/* ID  31 */ UC_ADDR_0_LI(gai_12_31_fixed_freq_pump2), // pump2 fixed frequency
/* ID  32 */ UC_ADDR_0_LI(gai_12_32_fixed_freq_pump3), // pump3 fixed frequency
/* ID  33 */ UC_ADDR_0_LI(gai_12_33_fixed_freq_pump4), // pump4 fixed frequency
/* ID  34 */ UC_ADDR_0_LI(gai_12_34_fixed_freq_pump5), // pump5 fixed frequency
/* ID  35 */ UC_ADDR_0_LI(gai_12_35_fixed_freq_pump6) // pump6 fixed frequency
};

/**************************************************************************
 INFO TABLE
**************************************************************************/
const ID_INFO conf16_info_tab[] = 
{
/* ID   0 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // overflow_alarm_level
/* ID   1 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // high_level_alarm_level
/* ID   2 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // level_alarm_alarm_level
/* ID   3 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // dry_running_alarm_level
/* ID   4 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // foam_drain_level
/* ID   5 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_1
/* ID   6 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_2
/* ID   7 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_3
/* ID   8 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_4
/* ID   9 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_5
/* ID  10 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // start_level_pump_6
/* ID  11 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_1
/* ID  12 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_2
/* ID  13 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_3
/* ID  14 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_4
/* ID  15 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_5
/* ID  16 */ COMMON_INFO + COM_INDEX_EXT_HEAD_DOT01M, // stop_level_pump_6
/* ID  17 */ NI,
/* ID  18 */ NI,
/* ID  19 */ NI,
/* ID  20 */ COMMON_INFO + COM_INDEX_EXT_TIME_1MIN, // interlock timeout value (for return to auto)
/* ID  21 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 1 over load alarm limit
/* ID  22 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 1 under load alarm limit
/* ID  23 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 1 over load warning limit
/* ID  24 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 1 under load warning limit
/* ID  25 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 2 over load alarm limit
/* ID  26 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 2 under load alarm limit
/* ID  27 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 2 over load warning limit
/* ID  28 */ COMMON_INFO + COM_INDEX_EXT_CURRENT_DOT1A, // pump group 2 under load warning limit
/* ID  29 */ NI,
/* ID  30 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ, // pump1 fixed frequency
/* ID  31 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ, // pump2 fixed frequency
/* ID  32 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ, // pump3 fixed frequency
/* ID  33 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ, // pump4 fixed frequency
/* ID  34 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ, // pump5 fixed frequency
/* ID  35 */ COMMON_INFO + COM_INDEX_EXT_FREQUENCY_001HZ // pump6 fixed frequency
};
