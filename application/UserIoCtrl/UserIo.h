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
/* CLASS NAME       : UserIo                                                */
/*                                                                          */
/* FILE NAME        : UserIo.h                                              */
/*                                                                          */
/* CREATED DATE     : 15-12-2008 dd-mm-yyyy                                 */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mrcUserIo_h
#define mrcUserIo_h

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/
/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include <SubTask.h>
#include <BoolDataPoint.h>
#include <UserIoConfig.h>
#include <IoChannel.h>

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
class UserIo : public SubTask, public SwTimerBaseClass, public BoolDataPoint
{
  public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    UserIo();
    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~UserIo();
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

    virtual UserIoConfig* GetUserIoConfig();

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/
    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
    bool  mRunRequestedFlag;

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/
    bool GetOutput(void);
    
    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
    SubjectPtr<UserIoConfig*> mpUserIoConfig;
    SubjectPtr<IoChannel*> mpChannel1;
    SubjectPtr<IoChannel*> mpChannel2;

    bool mMinHoldTimeTimeOut;
    bool mMaxHoldTimeTimeOut;
};

#endif
