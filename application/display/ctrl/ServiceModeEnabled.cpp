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
/* CLASS NAME       : ServiceModeEnabled                                                      */
/*                                                                          */
/* FILE NAME        : ServiceModeEnabled.CPP                                                      */
/*                                                                          */
/* CREATED DATE     :                                                       */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/
#ifdef TO_RUN_ON_PC

#else

#endif
/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/
#include "ServiceModeEnabled.h"
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
    namespace ctrl
    {

 /*****************************************************************************
 CREATS AN OBJECT.
 ******************************************************************************/

 ServiceModeEnabled* ServiceModeEnabled::mInstance = 0;



/*****************************************************************************
 *
 *
 *              PUBLIC FUNCTIONS
 *
 *
 *****************************************************************************/

/*****************************************************************************
 * Function - Constructor
 * DESCRIPTION:
 *
 *****************************************************************************/
ServiceModeEnabled::ServiceModeEnabled()
{
	SetValue(false);
}

/*****************************************************************************
 * Function - Destructor
 * DESCRIPTION:
 *
 ****************************************************************************/
ServiceModeEnabled::~ServiceModeEnabled()
{

}

ServiceModeEnabled* ServiceModeEnabled::GetInstance()
{
  if (!mInstance)
  {
    mInstance = new ServiceModeEnabled();
  }
  return mInstance;
}

/*****************************************************************************
 *
 *
 *              PRIVATE FUNCTIONS
 *
 *
 ****************************************************************************/

/*****************************************************************************
 *
 *
 *              PROTECTED FUNCTIONS
 *                 - RARE USED -
 *
 ****************************************************************************/
    } // namespace ctrl
  } // namespace display
} // namespace mpc
