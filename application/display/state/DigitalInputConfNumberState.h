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
/* CLASS NAME       : DigitalInputConfNumberState                           */
/*                                                                          */
/* FILE NAME        : DigitalInputConfNumberState.cpp                       */
/*                                                                          */
/* CREATED DATE     : 2005-06-22                                            */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This Class is responsible for how to show a text.                        */
/*                                                                          */
/****************************************************************************/
/*****************************************************************************
Protect against multiple inclusion through the use of guards:
****************************************************************************/
#ifndef __DIGITAL_INPUT_CONF_NUMBER_STATE_H__
#define __DIGITAL_INPUT_CONF_NUMBER_STATE_H__

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/

/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/

/*****************************************************************************
LOCAL INCLUDES
****************************************************************************/
#include "StateBracket.h"

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
    * This Class is responsible for how to show a DigitalInputConfNumberState string given by a DataPoint
    *
    *****************************************************************************/
    class DigitalInputConfNumberState : public StateBracket
    {
    public:
      /********************************************************************
      LIFECYCLE - Default constructor.
      ********************************************************************/
      DigitalInputConfNumberState(Component* pParent = NULL);
      /********************************************************************
      LIFECYCLE - Destructor.
      ********************************************************************/
      virtual ~DigitalInputConfNumberState();
      /********************************************************************
      ASSIGNMENT OPERATOR
      ********************************************************************/

      void SetSubjectPointer(int Id, Subject* pSubject);
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
