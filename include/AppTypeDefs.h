/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: WW MidRange                                      */
/*               --------------------------------------------               */
/*                                                                          */
/*               (C) Copyright Grundfos                                     */
/*               All rights reserved                                        */
/*               --------------------------------------------               */
/*                                                                          */
/*               As this is the  property of  GRUNDFOS  it                  */
/*               must not be passed on to any person not aut-               */
/*               horized  by GRUNDFOS or be  copied or other-               */
/*               wise  utilized by anybody without GRUNDFOS'                */
/*               expressed written permission.                              */
/****************************************************************************/
/* CLASS NAME       : AppTypeDefs                                           */
/*                                                                          */
/* FILE NAME        : AppTypeDefs.h                                         */
/*                                                                          */
/* CREATED DATE     : 01-07-2007                                            */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef __APP_TYPE_DEFS_H__
#define __APP_TYPE_DEFS_H__

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/

/*****************************************************************************
  DEFINES
 *****************************************************************************/
// The product name used on web pages
const char PRODUCT_NAME[] = "WW Dedicated Controls";
#ifdef TFT_16_BIT_LCD
  // The CU number is used in strings
  #define CU_NUMBER "362"
  #define HW_NAME "CU 362"
#else
  #define CU_NUMBER "361"
  #define HW_NAME "CU 361"
#endif

#define MAX_NO_OF_PUMPS 6

#define MAX_NO_OF_FLOAT_SWITCHES 5

// number of combi alarms times two (each combi alarm has two sources)
#define NO_OF_COMBI_ALARM_SOURCES 8

#define MAX_NO_OF_IO351               3

#define NO_OF_DIG_INPUTS_IOB          3
#define NO_OF_DIG_INPUTS_IO351        9
#define MAX_NO_OF_DIG_INPUTS          (NO_OF_DIG_INPUTS_IOB + (MAX_NO_OF_IO351 * NO_OF_DIG_INPUTS_IO351))

#define NO_OF_PTC_INPUTS_IO351        6
#define MAX_NO_OF_PTC_INPUTS          (MAX_NO_OF_IO351 * NO_OF_PTC_INPUTS_IO351)

#define MAX_NO_OF_ANA_OUTPUTS_IO351   3
#define MAX_NO_OF_ANA_OUTPUTS         (MAX_NO_OF_IO351 * MAX_NO_OF_ANA_OUTPUTS_IO351)

#define NO_OF_EXTRA_FAULTS 4

#if NO_OF_EXTRA_FAULTS != 4
  #pragma message("NO_OF_EXTRA_FAULTS is changed, source code must be reviewed!")
#endif


#if MAX_NO_OF_PUMPS != 6
  #pragma message("MAX_NO_OF_PUMPS is changed, source code must be reviewed!")
#endif

#if MAX_NO_OF_FLOAT_SWITCHES != 5
  #pragma message("MAX_NO_OF_FLOAT_SWITCHES is changed, source code must be reviewed!")
#endif

#define NO_OF_USD_COUNTERS 3

/*****************************************************************************
  TYPE DEFINES
 *****************************************************************************/

//Pumps
typedef  enum
{
  PUMP_1 = 0,
  PUMP_2,
  PUMP_3,
  PUMP_4,
  PUMP_5,
  PUMP_6,
  NO_OF_PUMP,
  FIRST_PUMP = PUMP_1,
  LAST_PUMP = NO_OF_PUMP - 1,

  NO_OF_PUMPS = NO_OF_PUMP,
  FIRST_PUMP_NO = FIRST_PUMP,
  LAST_PUMP_NO = LAST_PUMP
} PUMP_TYPE;


 // system mode
typedef  enum
{
  SYSTEM_MODE_ALARM = 0,
  SYSTEM_MODE_READY,
  NO_OF_SYSTEM_MODE,
  FIRST_SYSTEM_MODE = 0,
  LAST_SYSTEM_MODE = NO_OF_SYSTEM_MODE - 1
} SYSTEM_MODE_TYPE;

 // application mode
typedef  enum
{
  // Note: This enum list must be in sync with the pit_opr_mode description in the Geni profile
  APPLICATION_MODE_STANDBY                    = 0,
  APPLICATION_MODE_STARTUP_DELAY              = 1,
  APPLICATION_MODE_PUMPING                    = 2,
  APPLICATION_MODE_STOP_DELAY                 = 3,
  APPLICATION_MODE_PUMPING_MAX                = 4,
  APPLICATION_MODE_OFF                        = 5,
  APPLICATION_MODE_FOAM_DRAINING              = 6,
  APPLICATION_MODE_DAILY_EMPTYING             = 7,
  APPLICATION_MODE_ANTISEIZING                = 8,
  APPLICATION_MODE_MANUAL_CONTROL             = 9,
  APPLICATION_MODE_INTERLOCKED                = 10,
  APPLICATION_MODE_MAINS_FAILURE              = 11,
  APPLICATION_MODE_LEVEL_SENSOR_ERROR         = 12,
  APPLICATION_MODE_ALL_PUMP_ALARMS            = 13,
  APPLICATION_MODE_ALL_PUMPS_OUT_OF_OPERATION = 14,
  APPLICATION_MODE_SERVICE_MODE               = 15,
  // insert above
  NO_OF_APPLICATION_MODE,
  FIRST_APPLICATION_MODE = 0,
  LAST_APPLICATION_MODE = NO_OF_APPLICATION_MODE - 1
} APPLICATION_MODE_TYPE;

// operation mode
typedef  enum
{
  OPERATION_MODE_NO_OPERATION = 0,
  // insert operation mode above
  NO_OF_OPERATION_MODE,
  FIRST_OPERATION_MODE = 0,
  LAST_OPERATION_MODE = NO_OF_OPERATION_MODE - 1
} OPERATION_MODE_TYPE;

// actual operation mode
typedef  enum
{
  ACTUAL_OPERATION_MODE_NOT_INSTALLED = 0,
  ACTUAL_OPERATION_MODE_DISABLED,
  ACTUAL_OPERATION_MODE_STOPPED,
  ACTUAL_OPERATION_MODE_STARTED,
  NO_OF_ACTUAL_OPERATION_MODE,
  FIRST_ACTUAL_OPERATION_MODE = 0,
  LAST_ACTUAL_OPERATION_MODE = NO_OF_ACTUAL_OPERATION_MODE - 1
} ACTUAL_OPERATION_MODE_TYPE;

// req operation mode
typedef  enum
{
  REQ_OPERATION_MODE_OFF = 0,
  REQ_OPERATION_MODE_ON,
  REQ_OPERATION_MODE_AUTO,
  NO_OF_REQ_OPERATION_MODE,
  FIRST_REQ_OPERATION_MODE = 0,
  LAST_REQ_OPERATION_MODE = NO_OF_REQ_OPERATION_MODE - 1
} REQ_OPERATION_MODE_TYPE;

// pump operation mode
typedef enum
{
  PUMP_OPERATION_MODE_PUMP_OFF = 0,
  PUMP_OPERATION_MODE_PUMP_ON,
  NO_OF_PUMP_OPERATION_MODE,
  FIRST_PUMP_OPERATION_MODE = 0,
  LAST_PUMP_OPERATION_MODE = NO_OF_PUMP_OPERATION_MODE - 1
}PUMP_OPERATION_MODE_TYPE;

// mixer operation mode
typedef  enum
{
  MIXER_OPERATION_MODE_NOT_INSTALLED = 0,
  MIXER_OPERATION_MODE_STOPPED,
  MIXER_OPERATION_MODE_STARTED,
  NO_OF_MIXER_OPERATION_MODE,
  FIRST_MIXER_OPERATION_MODE = 0,
  LAST_MIXER_OPERATION_MODE = NO_OF_MIXER_OPERATION_MODE - 1
} MIXER_OPERATION_MODE_TYPE;

typedef enum
{
  /* Do not change sequence without changing GeniSlaveIf! */
  CUE_OPERATION_MODE_PUMP_OFF = 0,
  CUE_OPERATION_MODE_PUMP_ON,
  CUE_OPERATION_MODE_PUMP_MIN,
  CUE_OPERATION_MODE_PUMP_MAX,
  NO_OF_CUE_OPERATION_MODE,
  FIRST_CUE_OPERATION_MODE = 0,
  LAST_CUE_OPERATION_MODE = NO_OF_CUE_OPERATION_MODE - 1
}CUE_OPERATION_MODE_TYPE;

typedef enum
{
  /* Do not change sequence without changing GeniSlaveIf! */
  CUE_SYSTEM_MODE_PUMP_WARNING = 0,
  CUE_SYSTEM_MODE_PUMP_ALARM,
  CUE_SYSTEM_MODE_PUMP_READY,
  NO_OF_CUE_SYSTEM_MODE,
  FIRST_CUE_SYSTEM_MODE = 0,
  LAST_CUE_SYSTEM_MODE = NO_OF_CUE_SYSTEM_MODE - 1
}CUE_SYSTEM_MODE_TYPE;

typedef enum
{
  /* Do not change sequence without changing GeniSlaveIf! */
  CUE_LOOP_MODE_PUMP_CONST_PRESS = 0,
  CUE_LOOP_MODE_PUMP_PROP_PRESS,
  CUE_LOOP_MODE_PUMP_CONST_FREQ,
  CUE_LOOP_MODE_PUMP_AUTO,
  NO_OF_CUE_LOOP_MODE,
  FIRST_CUE_LOOP_MODE = 0,
  LAST_CUE_LOOP_MODE = NO_OF_CUE_LOOP_MODE - 1
}CUE_LOOP_MODE_TYPE;

typedef enum
{
  /* Do not change sequence without changing GeniSlaveIf! */
  CUE_SOURCE_MODE_LOCAL = 0,
  CUE_SOURCE_MODE_REMOTE,
  NO_OF_CUE_SOURCE_MODE,
  FIRST_CUE_SOURCE_MODE = 0,
  LAST_CUE_SOURCE_MODE = NO_OF_CUE_SOURCE_MODE - 1
}CUE_SOURCE_MODE_TYPE;

// Float Switch Config
typedef  enum
{
  FSW_NOT_DEFINED = 0,
  FSW_DRY_RUN,
  FSW_DRY_RUN_A,
  FSW_STOP_ALL,
  FSW_STOP,
  FSW_STOP1,
  FSW_STOP2,
  FSW_STOP3,
  FSW_STOP4,
  FSW_STOP5,
  FSW_STOP6,
  FSW_START_STOP,
  FSW_START1_STOP,
  FSW_START,
  FSW_START1,
  FSW_START2,
  FSW_START3,
  FSW_START4,
  FSW_START5,
  FSW_START6,
  FSW_START_ALL,
  FSW_ALARM,
  FSW_HIGH_WATER_A,
  FSW_HIGH_WATER,
  FSW_OVERFLOW,
  FSW_ERROR,

  // insert float switch config above
  NO_OF_FSW,
  FIRST_FSW = 0,
  LAST_FSW = NO_OF_FSW - 1
} FSW_TYPE;

// Pump ref    //TEST JSM Must be deleted
typedef  enum
{
  PUMP_REF_NO_PUMPS = 0,
  PUMP_REF_PUMP_ONE,
  PUMP_REF_PUMP_TWO,
  PUMP_REF_BOTH_PUMPS,

  // insert pump ref above
  NO_OF_PUMP_REF,
  FIRST_PUMP_REF = 0,
  LAST_PUMP_REF = NO_OF_PUMP_REF - 1
} PUMP_REF_TYPE;



// control source
typedef enum
{
  CONTROL_SOURCE_HMI = 0,
  CONTROL_SOURCE_DI,
  CONTROL_SOURCE_GENI_BUS,
  CONTROL_SOURCE_GENI_SERVICE,
  CONTROL_SOURCE_ALARM,
  CONTROL_SOURCE_SCADA,
  CONTROL_SOURCE_SERVICE,
  CONTROL_SOURCE_SYSTEM,

  // insert control mode above
  NO_OF_CONTROL_SOURCE,
  FIRST_CONTROL_SOURCE = 0,
  LAST_CONTROL_SOURCE = NO_OF_CONTROL_SOURCE - 1
} CONTROL_SOURCE_TYPE;

// source mode
typedef enum
{
  SOURCE_MODE_LOCAL = 0,
  SOURCE_MODE_REMOTE,

  // insert source mode above
  NO_OF_SOURCE_MODE,
  FIRST_SOURCE_MODE = 0,
  LAST_SOURCE_MODE = NO_OF_SOURCE_MODE - 1
} SOURCE_MODE_TYPE;

// sensor electric
typedef enum
{
  SENSOR_ELECTRIC_TYPE_0_20mA = 0,
  SENSOR_ELECTRIC_TYPE_4_20mA,
  SENSOR_ELECTRIC_TYPE_0_10V,
  SENSOR_ELECTRIC_TYPE_2_10V,
  SENSOR_ELECTRIC_DISABLED,

  // insert sensor electric above
  NO_OF_SENSOR_ELECTRIC,
  FIRST_SENSOR_ELECTRIC = 0,
  LAST_SENSOR_ELECTRIC = NO_OF_SENSOR_ELECTRIC - 1
} SENSOR_ELECTRIC_TYPE;

// digital input function states
typedef enum
{
  DIGITAL_INPUT_FUNC_STATE_NOT_ACTIVE = 0,
  DIGITAL_INPUT_FUNC_STATE_ACTIVE,
  DIGITAL_INPUT_FUNC_STATE_NOT_CONFIGURED,

  // insert digital input function states above
  NO_OF_DIGITAL_INPUT_FUNC_STATE,
  FIRST_DIGITAL_INPUT_FUNC_STATE = 0,
  LAST_DIGITAL_INPUT_FUNC_STATE = NO_OF_DIGITAL_INPUT_FUNC_STATE - 1
} DIGITAL_INPUT_FUNC_STATE_TYPE;

// digital input functions
typedef enum
{
  DIGITAL_INPUT_FUNC_NO_FUNCTION = 0,
  DIGITAL_INPUT_FUNC_EXTERNAL_FAULT,
  DIGITAL_INPUT_FUNC_ALARM_RESET,
  DIGITAL_INPUT_FUNC_ALARM_RELAY_RESET,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_1,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_1,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_2,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_2,
  DIGITAL_INPUT_FUNC_FLOAT_SWITCH_1,
  DIGITAL_INPUT_FUNC_FLOAT_SWITCH_2,
  DIGITAL_INPUT_FUNC_FLOAT_SWITCH_3,
  DIGITAL_INPUT_FUNC_FLOAT_SWITCH_4,
  DIGITAL_INPUT_FUNC_FLOAT_SWITCH_5,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_1,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_2,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_MIXER,
  DIGITAL_INPUT_FUNC_FAIL_PHASE,
  DIGITAL_INPUT_FUNC_ENERGY_CNT,
  DIGITAL_INPUT_FUNC_VOLUME_CNT,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_1,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_2,
  DIGITAL_INPUT_FUNC_ANTI_SEIZING,
  DIGITAL_INPUT_FUNC_DAILY_EMPTYING,
  DIGITAL_INPUT_FUNC_FOAM_DRAINING,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_3,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_3,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_4,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_4,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_5,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_5,
  DIGITAL_INPUT_FUNC_ON_OFF_PUMP_6,
  DIGITAL_INPUT_FUNC_AUTO_MAN_PUMP_6,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_3,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_4,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_5,
  DIGITAL_INPUT_FUNC_CONTACTOR_FEEDBACK_PUMP_6,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_3,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_4,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_5,
  DIGITAL_INPUT_FUNC_MOTOR_PROTECTION_PUMP_6,
  DIGITAL_INPUT_FUNC_INTERLOCK,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_1,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_2,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_3,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_4,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_5,
  DIGITAL_INPUT_FUNC_VFD_READY_PUMP_6,
  DIGITAL_INPUT_FUNC_OVERFLOW_SWITCH,
  DIGITAL_INPUT_FUNC_USERDEFINE_CNT_1,
  DIGITAL_INPUT_FUNC_USERDEFINE_CNT_2,
  DIGITAL_INPUT_FUNC_USERDEFINE_CNT_3,
  DIGITAL_INPUT_FUNC_GAS_DETECTOR,
  DIGITAL_INPUT_FUNC_WATER_ON_PIT_FLOOR,
  DIGITAL_INPUT_FUNC_EXTRA_FAULT_1,
  DIGITAL_INPUT_FUNC_EXTRA_FAULT_2,
  DIGITAL_INPUT_FUNC_EXTRA_FAULT_3,
  DIGITAL_INPUT_FUNC_EXTRA_FAULT_4,
  DIGITAL_INPUT_FUNC_SERVICE_MODE,
  DIGITAL_INPUT_FUNC_DOSING_PUMP,

  // insert digital input functions above
  NO_OF_DIGITAL_INPUT_FUNC,
  FIRST_DIGITAL_INPUT_FUNC = 0,
  LAST_DIGITAL_INPUT_FUNC = NO_OF_DIGITAL_INPUT_FUNC - 1
} DIGITAL_INPUT_FUNC_TYPE;

// PTC input functions
typedef enum
{
  PTC_INPUT_FUNC_NO_FUNCTION = 0,

  FIRST_PTC_1_INPUT_FUNC,
  PTC_INPUT_FUNC_PTC_1_PUMP_1 = FIRST_PTC_1_INPUT_FUNC,
  PTC_INPUT_FUNC_PTC_1_PUMP_2,
  PTC_INPUT_FUNC_PTC_1_PUMP_3,
  PTC_INPUT_FUNC_PTC_1_PUMP_4,
  PTC_INPUT_FUNC_PTC_1_PUMP_5,
  PTC_INPUT_FUNC_PTC_1_PUMP_6,
  LAST_PTC_1_INPUT_FUNC,
  
  FIRST_PTC_2_INPUT_FUNC = LAST_PTC_1_INPUT_FUNC,
  PTC_INPUT_FUNC_PTC_2_PUMP_1 = FIRST_PTC_2_INPUT_FUNC,
  PTC_INPUT_FUNC_PTC_2_PUMP_2, 
  PTC_INPUT_FUNC_PTC_2_PUMP_3, 
  PTC_INPUT_FUNC_PTC_2_PUMP_4, 
  PTC_INPUT_FUNC_PTC_2_PUMP_5, 
  PTC_INPUT_FUNC_PTC_2_PUMP_6,   
  LAST_PTC_2_INPUT_FUNC,

  FIRST_MOISTURE_INPUT_FUNC = LAST_PTC_2_INPUT_FUNC,
  PTC_INPUT_FUNC_MOISTURE_PUMP_1 = FIRST_MOISTURE_INPUT_FUNC,
  PTC_INPUT_FUNC_MOISTURE_PUMP_2,
  PTC_INPUT_FUNC_MOISTURE_PUMP_3,
  PTC_INPUT_FUNC_MOISTURE_PUMP_4,
  PTC_INPUT_FUNC_MOISTURE_PUMP_5,
  PTC_INPUT_FUNC_MOISTURE_PUMP_6,
  LAST_MOISTURE_INPUT_FUNC,

  // insert PTC input functions above
  NO_OF_PTC_INPUT_ALARM_FUNC = LAST_MOISTURE_INPUT_FUNC,
  FIRST_PTC_INPUT_FUNC = 0,
  LAST_PTC_INPUT_FUNC = NO_OF_PTC_INPUT_ALARM_FUNC - 1
} PTC_INPUT_FUNC_TYPE;

// counter input functions
typedef enum
{
  COUNTER_INPUT_FUNC_VOLUME_PULSES = 0,
  COUNTER_INPUT_FUNC_ENERGY_PULSES,
  COUNTER_INPUT_FUNC_USER_DEFINED_1_PULSES,
  COUNTER_INPUT_FUNC_USER_DEFINED_2_PULSES,
  COUNTER_INPUT_FUNC_USER_DEFINED_3_PULSES,

  // insert counter input functions above
  NO_OF_COUNTER_INPUT_FUNC,
  FIRST_COUNTER_INPUT_FUNC = 0,
  LAST_COUNTER_INPUT_FUNC = NO_OF_COUNTER_INPUT_FUNC - 1
} COUNTER_INPUT_FUNC_TYPE;

// relay functions
typedef enum
{
  RELAY_FUNC_NO_FUNCTION = 0,
  RELAY_FUNC_SYSTEM_READY,    //Platform
  RELAY_FUNC_SYSTEM_OPERATION,//Platform
  RELAY_FUNC_SYSTEM_WARNING,  //Platform
  RELAY_FUNC_SYSTEM_ALARM,    //Platform
  RELAY_FUNC_PUMP_1,
  RELAY_FUNC_PUMP_2,
  RELAY_FUNC_MIXER,
  RELAY_FUNC_RELAY_CUSTOM,
  RELAY_FUNC_ALARM_RELAY_CUSTOM,
  RELAY_FUNC_ALARM_RELAY_HIGH_LEVEL,
  RELAY_FUNC_ALARM_RELAY_CRITICAL,
  RELAY_FUNC_ALARM_RELAY_ALL_ALARMS,
  RELAY_FUNC_ALARM_RELAY_ALL_ALARMS_AND_WARNINGS,
  RELAY_FUNC_USER_IO_1,
  RELAY_FUNC_USER_IO_2,
  RELAY_FUNC_USER_IO_3,
  RELAY_FUNC_USER_IO_4,
  RELAY_FUNC_USER_IO_5,
  RELAY_FUNC_USER_IO_6,
  RELAY_FUNC_USER_IO_7,
  RELAY_FUNC_USER_IO_8,
  RELAY_FUNC_PUMP_3,
  RELAY_FUNC_PUMP_4,
  RELAY_FUNC_PUMP_5,
  RELAY_FUNC_PUMP_6,
  RELAY_FUNC_VFD_1_REVERSE,
  RELAY_FUNC_VFD_2_REVERSE,
  RELAY_FUNC_VFD_3_REVERSE,
  RELAY_FUNC_VFD_4_REVERSE,
  RELAY_FUNC_VFD_5_REVERSE,
  RELAY_FUNC_VFD_6_REVERSE,
  RELAY_FUNC_DOSING_PUMP,

  // insert relay functions above
  NO_OF_RELAY_FUNC,
  FIRST_RELAY_FUNC = 0,
  LAST_RELAY_FUNC = NO_OF_RELAY_FUNC - 1
} RELAY_FUNC_TYPE;

// Analog output functions
typedef enum
{
  ANA_OUT_FUNC_NO_FUNCTION = 0,
  ANA_OUT_FUNC_LEVEL,
  ANA_OUT_FUNC_VFD_1,
  ANA_OUT_FUNC_VFD_2,
  ANA_OUT_FUNC_VFD_3,
  ANA_OUT_FUNC_VFD_4,
  ANA_OUT_FUNC_VFD_5,
  ANA_OUT_FUNC_VFD_6,
  ANA_OUT_FUNC_USER_DEFINED_1,
  ANA_OUT_FUNC_USER_DEFINED_2,
  ANA_OUT_FUNC_USER_DEFINED_3,
  ANA_OUT_FUNC_DOSING_PUMP,

  // insert analog output functions above
  NO_OF_ANA_OUT_FUNC,
  FIRST_ANA_OUT_FUNC = 0,
  LAST_ANA_OUT_FUNC = NO_OF_ANA_OUT_FUNC - 1
} ANA_OUT_FUNC_TYPE;

// measured value
typedef enum
{
  MEASURED_VALUE_NOT_SELECTED = 0,
  MEASURED_VALUE_INLET_PRESS,          // not used (from platform)
  MEASURED_VALUE_DISCHARGE_PRESS,      // not used (from platform)
  MEASURED_VALUE_PUMP_DIFF_PRESS,      // not used (from platform)
  MEASURED_VALUE_FLOW,
  MEASURED_VALUE_LEVEL_ULTRA_SOUND,
  MEASURED_VALUE_LEVEL_PRESSURE,
  MEASURED_VALUE_MOTOR_CURRENT_PUMP_1,
  MEASURED_VALUE_MOTOR_CURRENT_PUMP_2,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_1,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_2,
  MEASURED_VALUE_INSULATION_RESISTANCE,// not used
  MEASURED_VALUE_POWER,
  MEASURED_VALUE_USER_DEFINED_SOURCE_1,
  MEASURED_VALUE_USER_DEFINED_SOURCE_2,
  MEASURED_VALUE_USER_DEFINED_SOURCE_3,

  MEASURED_VALUE_MOTOR_CURRENT_PUMP_3,
  MEASURED_VALUE_MOTOR_CURRENT_PUMP_4,
  MEASURED_VALUE_MOTOR_CURRENT_PUMP_5,
  MEASURED_VALUE_MOTOR_CURRENT_PUMP_6,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_3,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_4,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_5,
  MEASURED_VALUE_WATER_IN_OIL_PUMP_6,

  MEASURED_VALUE_OUTLET_PRESSURE,
  MEASURED_VALUE_POWER_PUMP_1,
  MEASURED_VALUE_POWER_PUMP_2,
  MEASURED_VALUE_POWER_PUMP_3,
  MEASURED_VALUE_POWER_PUMP_4,
  MEASURED_VALUE_POWER_PUMP_5,
  MEASURED_VALUE_POWER_PUMP_6,
  MEASURED_VALUE_CHEMICAL_CONTAINER,

  // insert measured value above
  NO_OF_MEASURED_VALUE,
  FIRST_MEASURED_VALUE = 0,
  LAST_MEASURED_VALUE = NO_OF_MEASURED_VALUE - 1
} MEASURED_VALUE_TYPE;

// status led state
typedef enum
{
  /* Do not change sequence without changing GeniAppInterface! */
  STATUS_LED_STATE_OFF = 0,
  STATUS_LED_STATE_ON,
  STATUS_LED_STATE_FLASHING,

  // insert status led state above
  NO_OF_STATUS_LED_STATE,
  FIRST_STATUS_LED_STATE = 0,
  LAST_STATUS_LED_STATE = NO_OF_STATUS_LED_STATE - 1
} STATUS_LED_STATE_TYPE;

// firmware update
typedef enum
{
  FIRMWARE_UPDATE_STATE_START = 0,              //0
  FIRMWARE_UPDATE_STATE_ERASINGPRI,             //1
  FIRMWARE_UPDATE_STATE_ERASINGSEC,
  FIRMWARE_UPDATE_STATE_IDLE,                   //3
  FIRMWARE_UPDATE_STATE_PROGRAMMINGPRI,         //4
  FIRMWARE_UPDATE_STATE_PROGRAMMINGSEC,         //5
  FIRMWARE_UPDATE_STATE_SUCCESS,                //6
  FIRMWARE_UPDATE_STATE_RESETPRIMARYCOUNT,
  FIRMWARE_UPDATE_STATE_RESETSECONDARYCOUNT,
  FIRMWARE_UPDATE_STATE_FAILUREINTERN,          //9
  FIRMWARE_UPDATE_STATE_FAILUREFLASHWRITE,      //10
  FIRMWARE_UPDATE_STATE_FAILUREPING,            //11
  FIRMWARE_UPDATE_STATE_FAILURENETWORKDOWN,     //12
  FIRMWARE_UPDATE_STATE_FAILURENOTFTPSERVER,    //13
  FIRMWARE_UPDATE_STATE_FAILURETFTPERROR,       //14

  FIRMWARE_UPDATE_STATE_STARTBL = 100,          //100
  FIRMWARE_UPDATE_STATE_RECEIVINGBL,            //101
  FIRMWARE_UPDATE_STATE_ERASINGBL,              //102
  FIRMWARE_UPDATE_STATE_PROGRAMMINGBL,          //103

  FIRST_FIRMWARE_UPDATE_STATE = 0,
  LAST_FIRMWARE_UPDATE_STATE = FIRMWARE_UPDATE_STATE_PROGRAMMINGBL
} FIRMWARE_UPDATE_STATE_TYPE;

// sensor type
typedef enum
{
  SENSOR_TYPE_FLOAT_SWITCHES = 0,
  SENSOR_TYPE_PRESSURE,
  SENSOR_TYPE_ULTRA_SONIC,

  NO_OF_SENSOR_TYPE,
  FIRST_SENSOR_TYPE = 0,
  LAST_SENSOR_TYPE = NO_OF_SENSOR_TYPE - 1
} SENSOR_TYPE_TYPE;

// combi alarm sources
typedef enum
{
  ALARM_NOT_USED = 0,
  ALARM_HIGH_LEVEL,
  ALARM_ALARM_LEVEL,
  ALARM_OVERFLOW,
  ALARM_ALL_PUMPS_IN_ALARM,
  ALARM_PUMP_1_IN_ALARM,
  ALARM_PUMP_2_IN_ALARM,
  ALARM_PUMP_3_IN_ALARM,
  ALARM_PUMP_4_IN_ALARM,
  ALARM_PUMP_5_IN_ALARM,
  ALARM_PUMP_6_IN_ALARM,
  ALARM_GENI_ERROR_PUMP_1,
  ALARM_GENI_ERROR_PUMP_2,
  ALARM_GENI_ERROR_PUMP_3,
  ALARM_GENI_ERROR_PUMP_4,
  ALARM_GENI_ERROR_PUMP_5,
  ALARM_GENI_ERROR_PUMP_6,
  ALARM_GENI_ERROR_ANY_PUMP,
  ALARM_ANY_PUMP_IN_ALARM,
  ALARM_USER_IO_1,
  ALARM_USER_IO_2,
  ALARM_USER_IO_3,
  ALARM_USER_IO_4,
  ALARM_USER_IO_5,
  ALARM_USER_IO_6,
  ALARM_USER_IO_7,
  ALARM_USER_IO_8,

  NO_OF_ALARM,
  FIRST_ALARM = 0,
  LAST_ALARM = NO_OF_ALARM - 1
} ALARM_TYPE;


// alarm modes
typedef enum
{
	ALARM_WARNING_NOT_USED = 0,
	NO_ALARM_WARNING = ALARM_WARNING_NOT_USED,
	ALARM,
	WARNING,
	NO_OF_ALARM_MODE,
  FIRST_ALARM_MODE = 0,
	LAST_ALARM_MODE = NO_OF_ALARM_MODE - 1  
} ALARM_MODE;

// flash ID type
// numeric value MUST be between 0 and 255 (8 bit)
// DO NOT CHANGE THE VALUES!
typedef enum
{
  FLASH_ID_U8_DATA_POINT                = 0,
  FLASH_ID_I16_DATA_POINT               = 1,
  FLASH_ID_U16_DATA_POINT               = 2,
  FLASH_ID_I32_DATA_POINT               = 3,
  FLASH_ID_U32_DATA_POINT               = 4,
  FLASH_ID_FLOAT_DATA_POINT             = 5,
  FLASH_ID_STRING_DATA_POINT            = 6,
  FLASH_ID_BOOL_DATA_POINT              = 7,
  FLASH_ID_ENUM_DATA_POINT              = 8,
  FLASH_ID_I32_VECTOR_DATA_POINT        = 9,
  FLASH_ID_FLOAT_VECTOR_DATA_POINT      = 10,
  FLASH_ID_ALARM_LOG                    = 11,
  FLASH_ID_ALARM_DATA_POINT             = 12,
  FLASH_ID_ALARM_CONFIG                 = 13,
  FLASH_ID_BOOL_VECTOR_DATA_POINT       = 14,
  FLASH_ID_U8_VECTOR_DATA_POINT         = 15,
  FLASH_ID_U16_VECTOR_DATA_POINT        = 16,
  FLASH_ID_U32_VECTOR_DATA_POINT        = 17,
  FLASH_ID_EVENT_LOG_VECTOR_DATA_POINT  = 18,
  FLASH_ID_IO_CHANNEL_CONFIG            = 19,
  FLASH_ID_USER_IO_CONFIG               = 20,
  FLASH_ID_DOUBLE_VECTOR_DATA_POINT     = 21,

  FLASH_ID_MOTOR_INFO_DATA_POINT        = 100,
  LEARNING_TORQUE_DATA_POINT            = 101,
  LEARNING_PRESSURE_DATA_POINT          = 102

} FLASH_ID_TYPE;

// flash save type
// numeric value MUST be between 0 and 15 (5 bit)
// DO NOT CHANGE THE VALUES!
typedef enum
{
	FLASH_SAVE_VALUE	= 0,
	FLASH_SAVE_ALL		= 1
} FLASH_SAVE_TYPE;


typedef enum
{
  ALARM_CRITERIA_LT   = 0, // <
  ALARM_CRITERIA_LTE  = 1, // <=
  ALARM_CRITERIA_E    = 2, // =
  ALARM_CRITERIA_GTE  = 3, // >=
  ALARM_CRITERIA_GT   = 4  // >
} ALARM_CRITERIA_TYPE;

typedef enum
{
  ALARM_CATEGORY_NONE = 0,
  ALARM_CATEGORY_WARNING,
  ALARM_CATEGORY_ALARM,
  ALARM_CATEGORY_WARNING_ALARM,
  NO_OF_ALARM_CATEGORY,
  FIRST_ALARM_CATEGORY = 0,
  LAST_ALARM_CATEGORY = NO_OF_ALARM_CATEGORY - 1
} ALARM_CATEGORY_TYPE;

// alarm configs
typedef enum
{
  AC_SYS_ALARM_OVERFLOW = 0,
  AC_SYS_ALARM_HIGH_LEVEL,
  AC_SYS_ALARM_LEVEL,
  AC_SYS_ALARM_DRY_RUNNING,
  AC_SYS_ALARM_FLOAT_SWITCH,
  AC_SYS_ALARM_LEVEL_SENSOR,
  AC_SYS_ALARM_CONFLICTING_LEVELS,
  AC_SYS_ALARM_FLOW_METER,
  AC_SYS_ALARM_POWER_METER,
  AC_SYS_ALARM_FORCED_RELAY_OUTPUT_ENABLED,
  AC_SYS_ALARM_HW_FAULT,
  AC_SYS_ALARM_EXTERNAL_FAULT,
  AC_SYS_ALARM_MAINS_VOLTAGE,
  AC_SYS_ALARM_UPS,
  AC_SYS_ALARM_COM_ERROR_IO351,
  AC_SYS_ALARM_CIU_CARD_FAILURE,
  AC_SYS_ALARM_SCADA_CALLBACK,
  AC_SYS_ALARM_ETHERNET_NO_ADDRESS,
  AC_SYS_ALARM_ETHERNET_MISUSED,
  AC_SYS_ALARM_SIM_CARD,
  AC_SYS_ALARM_USER_DEFINED_SENSOR_1,
  AC_SYS_ALARM_USER_DEFINED_SENSOR_2,
  AC_SYS_ALARM_USER_DEFINED_SENSOR_3,
  AC_SYS_ALARM_PRESSURE_SENSOR_OUTLET_PIPELINE,
  AC_SYS_ALARM_GAS_DETECTOR,
  AC_SYS_ALARM_WATER_ON_PIT_FLOOR,
  AC_SYS_ALARM_EXTRA_FAULT_1,
  AC_SYS_ALARM_EXTRA_FAULT_2,
  AC_SYS_ALARM_EXTRA_FAULT_3,
  AC_SYS_ALARM_EXTRA_FAULT_4,
  AC_SYS_ALARM_DDA_FAULT,
  AC_SYS_ALARM_DOSING_PUMP,

  AC_FIRST_SYSTEM_ALARM = AC_SYS_ALARM_OVERFLOW,
  AC_LAST_SYSTEM_ALARM = AC_SYS_ALARM_DOSING_PUMP,

  AC_PUMP_ALARM_ON_OFF_AUTO_SWITCH,
  AC_PUMP_ALARM_MOTOR_PROTECTION_TRIPPED,
  AC_PUMP_ALARM_COMMON_PHASE_ERROR,
  AC_PUMP_ALARM_CONTACTOR,
  AC_PUMP_ALARM_LOW_FLOW,
  AC_PUMP_ALARM_OVERTEMP_PTC_IO351,
  AC_PUMP_ALARM_WATER_IN_OIL,
  AC_PUMP_ALARM_WATER_IN_OIL_SENSOR,
  AC_PUMP_ALARM_MOTOR_CURRENT_OVERLOAD,
  AC_PUMP_ALARM_MOTOR_CURRENT_UNDERLOAD,
  AC_PUMP_ALARM_LATEST_RUNTIME,
  AC_PUMP_ALARM_MAX_STARTS_HOUR,
  AC_PUMP_ALARM_TIME_FOR_SERVICE,
  AC_PUMP_ALARM_GENIBUS_COM_ERROR_IO111,
  AC_PUMP_ALARM_IO111_WARNING,
  AC_PUMP_ALARM_IO111_ERROR,
  AC_PUMP_ALARM_AMPEREMETER_FAULT,
  AC_PUMP_ALARM_TORGUE,
  AC_PUMP_ALARM_VFD_NOT_READY,
  AC_PUMP_ALARM_CUE_WARNING,
  AC_PUMP_ALARM_CUE_ALARM,
  AC_PUMP_ALARM_MP204_WARNING,
  AC_PUMP_ALARM_MP204_ALARM,
  AC_PUMP_ALARM_POWER_METER,
  AC_PUMP_ALARM_BLOCKED,
  AC_PUMP_ALARM_MOISTURE_PTC_IO351,

  AC_FIRST_PUMP_ALARM = AC_PUMP_ALARM_ON_OFF_AUTO_SWITCH,
  AC_LAST_PUMP_ALARM = AC_PUMP_ALARM_MOISTURE_PTC_IO351,

  AC_MIX_ALARM_MIXER_CONTACTOR,
  AC_MIX_ALARM_MIXER_SERVICE_TIME,
  AC_MIX_ALARM_MIXER_STARTS_HOUR,
  AC_FIRST_MIXER_ALARM = AC_MIX_ALARM_MIXER_CONTACTOR,
  AC_LAST_MIXER_ALARM = AC_MIX_ALARM_MIXER_STARTS_HOUR,

  AC_COMBI_ALARM_1,
  AC_COMBI_ALARM_2,
  AC_COMBI_ALARM_3,
  AC_COMBI_ALARM_4,
  AC_FIRST_COMBI_ALARM = AC_COMBI_ALARM_1,
  AC_LAST_COMBI_ALARM = AC_COMBI_ALARM_4,  

  NO_OF_ALARM_CONFIG,
  FIRST_ALARM_CONFIG = 0,
  LAST_ALARM_CONFIG = NO_OF_ALARM_CONFIG - 1
} ALARM_CONFIG_TYPE;


typedef enum
{
  WEEKDAY_MONDAY = 0,
  WEEKDAY_TUESDAY,
  WEEKDAY_WEDNESDAY,
  WEEKDAY_THURSDAY,
  WEEKDAY_FRIDAY,
  WEEKDAY_SATURDAY,
  WEEKDAY_SUNDAY,
  NO_OF_WEEKDAY,
  FIRST_WEEKDAY = 0,
  LAST_WEEKDAY = NO_OF_WEEKDAY - 1
} WEEKDAY_TYPE;

typedef enum
{
  PHONE_NO_1 = 0,
  PHONE_NO_2,
  PHONE_NO_3,
  // insert above here
  NO_OF_PHONE_NO,
  FIRST_PHONE_NO = 0,
  LAST_PHONE_NO = NO_OF_PHONE_NO - 1
} PHONE_NO_TYPE;


typedef enum
{
  SMS_CATEGORY_WORK = 0,
  SMS_CATEGORY_OFF,
  SMS_CATEGORY_SLEEP,
  SMS_CATEGORY_NONE,
  // insert above here
  NO_OF_SMS_CATEGORY,
  FIRST_SMS_CATEGORY = 0,
  LAST_SMS_CATEGORY = NO_OF_SMS_CATEGORY - 1
} SMS_CATEGORY_TYPE;

typedef enum
{
  SMS_SCHEDULE_PERIOD_1 = 0,
  SMS_SCHEDULE_PERIOD_2,
  SMS_SCHEDULE_PERIOD_3,
  // insert above here
  NO_OF_SMS_SCHEDULE_PERIOD,
  FIRST_SMS_SCHEDULE_PERIOD = 0,
  LAST_SMS_SCHEDULE_PERIOD = NO_OF_SMS_SCHEDULE_PERIOD - 1
} SMS_SCHEDULE_PERIOD_TYPE;

typedef enum
{
  SMS_SCHEDULE_TYPE_WORK_OFF_SLEEP = 0,
  SMS_SCHEDULE_TYPE_PRIMARY_NO,
  SMS_SCHEDULE_TYPE_SECONDARY_NO,
  // insert above here
  NO_OF_SMS_SCHEDULE_TYPE,
  FIRST_SMS_SCHEDULE_TYPE = 0,
  LAST_SMS_SCHEDULE_TYPE = NO_OF_SMS_SCHEDULE_TYPE - 1
} SMS_SCHEDULE_TYPE_TYPE;


typedef enum
{
  TREND_RISING = 0,
  TREND_STEADY,
  TREND_FALLING,
  // insert above here
  NO_OF_TREND,
  FIRST_TREND = 0,
  LAST_TREND = NO_OF_TREND - 1
} TREND_TYPE;

typedef enum
{
  SMS_RECIPIENT_PRI = 0,
  SMS_RECIPIENT_PRI_SEC,
  SMS_RECIPIENT_PRI_SEC_IF_NO_ACK,
  // insert above here
  NO_OF_SMS_RECIPIENT,
  FIRST_SMS_RECIPIENT = 0,
  LAST_SMS_RECIPIENT = NO_OF_SMS_RECIPIENT -1
}SMS_RECIPIENT_TYPE;

typedef enum
{
  SMS_AUTHORISE_METHOD_NONE = 0,
  SMS_AUTHORISE_METHOD_PNONE_NUMBER,
  SMS_AUTHORISE_METHOD_PINCODE,
  SMS_AUTHORISE_METHOD_BOTH,
  // insert above here
  NO_OF_SMS_AUTHORISE_METHOD,
  FIRST_SMS_AUTHORISE_METHOD = 0,
  LAST_SMS_AUTHORISE_METHOD = NO_OF_SMS_AUTHORISE_METHOD -1
}SMS_AUTHORISE_METHOD_TYPE;

// Volume pulse unit setting
typedef enum
{
  PULSE_VOLUME_UNIT_M3 = 0,
  PULSE_VOLUME_UNIT_L,
  PULSE_VOLUME_UNIT_GAL,

  // insert new items above
  NO_OF_PULSE_VOLUME_UNIT,
  FIRST_PULSE_VOLUME_UNIT = 0,
  LAST_PULSE_VOLUME_UNIT = NO_OF_PULSE_VOLUME_UNIT - 1
} PULSE_VOLUME_UNIT_TYPE;

// Energy pulse unit setting
typedef enum
{
  PULSE_ENERGY_UNIT_KWH = 0,
  PULSE_ENERGY_UNIT_MWH,

  // insert new items above
  NO_OF_PULSE_ENERGY_UNIT,
  FIRST_PULSE_ENERGY_UNIT = 0,
  LAST_PULSE_ENERGY_UNIT = NO_OF_PULSE_ENERGY_UNIT - 1
} PULSE_ENERGY_UNIT_TYPE;

// GSM signal level
typedef enum
{
  GSM_SIGNAL_LEVEL_0 = 0,
  GSM_SIGNAL_LEVEL_1,
  GSM_SIGNAL_LEVEL_2,
  GSM_SIGNAL_LEVEL_3,
  GSM_SIGNAL_LEVEL_4,
  GSM_SIGNAL_LEVEL_5,
  GSM_SIGNAL_LEVEL_UNKNOWN,
  GSM_SIGNAL_LEVEL_NO_SIGNAL,

  // insert new items above
  NO_OF_GSM_SIGNAL_LEVEL,
  FIRST_GSM_SIGNAL_LEVEL = 0,
  LAST_GSM_SIGNAL_LEVEL = NO_OF_GSM_SIGNAL_LEVEL - 1
} GSM_SIGNAL_LEVEL_TYPE;

// SIM card status
typedef enum
{
  SIM_CARD_STATUS_READY = 0,
  SIM_CARD_STATUS_PIN_INVALID,
  SIM_CARD_STATUS_PUK_INVALID,
  SIM_CARD_STATUS_SIM_NOT_PRESENT,
  SIM_CARD_STATUS_DEFECT,
  SIM_CARD_STATUS_WRONG_TYPE,
  SIM_CARD_STATUS_BUSY,
  SIM_CARD_STATUS_SERVICE_CENTER_NO_MISSING,

  // insert new items above
  NO_OF_SIM_CARD_STATUS,
  FIRST_SIM_CARD_STATUS = 0,
  LAST_SIM_CARD_STATUS = NO_OF_SIM_CARD_STATUS - 1
} SIM_CARD_STATUS_TYPE;


// Communication card setting
typedef enum
{
  COM_CARD_NONE = 0,
  COM_CARD_CIM_050_RS_485,
  COM_CARD_CIM_100_LON,
  COM_CARD_CIM_110_LON_MPC,
  COM_CARD_CIM_150_PROFIBUS,
  COM_CARD_CIM_200_MODBUS,
  COM_CARD_CIM_250_GSM,
  COM_CARD_CIM_270_GRM,
  COM_CARD_CIM_300_BACNET,

  COM_CARD_OTHER_CARD,
  // insert above here
  NO_OF_COM_CARD,
  FIRST_COM_CARD = 0,
  LAST_COM_CARD = NO_OF_COM_CARD - 1
} COM_CARD_TYPE;


// Communication state
typedef enum
{
  COM_STATE_DETACHED = 0,
  COM_STATE_ATTACHED,
  COM_STATE_CONTEXT_ACTIVE,
  COM_STATE_CONNECTED,
  // insert above here
  NO_OF_COM_STATE,
  FIRST_COM_STATE = 0,
  LAST_COM_STATE = NO_OF_COM_STATE - 1
} COM_STATE_TYPE;

// Battery state
typedef enum
{
  BATTERY_STATE_WRONG_POLARITY = 0,
  BATTERY_STATE_BATTERY_DEFECT,
  BATTERY_STATE_BATTERY_MISSING,
  BATTERY_STATE_LOW_BATTERY,
  BATTERY_STATE_SHORT_CIRCUIT,
  BATTERY_STATE_OK,
  // insert above here
  NO_OF_BATTERY_STATE,
  FIRST_BATTERY_STATE = 0,
  LAST_BATTERY_STATE = NO_OF_BATTERY_STATE - 1
} BATTERY_STATE_TYPE;

// IO device status
typedef  enum
{
  IO_DEVICE_STATUS_NOT_PRESENT = 0,
  IO_DEVICE_STATUS_PRESENT_AND_OK,
  IO_DEVICE_STATUS_PRESENT_WITH_ERROR,
  IO_DEVICE_STATUS_NO_COMMUNICATION,
  // insert above here
  NO_OF_IO_DEVICE_STATUS,
  FIRST_IO_DEVICE_STATUS = 0,
  LAST_IO_DEVICE_STATUS = NO_OF_IO_DEVICE_STATUS - 1
} IO_DEVICE_STATUS_TYPE;

// Flow quality
typedef  enum
{
  FLOW_QUALITY_NO_FLOW_MEASUREMENT = 0,
  FLOW_QUALITY_FLOW_METER,
  FLOW_QUALITY_VOLUME_METER,
  FLOW_QUALITY_ADVANCED_FLOW_ESTIMATION,
  FLOW_QUALITY_LEVEL_SENSOR,
  // insert above here
  NO_OF_FLOW_QUALITY,
  FIRST_FLOW_QUALITY = 0,
  LAST_FLOW_QUALITY = NO_OF_FLOW_QUALITY - 1
} FLOW_QUALITY_TYPE;

// Io board type
typedef enum
{
  IOB_BOARD_ID_0 = 0,
  IOB_BOARD_ID_1 = 1,
  IOB_BOARD_ID_2 = 2,
  IOB_BOARD_ID_3 = 3,
  // insert above here
  NO_OF_IOB_BOARD_ID,
  FIRST_IOB_BOARD_ID = 0,
  LAST_IOB_BOARD_ID = NO_OF_IOB_BOARD_ID - 1
} IOB_BOARD_ID_TYPE;


// Overflow month
typedef enum
{
  OVERFLOW_MONTH_JAN = 0,
  OVERFLOW_MONTH_FEB,
  OVERFLOW_MONTH_MAR,
  OVERFLOW_MONTH_APR,
  OVERFLOW_MONTH_MAY,
  OVERFLOW_MONTH_JUN,
  OVERFLOW_MONTH_JUL,
  OVERFLOW_MONTH_AUG,
  OVERFLOW_MONTH_SEP,
  OVERFLOW_MONTH_OCT,
  OVERFLOW_MONTH_NOV,
  OVERFLOW_MONTH_DEC,
  NO_OF_OVERFLOW_MONTH,
  FIRST_OVERFLOW_MONTH = 0,
  LAST_OVERFLOW_MONTH = NO_OF_OVERFLOW_MONTH - 1
} OVERFLOW_MONTH_TYPE;

// Overflow method
typedef enum
{
  OVERFLOW_METHOD_NONE = 0,
  OVERFLOW_METHOD_1,
  OVERFLOW_METHOD_2,
  OVERFLOW_METHOD_3,
  OVERFLOW_METHOD_4,
  OVERFLOW_METHOD_5,
  OVERFLOW_METHOD_6,
  OVERFLOW_METHOD_7,
  // insert new items above
  NO_OF_OVERFLOW_METHOD,
  FIRST_OVERFLOW_METHOD = 0,
  LAST_OVERFLOW_METHOD = NO_OF_OVERFLOW_METHOD - 1
} OVERFLOW_METHOD_TYPE;

// Authentication setting for gsm:
typedef enum
{
  GSM_AUTHENTICATION_NORMAL = 0,
  GSM_AUTHENTICATION_SECURE,
  // insert above here
  NO_OF_GSM_AUTHENTICATION,
  FIRST_GSM_AUTHENTICATION = 0,
  LAST_GSM_AUTHENTICATION = NO_OF_GSM_AUTHENTICATION - 1
} GSM_AUTHENTICATION_TYPE;

// (virtual) I/O channel source
typedef enum
{
  CHANNEL_SOURCE_CONSTANT_VALUE = 0,
  CHANNEL_SOURCE_TIMER_FUNC,
  CHANNEL_SOURCE_USER_IO,
  CHANNEL_SOURCE_COMBI_ALARM,
  CHANNEL_SOURCE_AI_FUNC,
  CHANNEL_SOURCE_AI_INDEX_CU_361,
  CHANNEL_SOURCE_AI_INDEX_IO_351_1,
  CHANNEL_SOURCE_AI_INDEX_IO_351_2,
  CHANNEL_SOURCE_AI_INDEX_IO_351_3,
  CHANNEL_SOURCE_AI_INDEX_IO_111_1,
  CHANNEL_SOURCE_AI_INDEX_IO_111_2,
  CHANNEL_SOURCE_AI_INDEX_IO_111_3,
  CHANNEL_SOURCE_AI_INDEX_IO_111_4,
  CHANNEL_SOURCE_AI_INDEX_IO_111_5,
  CHANNEL_SOURCE_AI_INDEX_IO_111_6,
  CHANNEL_SOURCE_DI_FUNC,
  CHANNEL_SOURCE_DI_INDEX_CU_361,
  CHANNEL_SOURCE_DI_INDEX_IO_351_1,
  CHANNEL_SOURCE_DI_INDEX_IO_351_2,
  CHANNEL_SOURCE_DI_INDEX_IO_351_3,
  CHANNEL_SOURCE_DI_INDEX_IO_111_1,
  CHANNEL_SOURCE_DI_INDEX_IO_111_2,
  CHANNEL_SOURCE_DI_INDEX_IO_111_3,
  CHANNEL_SOURCE_DI_INDEX_IO_111_4,
  CHANNEL_SOURCE_DI_INDEX_IO_111_5,
  CHANNEL_SOURCE_DI_INDEX_IO_111_6,
  CHANNEL_SOURCE_SYSTEM_STATES,

  // insert new items above
  NO_OF_CHANNEL_SOURCE,
  FIRST_CHANNEL_SOURCE = 0,
  LAST_CHANNEL_SOURCE = NO_OF_CHANNEL_SOURCE - 1
}CHANNEL_SOURCE_TYPE;

// User I/O logic
typedef enum
{
  USER_IO_LOGIC_AND = 0,
  USER_IO_LOGIC_OR,
  USER_IO_LOGIC_XOR,
  USER_IO_LOGIC_SET_RESET_LATCH, //channel one sets high, channel two resets (if ch1=low)
  USER_IO_LOGIC_RESET_SET_LATCH, //channel one sets low, channel two sets (if ch1=low)
  USER_IO_LOGIC_TOGGLE_LATCH,
  // insert new items above
  NO_OF_USER_IO_LOGIC,
  FIRST_USER_IO_LOGIC = 0,
  LAST_USER_IO_LOGIC = NO_OF_USER_IO_LOGIC - 1
}USER_IO_LOGIC_TYPE;

// User defined I/O (= User defined function)
typedef enum
{
  USER_IO_1 = 1,
  USER_IO_2,
  USER_IO_3,
  USER_IO_4,
  USER_IO_5,
  USER_IO_6,
  USER_IO_7,
  USER_IO_8,
  // insert new items above
  NO_OF_USER_IO = USER_IO_8,
  FIRST_USER_IO = 1,
  LAST_USER_IO = USER_IO_8
} USER_IO_TYPE;

// Sources for User-Defined Functions (= I/O Channel)
typedef enum
{
  USER_FUNC_SOURCE_1_1 = 1,
  USER_FUNC_SOURCE_2_1,
  USER_FUNC_SOURCE_3_1,
  USER_FUNC_SOURCE_4_1,
  USER_FUNC_SOURCE_5_1,
  USER_FUNC_SOURCE_6_1,
  USER_FUNC_SOURCE_7_1,
  USER_FUNC_SOURCE_8_1,
  USER_FUNC_SOURCE_1_2,
  USER_FUNC_SOURCE_2_2,
  USER_FUNC_SOURCE_3_2,
  USER_FUNC_SOURCE_4_2,
  USER_FUNC_SOURCE_5_2,
  USER_FUNC_SOURCE_6_2,
  USER_FUNC_SOURCE_7_2,
  USER_FUNC_SOURCE_8_2,
  // insert new items above
  NO_OF_USER_FUNC_SOURCE = USER_FUNC_SOURCE_8_2,
  FIRST_USER_FUNC_SOURCE = USER_FUNC_SOURCE_1_1,
  LAST_USER_FUNC_SOURCE = USER_FUNC_SOURCE_8_2
} USER_FUNC_SOURCE_TYPE;


typedef enum
{
  CHANNEL_SOURCE_DATATYPE_AI = 0,
  CHANNEL_SOURCE_DATATYPE_DI,
  CHANNEL_SOURCE_DATATYPE_ALARM,
  CHANNEL_SOURCE_DATATYPE_TIMER,
  CHANNEL_SOURCE_DATATYPE_CONSTANT,
  CHANNEL_SOURCE_DATATYPE_USERIO,
  CHANNEL_SOURCE_DATATYPE_SYSTEM_STATES,
  // insert new items above
  NO_OF_CHANNEL_SOURCE_DATATYPE,
  FIRST_CHANNEL_SOURCE_DATATYPE = 0,
  LAST_CHANNEL_SOURCE_DATATYPE = NO_OF_CHANNEL_SOURCE_DATATYPE - 1
}CHANNEL_SOURCE_DATATYPE_TYPE;


// VFD operation mode
typedef enum
{
  VFD_OPERATION_MODE_NOT_IN_CONTROL = 0,
  VFD_OPERATION_MODE_INIT,
  VFD_OPERATION_MODE_STOP,
  VFD_OPERATION_MODE_REV_FLUSH,
  VFD_OPERATION_MODE_START_FLUSH,
  VFD_OPERATION_MODE_NORMAL,
  VFD_OPERATION_MODE_RUN_FLUSH,
  VFD_OPERATION_MODE_STOP_FLUSH,

  // insert new items above
  NO_OF_VFD_OPERATION_MODE,
  FIRST_VFD_OPERATION_MODE = 0,
  LAST_VFD_OPERATION_MODE = NO_OF_VFD_OPERATION_MODE - 1
} VFD_OPERATION_MODE_TYPE;

// VFD run mode
typedef enum
{
  VFD_RUN_MODE_FIXED_FREQUENCY = 0,
  VFD_RUN_MODE_LINEAR_REGULATION,
  VFD_RUN_MODE_MINIMUM_REGULATION,
  VFD_RUN_MODE_PID_REGULATION,
  // insert new items above
  NO_OF_VFD_RUN_MODE,
  FIRST_VFD_RUN_MODE = 0,
  LAST_VFD_RUN_MODE = NO_OF_VFD_RUN_MODE - 1
} VFD_RUN_MODE_TYPE;

// VFD reaction to other pumps mode
typedef enum
{
  VFD_REACTION_MODE_STOP = 0,
  VFD_REACTION_MODE_CONTINUE,
  VFD_REACTION_MODE_MAX_SPEED,
  // insert new items above
  NO_OF_VFD_REACTION_MODE,
  FIRST_VFD_REACTION_MODE = 0,
  LAST_VFD_REACTION_MODE = NO_OF_VFD_REACTION_MODE - 1
} VFD_REACTION_MODE_TYPE;

// Anti blocking request
typedef enum
{
  ANTI_BLOCKING_REQUEST_IDLE = 0,
  ANTI_BLOCKING_REQUEST_AWAIT_REVERSE,
  ANTI_BLOCKING_REQUEST_REVERSE_FLUSH,
  ANTI_BLOCKING_REQUEST_AWAIT_FORWARD,
  ANTI_BLOCKING_REQUEST_FORWARD_FLUSH,

  // insert new items above
  NO_OF_ANTI_BLOCKING_REQUEST,
  FIRST_ANTI_BLOCKING_REQUEST = 0,
  LAST_ANTI_BLOCKING_REQUEST = NO_OF_ANTI_BLOCKING_REQUEST - 1
} ANTI_BLOCKING_REQUEST_TYPE;

// Pump groups
typedef enum
{
  PUMP_GROUP_1 = 0,
  PUMP_GROUP_2,
  // insert above here
  NO_OF_PUMP_GROUPS,
  FIRST_PUMP_GROUP = 0,
  LAST_PUMP_GROUP = NO_OF_PUMP_GROUPS - 1
} PUMP_GROUP_TYPE;

// PID types
typedef enum
{
  PID_TYPE_P = 0,
  PID_TYPE_PI,
  PID_TYPE_PD,
  PID_TYPE_PID,
  // insert above here
  NO_OF_PID_TYPE,
  FIRST_PID_TYPE = 0,
  LAST_PID_TYPE = NO_OF_PID_TYPE - 1
} PID_TYPE_TYPE;

typedef enum
{
  PID_SETPOINT_TYPE_FIXED = 0,
  PID_SETPOINT_TYPE_ANALOG_INPUT,
  // insert above here
  NO_OF_PID_SETPOINT_TYPE,
  FIRST_PID_SETPOINT_TYPE = 0,
  LAST_PID_SETPOINT_TYPE = NO_OF_PID_SETPOINT_TYPE - 1
} PID_SETPOINT_TYPE_TYPE;


 // Type of flow calculation
typedef  enum
{
  FLOW_CALCULATION_DISABLED = 0,
  FLOW_CALCULATION_PIT_BASED,
  FLOW_CALCULATION_ADVANCED,
  // insert above here
  NO_OF_FLOW_CALCULATION,
  FIRST_FLOW_CALCULATION = 0,
  LAST_FLOW_CALCULATION = NO_OF_FLOW_CALCULATION - 1
} FLOW_CALCULATION_TYPE;

// Types of IO11x unit types
typedef enum
{
  IO11X_UNIT_TYPE_IO111_WITH_3_WIRE_SENSOR = 1,
  IO11X_UNIT_TYPE_IO111_WITH_POWERLINE_SENSOR = 2,
  IO11X_UNIT_TYPE_IO111_WITH_SM111 = 3,

  IO11X_UNIT_TYPE_IO113_WITH_PUMP_C_AND_SM111_V2 = 4,   // Pump, PC
  IO11X_UNIT_TYPE_IO113_WITH_PUMP_A_AND_SENSORS = 5,    // Pump, PA
  IO11X_UNIT_TYPE_IO113_WITH_PUMP_B_AND_SM111_V2 = 6,   // Pump, PB
  IO11X_UNIT_TYPE_IO113_WITH_PUMP_D_AND_SENSORS = 7,    // Pump, PD
  IO11X_UNIT_TYPE_IO113_WITH_MIXER_C_AND_SM111_V2 = 8,  // Mixer, MC
  IO11X_UNIT_TYPE_IO113_WITH_MIXER_A_AND_SENSORS = 9,   // Mixer, MA
                                        // -
  IO11X_UNIT_TYPE_IO113_WITH_MIXER_D_AND_SENSORS = 11,   // Mixer, MD

  IO11X_UNIT_TYPE_NOT_AVAILABLE = 0xFF,

  //NO_OF_IO11X_UNIT_TYPE,
  FIRST_IO11X_UNIT_TYPE = 1,
  LAST_IO11X_UNIT_TYPE = IO11X_UNIT_TYPE_NOT_AVAILABLE

} IO11X_UNIT_TYPE_TYPE;

typedef enum
{
  SCADA_STATE_IDLE = 0,
  SCADA_STATE_CONNECTED,
  SCADA_STATE_NOT_CONNECTED,     

  // insert states above
  NO_OF_SCADA_STATES,
  FIRST_SCADA_STATE = 0,
  LAST_SCADA_STATE = NO_OF_SCADA_STATES - 1
}SCADA_STATE_TYPE;

typedef  enum
{
  PHONE_CALL_STATE_IDLE           = 0,
  PHONE_CALL_STATE_CB_CALLUP      = 1,
  PHONE_CALL_STATE_CB_AWAIT_RETRY = 2,
  PHONE_CALL_STATE_CU_CONNECTION  = 3,
  PHONE_CALL_STATE_CB_CONNECTION  = 4,

  // insert states above
  NO_OF_PHONE_CALL_STATE,
  FIRST_PHONE_CALL_STATE = 0,
  LAST_PHONE_CALL_STATE = NO_OF_PHONE_CALL_STATE - 1
} PHONE_CALL_STATE_TYPE;

typedef enum
{
  DOSING_PUMP_TYPE_DDA = 0,
  DOSING_PUMP_TYPE_ANALOG = 1,
  
  // insert states above
  NO_OF_DOSING_PUMP_TYPE,
  FIRST_DOSING_PUMP_TYPE = 0,
  LAST_DOSING_PUMP_TYPE = NO_OF_DOSING_PUMP_TYPE - 1
} DOSING_PUMP_TYPE_TYPE;
#endif
