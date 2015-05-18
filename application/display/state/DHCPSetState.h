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
/* CLASS NAME       : DHCPSetState                                           */
/*                                                                          */
/* FILE NAME        : DHCPSetState.h                                         */
/*                                                                          */
/* CREATED DATE     : 2004-09-01                                            */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This Class is responsible for how to show a text.                        */
/*                                                                          */
/****************************************************************************/
/*****************************************************************************
Protect against multiple inclusion through the use of guards:
****************************************************************************/
#ifndef mpc_displayDHCPSetState_h
#define mpc_displayDHCPSetState_h

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/

/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/
/*****************************************************************************
LOCAL INCLUDES
****************************************************************************/
#include "State.h"
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
    * CLASS:
    * DESCRIPTION:
    *
    * This Class is responsible for how to show a DHCPSetState string given by a DataPoint
    *
    *****************************************************************************/
    class DHCPSetState : public State
    {
    public:
      /********************************************************************
      LIFECYCLE - Default constructor.
      ********************************************************************/
      DHCPSetState(Component* pParent = NULL);
      /********************************************************************
      LIFECYCLE - Destructor.
      ********************************************************************/
      virtual ~DHCPSetState();
      /********************************************************************
      ASSIGNMENT OPERATOR
      ********************************************************************/
      
      /********************************************************************
      OPERATIONS
      ********************************************************************/
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
    };
  } // namespace display
} // namespace mpc

#endif
