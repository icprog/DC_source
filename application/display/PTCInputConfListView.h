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
/* CLASS NAME       : PTCInputConfListView                                  */
/*                                                                          */
/* FILE NAME        : PTCInputConfListView.h                                */
/*                                                                          */
/* CREATED DATE     : 2012-02-16                                            */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/* This class implements the ptc input configuration ListView               */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef __PTC_INPUT_CONF_LISTVIEW_H__
#define __PTC_INPUT_CONF_LISTVIEW_H__

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
#include "MultiString.h"
#include "DataPointText.h"

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
    *****************************************************************************/
    class PTCInputConfListView : public Observer, public ListView
    {
      public:
        /********************************************************************
        LIFECYCLE - Default constructor.
        ********************************************************************/
        PTCInputConfListView(Component* pParent = NULL);
        /********************************************************************
        LIFECYCLE - Destructor.
        ********************************************************************/
        ~PTCInputConfListView();
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
        virtual void SetSubjectPointer(int Id,Subject* pSubject);
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
        void AddAvailableIfSets(int rowIndex, int checkValue);

        /********************************************************************
        ATTRIBUTE
        ********************************************************************/      
        
        /*******************************************************************
        TYPE DEFINES
        ********************************************************************/
        typedef enum
        {
          COLUMN_LABEL = 0,          
          COLUMN_CHECK_BOX,
          COLUMN_AVAILABLE_PUMPS          
        }COLUMN;
    };

  } // namespace display
} // namespace mpc

#endif
