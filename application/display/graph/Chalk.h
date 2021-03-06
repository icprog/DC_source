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
/* CLASS NAME       : Chalk                                                 */
/*                                                                          */
/* FILE NAME        : Chalk.h                                               */
/*                                                                          */
/* CREATED DATE     : 29-07-2007   (dd-mm-yyyy)                             */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This class is the base class for drawing on a BlackBoard                 */
/****************************************************************************/

/*****************************************************************************
Protect against multiple inclusion through the use of guards:
****************************************************************************/
#ifndef __CHALK_H__
#define __CHALK_H__

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/


/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/
#include <Observer.h>

/*****************************************************************************
LOCAL INCLUDES
****************************************************************************/

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

    /*****************************************************************************
    FORWARDS
    *****************************************************************************/
    class BlackBoard;
    
    /*****************************************************************************
    * CLASS: Chalk
    * DESCRIPTION:
    * Abstract base class for a piece of chalk.
    *****************************************************************************/
    class Chalk 
    {
    public:
     /********************************************************************
      LIFECYCLE - Default constructor.
      ********************************************************************/
      Chalk(BlackBoard* pBlackBoard);
      
     /********************************************************************
      LIFECYCLE - Destructor.
      ********************************************************************/
      virtual ~Chalk();
      
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
     virtual void Redraw() = 0;

    private:
     /********************************************************************
      OPERATIONS
      ********************************************************************/
      
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
     BlackBoard*   mpBlackBoard;   // our blackboard to draw on

    }; // class component

  } // namespace mpc
} // namespace display

#endif

