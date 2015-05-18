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
/* CLASS NAME       : GeniSlaveAddrUpdateCtrl                               */
/*                                                                          */
/* FILE NAME        : GeniSlaveAddrUpdateCtrl.h                             */
/*                                                                          */
/* CREATED DATE     : 13-03-2012 dd-mm-yyyy                                 */
/*                                                                          */
/* SHORT FILE DESCRIPTION : Handling set of GENI slave address              */
/*                                                                          */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mrcGeniSlaveAddrUpdateCtrl_h
#define mrcGeniSlaveAddrUpdateCtrl_h

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
#include <EventDataPoint.h>
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



/*****************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class GeniSlaveAddrUpdateCtrl : public SubTask, public Observer
{
public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    GeniSlaveAddrUpdateCtrl();
    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~GeniSlaveAddrUpdateCtrl();
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

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/


    /********************************************************************
    ATTRIBUTE
    ********************************************************************/

    SubjectPtr<U8DataPoint*> mpSlaveUnitNumber;
    SubjectPtr<EventDataPoint*> mpChangeSlaveUnitNumberEvent;

    bool mChangePendingFlag;

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
};

#endif
