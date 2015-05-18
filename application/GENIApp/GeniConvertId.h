/**************************************************************************
 This file is auto-generated by FactoryGenerator, do not modify it manually
**************************************************************************/

#ifndef __GENI_CONVERT_ID_H__
#define __GENI_CONVERT_ID_H__

/**************************************************************************
 SYSTEM INCLUDES
**************************************************************************/

/**************************************************************************
 PROJECT INCLUDES
**************************************************************************/

/**************************************************************************
 LOCAL INCLUDES
**************************************************************************/

/**************************************************************************
 TYPE DEFINES
**************************************************************************/
typedef enum
{
  FIRST_GENI_CONVERT_ID = 0,
  /*******************/
  GENI_CONVERT_ID_BITVAR_254 = FIRST_GENI_CONVERT_ID,
  GENI_CONVERT_ID_BITVAR_255,
  GENI_CONVERT_ID_CURRENT_DOT1A,
  GENI_CONVERT_ID_DIMLESS_254,
  GENI_CONVERT_ID_DIMLESS_255,
  GENI_CONVERT_ID_EFFICIENCY_1WHM3,
  GENI_CONVERT_ID_ENERGY_1KWH,
  GENI_CONVERT_ID_ENERGY_JOULE_DOT1KWH,
  GENI_CONVERT_ID_ENERGY_KWH_DOT1KWH,
  GENI_CONVERT_ID_FLOW_1LS,
  GENI_CONVERT_ID_FLOW_1M3H,
  GENI_CONVERT_ID_FLOW_DOT1LS,
  GENI_CONVERT_ID_FREQUENCY_001HZ,
  GENI_CONVERT_ID_FREQUENCY_05HZ,
  GENI_CONVERT_ID_FREQUENCY_1HZ,
  GENI_CONVERT_ID_FREQUENCY_2HZ,
  GENI_CONVERT_ID_HEAD_DIST_1M,
  GENI_CONVERT_ID_HEAD_DIST_DOT01M,
  GENI_CONVERT_ID_NONE,
  GENI_CONVERT_ID_OVER_VOLUME_DOT1M3,
  GENI_CONVERT_ID_PERCENTAGE_1PCT,
  GENI_CONVERT_ID_PERCENTAGE_DOT1PCT,
  GENI_CONVERT_ID_POWER_1W,
  GENI_CONVERT_ID_PRESSURE_1MBAR,
  GENI_CONVERT_ID_RESISTANCE_10KOHM,
  GENI_CONVERT_ID_RESISTANCE_1OHM,
  GENI_CONVERT_ID_SCALE_DOT001,
  GENI_CONVERT_ID_SCALE_DOT01,
  GENI_CONVERT_ID_SCALE_DOT1,
  GENI_CONVERT_ID_SCALE_X10,
  GENI_CONVERT_ID_SCALE_X100,
  GENI_CONVERT_ID_SCALE_X1000,
  GENI_CONVERT_ID_TEMPERATURE_1C,
  GENI_CONVERT_ID_TEMPERATURE_DOT01K,
  GENI_CONVERT_ID_TEMPERATURE_DOT1C,
  GENI_CONVERT_ID_TIME_1MIN,
  GENI_CONVERT_ID_TIME_1SEC,
  GENI_CONVERT_ID_TORQUE_DOT1NM,
  GENI_CONVERT_ID_TOTAL_VOLUME_DOT1M3,
  GENI_CONVERT_ID_VOLTAGE_DOT1V,
  GENI_CONVERT_ID_VOLUME_1M3,
  GENI_CONVERT_ID_VOLUME_DOT1M3,
  /*******************/
  NO_OF_GENI_CONVERT_ID,
  LAST_GENI_CONVERT_ID = NO_OF_GENI_CONVERT_ID - 1
} GENI_CONVERT_ID_TYPE;

/**************************************************************************
 FUNCTIONS
**************************************************************************/
inline bool HasGeniNASupport(GENI_CONVERT_ID_TYPE convertID)
{
  switch (convertID)
  {
  case GENI_CONVERT_ID_BITVAR_254:
    return true;
  case GENI_CONVERT_ID_BITVAR_255:
    return false;
  case GENI_CONVERT_ID_CURRENT_DOT1A:
    return true;
  case GENI_CONVERT_ID_DIMLESS_254:
    return true;
  case GENI_CONVERT_ID_DIMLESS_255:
    return false;
  case GENI_CONVERT_ID_EFFICIENCY_1WHM3:
    return true;
  case GENI_CONVERT_ID_ENERGY_1KWH:
    return true;
  case GENI_CONVERT_ID_ENERGY_JOULE_DOT1KWH:
    return true;
  case GENI_CONVERT_ID_ENERGY_KWH_DOT1KWH:
    return true;
  case GENI_CONVERT_ID_FLOW_1LS:
    return true;
  case GENI_CONVERT_ID_FLOW_1M3H:
    return true;
  case GENI_CONVERT_ID_FLOW_DOT1LS:
    return true;
  case GENI_CONVERT_ID_FREQUENCY_001HZ:
    return true;
  case GENI_CONVERT_ID_FREQUENCY_05HZ:
    return true;
  case GENI_CONVERT_ID_FREQUENCY_1HZ:
    return true;
  case GENI_CONVERT_ID_FREQUENCY_2HZ:
    return true;
  case GENI_CONVERT_ID_HEAD_DIST_1M:
    return true;
  case GENI_CONVERT_ID_HEAD_DIST_DOT01M:
    return true;
  case GENI_CONVERT_ID_NONE:
    return false;
  case GENI_CONVERT_ID_OVER_VOLUME_DOT1M3:
    return true;
  case GENI_CONVERT_ID_PERCENTAGE_1PCT:
    return true;
  case GENI_CONVERT_ID_PERCENTAGE_DOT1PCT:
    return true;
  case GENI_CONVERT_ID_POWER_1W:
    return true;
  case GENI_CONVERT_ID_PRESSURE_1MBAR:
    return true;
  case GENI_CONVERT_ID_RESISTANCE_10KOHM:
    return true;
  case GENI_CONVERT_ID_RESISTANCE_1OHM:
    return true;
  case GENI_CONVERT_ID_SCALE_DOT001:
    return true;
  case GENI_CONVERT_ID_SCALE_DOT01:
    return true;
  case GENI_CONVERT_ID_SCALE_DOT1:
    return true;
  case GENI_CONVERT_ID_SCALE_X10:
    return true;
  case GENI_CONVERT_ID_SCALE_X100:
    return true;
  case GENI_CONVERT_ID_SCALE_X1000:
    return true;
  case GENI_CONVERT_ID_TEMPERATURE_1C:
    return true;
  case GENI_CONVERT_ID_TEMPERATURE_DOT01K:
    return true;
  case GENI_CONVERT_ID_TEMPERATURE_DOT1C:
    return true;
  case GENI_CONVERT_ID_TIME_1MIN:
    return true;
  case GENI_CONVERT_ID_TIME_1SEC:
    return true;
  case GENI_CONVERT_ID_TORQUE_DOT1NM:
    return true;
  case GENI_CONVERT_ID_TOTAL_VOLUME_DOT1M3:
    return true;
  case GENI_CONVERT_ID_VOLTAGE_DOT1V:
    return true;
  case GENI_CONVERT_ID_VOLUME_1M3:
    return true;
  case GENI_CONVERT_ID_VOLUME_DOT1M3:
    return true;
  }
  return true; // we should never ever get here
}
#endif
