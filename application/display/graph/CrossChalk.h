/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: CU 351 Plaform                                   */
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
/* CLASS NAME       : CrossChalk                                            */
/*                                                                          */
/* FILE NAME        : CrossChalk.cpp                                        */
/*                                                                          */
/* CREATED DATE     : 26-11-2009   (dd-mm-yyyy)                             */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* Uses a CurveGraphBuffer to draw a curve                                  */
/*                                                                          */
/****************************************************************************/

/*****************************************************************************
Protect against multiple inclusion through the use of guards:
****************************************************************************/
#ifndef __CrossChalk_H__
#define __CrossChalk_H__

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/


/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/

/*****************************************************************************
LOCAL INCLUDES
****************************************************************************/
#include <Chalk.h>
#include <BlackBoard.h>
#include <CurrentPointCurveData.h>

/*****************************************************************************
DEFINES
*****************************************************************************/

/*****************************************************************************
TYPE DEFINES
*****************************************************************************/
namespace mpc
{
  namespace display
  {

    class CrossChalk : public Chalk
    {
    public:
     /********************************************************************
      LIFECYCLE - Default constructor.
      ********************************************************************/
      CrossChalk(BlackBoard* pBlackBoard);
      
     /********************************************************************
      LIFECYCLE - Destructor.
      ********************************************************************/
      virtual ~CrossChalk();
      /********************************************************************
      ASSIGNMENT OPERATOR
      ********************************************************************/

      /********************************************************************
      OPERATIONS
      ********************************************************************/

      /*****************************************************************************
       * FUNCTION - Redraw
       * DESCRIPTION: Redraws on the blackboard specified during construction
       *****************************************************************************/
      virtual void Redraw();

      virtual void SetData(CurrentPointCurveData*  pData);

    private:
      /********************************************************************
      OPERATIONS
      ********************************************************************/
      void DrawCross(int xCenter, int yCenter);
      /********************************************************************
      ATTRIBUTE
      ********************************************************************/
    protected:
      /********************************************************************
      OPERATIONS
      ********************************************************************/

      /********************************************************************
      ATTRIBUTE
      ********************************************************************/
      CurrentPointCurveData*  mpData;
    }; 

  } // namespace mpc
} // namespace display

#endif
