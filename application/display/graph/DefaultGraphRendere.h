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
/* CLASS NAME       : DefaultGraphRendere                                                 */
/*                                                                          */
/* FILE NAME        : DefaultGraphRendere.h                                               */
/*                                                                          */
/* CREATED DATE     : 2004-09-01                                            */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This Class is responsible for how to show a DefaultGraphRendere with an X and Y axis   */
/****************************************************************************/

/*****************************************************************************
Protect against multiple inclusion through the use of guards:
****************************************************************************/
#ifndef mpc_displayDefaultGraphRendere_h
#define mpc_displayDefaultGraphRendere_h

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/

/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/

/*****************************************************************************
LOCAL INCLUDES
****************************************************************************/
#include "GraphRendere.h"

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
    class Component;
    namespace graph
    {
    class Axis;
    /*****************************************************************************
    * CLASS:
    * DESCRIPTION:
    *
    * This Class is responsible for how to show a DefaultGraphRendere with an x and y axis and
    * a set of data.
    *
    *****************************************************************************/
    class DefaultGraphRendere : public GraphRendere
    {
    public:
      /********************************************************************
      LIFECYCLE - Default constructor.
      ********************************************************************/
      DefaultGraphRendere();
      /********************************************************************
      LIFECYCLE - Destructor.
      ********************************************************************/
      virtual ~DefaultGraphRendere();
      /********************************************************************
      ASSIGNMENT OPERATOR
      ********************************************************************/
      
      /********************************************************************
      OPERATIONS
      ********************************************************************/
      virtual bool Draw(Component* hwnd, Axis* xAxis, Axis* yAxis);

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
    } // namespace graph
  }// namespace display
} // namespace mpc

#endif
