/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: WW Midrange                                      */
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
/* CLASS NAME       : BoolInputAlarmCtrl                                    */
/*                                                                          */
/* FILE NAME        : BoolInputAlarmCtrl.h                                  */
/*                                                                          */
/* CREATED DATE     : 17-04-2008 dd-mm-yyyy                                 */
/*                                                                          */
/* SHORT FILE DESCRIPTION : Class to handle alarms trigged by boolean input */
/*                                                                          */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mrcBoolInputAlarmCtrl_h
#define mrcBoolInputAlarmCtrl_h

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
#include <BoolDataPoint.h>
#include <AlarmDelay.h>

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/

/*****************************************************************************
  DEFINES
 *****************************************************************************/


/*****************************************************************************
  TYPE DEFINES
 *****************************************************************************/

/*****************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class BoolInputAlarmCtrl : public Observer, public SubTask
{
  public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    BoolInputAlarmCtrl();
    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~BoolInputAlarmCtrl();
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
    void SetSubjectPointer(int Id, Subject* pSubject);

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/

    SubjectPtr<BoolDataPoint*> mpBoolInput;

    AlarmDelay* mpAlarmDelay;
    bool mAlarmDelayCheckFlag;

    bool mRunRequestedFlag;

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
};

#endif
