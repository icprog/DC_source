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
/* CLASS NAME       : DigitalOutputConfListView                             */
/*                                                                          */
/* FILE NAME        : DigitalOutputConfListView.H                           */
/*                                                                          */
/* CREATED DATE     :                                                       */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This class implements the digital output configuration ListView          */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef __DIGITAL_OUTPUT_CONF_LISTVIEW_H__
#define __DIGITAL_OUTPUT_CONF_LISTVIEW_H__

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
#include "ListView.h"

/*****************************************************************************
  DEFINES
 *****************************************************************************/

namespace mpc
{
  namespace display
  {

    /*****************************************************************************
    * CLASS:
    * DESCRIPTION:
    *
    *****************************************************************************/
    class DigitalOutputConfListView : public Observer, public ListView
    {
      public:
        /********************************************************************
        LIFECYCLE - Default constructor.
        ********************************************************************/
        DigitalOutputConfListView(Component* pParent = NULL);
        /********************************************************************
        LIFECYCLE - Destructor.
        ********************************************************************/
        ~DigitalOutputConfListView();
        /********************************************************************
        ASSIGNMENT OPERATOR
        ********************************************************************/

        /********************************************************************
        OPERATIONS
        ********************************************************************/
        /* --------------------------------------------------
        * Update is part of the observer pattern
        * --------------------------------------------------*/
        virtual void Update(Subject* Object);
        /* --------------------------------------------------
        * Called if subscription shall be canceled
        * --------------------------------------------------*/
        virtual void SubscribtionCancelled(Subject* pSubject);
        /* --------------------------------------------------
        * Called to set the subject pointer (used by class
        * factory)
        * --------------------------------------------------*/
        virtual void SetSubjectPointer(int Id, Subject* pSubject);
        /* --------------------------------------------------
        * Called to indicate that subscription kan be made
        * --------------------------------------------------*/
        virtual void ConnectToSubjects(void);
        /* --------------------------------------------------
        * Sets the font of this text element
        * --------------------------------------------------*/
        virtual void SetFont(const GUI_FONT** Font);

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

        /********************************************************************
        TYPE DEFINES
        ********************************************************************/
        typedef enum
        {
          COLUMN_LABEL = 0,
          COLUMN_CHECK_BOX,
          COLUMN_AVAILABLE,
          COLUMN_HIGH_END_AVAILABLE,
          COLUMN_DOSING_PUMP,
          COLUMN_VFD_INSTALLED
        }COLUMN;
    };

  } // namespace display
} // namespace mpc

#endif
