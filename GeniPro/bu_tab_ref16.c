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
const ID_PTR ref16_tab[] = 
{
/* ID   0 */ UC_ADDR_0_LI(gai_13_0_event_log_clear_id), // event_log_clear_id
/* ID   1 */ UC_ADDR_0_LI(gai_13_1_ana_out_user_1), // 
/* ID   2 */ UC_ADDR_0_LI(gai_13_2_ana_out_user_2), // 
/* ID   3 */ UC_ADDR_0_LI(gai_13_3_ana_out_user_3), // 
/* ID   4 */ UC_ADDR_0_LI(gai_13_4_set_h2s_level), // 
/* ID   5 */ UC_ADDR_0_LI(gai_13_5_set_h2s_fault), // 
/* ID   6 */ UC_ADDR_0_LI(gai_13_6_set_dosing_ref) // 
};

/**************************************************************************
 INFO TABLE
**************************************************************************/
const ID_INFO ref16_info_tab[] = 
{
/* ID   0 */ COMMON_INFO + COM_INDEX_EXT_DIMLESS_255, // event_log_clear_id
/* ID   1 */ COMMON_INFO + COM_INDEX_EXT_PERCENTAGE_DOT1PCT, // 
/* ID   2 */ COMMON_INFO + COM_INDEX_EXT_PERCENTAGE_DOT1PCT, // 
/* ID   3 */ COMMON_INFO + COM_INDEX_EXT_PERCENTAGE_DOT1PCT, // 
/* ID   4 */ COMMON_INFO + COM_INDEX_EXT_PERCENTAGE_1PPM, // 
/* ID   5 */ BITVAR_255, // 
/* ID   6 */ COMMON_INFO + COM_INDEX_EXT_FLOW_DOT1LH // 
};
