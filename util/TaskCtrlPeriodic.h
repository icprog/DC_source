/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: MPC                                              */
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
/* CLASS NAME       : TaskCtrlPeriodic                                              */
/*                                                                          */
/* FILE NAME        : TaskCtrlPeriodic.h                                            */
/*                                                                          */
/* CREATED DATE     : 21-09-2004  (dd-mm-yyyy)                              */
/*                                                                          */
/* SHORT FILE DESCRIPTION : Class specification TaskCtrlPeriodic                    */
/****************************************************************************/

/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mpcTaskCtrlPeriodic_h
#define mpcTaskCtrlPeriodic_h

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include <cu351_cpu_types.h>
#include <SubTask.h>
#include <queue>
#include <list>

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/

/*****************************************************************************
  DEFINES
 *****************************************************************************/

/*****************************************************************************
  TYPE DEFINES
 *****************************************************************************/

class SubTask;
/*****************************************************************************
 * CLASS:
 * DESCRIPTION: PID controller for closed loop control
 *
 *****************************************************************************/
class TaskCtrlPeriodic : public TaskCtrl
{
  public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    TaskCtrlPeriodic(void);

    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~TaskCtrlPeriodic(void);

    /********************************************************************
    ASSIGNMENT OPERATORS
    ********************************************************************/

    /********************************************************************
    OPERATIONS
    ********************************************************************/
    void RunSubTasks(void);

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTES
    ********************************************************************/

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
};
#endif

