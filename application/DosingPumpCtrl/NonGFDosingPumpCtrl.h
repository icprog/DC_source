/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: H2S Prevention                                     */
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
/* CLASS NAME       : NonGFDosingPumpCtrl                                               */
/*                                                                          */
/* FILE NAME        : NonGFDosingPumpCtrl.h                                     */
/*                                                                          */
/* CREATED DATE     : 05-07-2013 dd-mm-yyyy                                 */
/*                                                                          */
/* SHORT FILE DESCRIPTION : Controls the DDA functionality */
/*                                                                          */
/*                                                                          */
/*                                                                          */
/*                                                                          */
/*                                                                          */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mrcDosingPumpCtrl_h
#define mrcDosingPumpCtrl_h 

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/
#include <AppTypeDefs.h>

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include "cu351_cpu_types.h"
#include <Observer.h>
#include <SubTask.h>
#include <SwTimerBassClass.h>
#include <SwTimer.h>
#include <EnumDataPoint.h>
#include <BoolDataPoint.h>
#include <U32DataPoint.h>
#include <U16DataPoint.h>
#include <FloatDataPoint.h>
#include <AlarmDelay.h>
#include <U8DataPoint.h>

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/

/*****************************************************************************
  DEFINES
 *****************************************************************************/


/*****************************************************************************
  TYPE DEFINES
 *****************************************************************************/

typedef enum
{
  FIRST_DOSING_PUMP_FAULT_OBJ,
  DOSING_PUMP_FAULT_OBJ = FIRST_DOSING_PUMP_FAULT_OBJ,
  //DDA_FAULT_OBJ_EMPTY_TANK,

  NO_OF_DOSING_PUMP_FAULT_OBJ,
  LAST_DOSING_PUMP_FAULT_OBJ = NO_OF_DOSING_PUMP_FAULT_OBJ - 1
}DOSING_PUMP_FAULT_OBJ_TYPE;


/*****************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class NonGFDosingPumpCtrl : public SubTask, public SwTimerBaseClass
{
  public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    NonGFDosingPumpCtrl();
    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~NonGFDosingPumpCtrl();
    /********************************************************************
    ASSIGNMENT OPERATOR
    ********************************************************************/

    /********************************************************************
    OPERATIONS
    ********************************************************************/
    void InitSubTask();
    void RunSubTask();
    void Update(Subject* pSubject);
    void SubscribtionCancelled(Subject* pSubject);
    void ConnectToSubjects();
    void SetSubjectPointer(int id, Subject* pSubject);
    void StartNonGFDosingPump();
    void StopNonGFDosingPump();

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/

    SubjectPtr<BoolDataPoint*>                                mpAnalogDosingPumpInstalled;
    SubjectPtr<FloatDataPoint*>                               mpChemicalTotalDosed;
    SubjectPtr<U32DataPoint*>                                 mpRunningDosingVolume;
    SubjectPtr<FloatDataPoint*>                               mpDosingVolumeTotalLog;
    SubjectPtr<FloatDataPoint*>                               mpDosingRefAct;
    SubjectPtr<EnumDataPoint<DIGITAL_INPUT_FUNC_STATE_TYPE>*> mpDosingPumpDigInRequest;
    SubjectPtr<FloatDataPoint*>                               mpDosingPumpAOSetting;
    SubjectPtr<BoolDataPoint*>                                mpDosingPumpStart;
    SubjectPtr<EnumDataPoint<ACTUAL_OPERATION_MODE_TYPE>*>    mpOprModeDosingPump;

    /* Variables for alarm handling */
    SubjectPtr<AlarmDataPoint*> mDosingPumpAlarms[NO_OF_DOSING_PUMP_FAULT_OBJ];
    AlarmDelay* mpDosingPumpAlarmDelay[NO_OF_DOSING_PUMP_FAULT_OBJ];
    bool mDosingPumpAlarmDelayCheckFlag[NO_OF_DOSING_PUMP_FAULT_OBJ];

    float         mLastChemicalTotalDosed;
    bool          mRestartFlag;

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
};

#endif
