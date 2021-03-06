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
/* CLASS NAME       : SurfaceTrendCtrl                                      */
/*                                                                          */
/* FILE NAME        : SurfaceTrendCtrl.h                                    */
/*                                                                          */
/* CREATED DATE     : 14-12-2007 dd-mm-yyyy                                 */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mrcSurfaceTrendCtrl_h
#define mrcSurfaceTrendCtrl_h

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include <cu351_cpu_types.h>
#include <Observer.h>
#include <subtask.h>
#include <AppTypeDefs.h>
#include <EnumDataPoint.h>
#include <FloatDataPoint.h>

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
class SurfaceTrendCtrl: public Observer, public SubTask
{
  public:
    /********************************************************************
    LIFECYCLE - Default constructor.
    ********************************************************************/
    SurfaceTrendCtrl();
    /********************************************************************
    LIFECYCLE - Destructor.
    ********************************************************************/
    ~SurfaceTrendCtrl();
    /********************************************************************
    ASSIGNMENT OPERATOR
    ********************************************************************/

    /********************************************************************
    OPERATIONS
    ********************************************************************/
    // Subject.
    void SetSubjectPointer(int Id, Subject* pSubject);
    void ConnectToSubjects();
    void Update(Subject* pSubject);
    void SubscribtionCancelled(Subject* pSubject);

    // SubTask
    virtual void RunSubTask();
    virtual void InitSubTask(void);

  private:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
    SubjectPtr<EnumDataPoint<TREND_TYPE>*> mpSurfaceTrend;
    SubjectPtr<FloatDataPoint*> mpSurfaceLevel;

    float mOldSurfaceLevel;

  protected:
    /********************************************************************
    OPERATIONS
    ********************************************************************/

    /********************************************************************
    ATTRIBUTE
    ********************************************************************/
};
#endif
