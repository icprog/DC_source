/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*                                 GRUNDFOS                                 */
/*                           DK-8850 BJERRINGBRO                            */
/*                                 DENMARK                                  */
/*               --------------------------------------------               */
/*                Project: CU 351 Platform                                  */
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
/* CLASS NAME       : EventDataPoint                                        */
/*                                                                          */
/* FILE NAME        : EventDataPoint.h                                      */
/*                                                                          */
/* CREATED DATE     : 30-05-2007  (dd-mm-yyyy)                              */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef __EVENT_DATA_POINT_H__
#define __EVENT_DATA_POINT_H__

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include <DataPoint.h>

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
 * DESCRIPTION: Event data point, used to signal that an event has occurred  
 *****************************************************************************/
class EventDataPoint : public DataPoint
{
public:
  /*****************************************************************************
  * LIFECYCLE - Default constructor.
  *****************************************************************************/
  EventDataPoint()
  {
  }
  
  /*****************************************************************************
  * LIFECYCLE - Destructor.
  *****************************************************************************/
  ~EventDataPoint()
  {
  }

public:  
  /*****************************************************************************
  * PUBLIC METHODS
  *****************************************************************************/
    
  /*****************************************************************************
  * FUNCTION - SetEvent
  * DESCRIPTION: Sets the event and notifies observers
  *****************************************************************************/
  virtual void SetEvent()
  {
    mQuality = DP_AVAILABLE;
    NotifyObservers();
    NotifyObserversE();
  };
};

#endif
