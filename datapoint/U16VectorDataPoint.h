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
/* CLASS NAME       : U16VectorDataPoint                                    */
/*                                                                          */
/* FILE NAME        : U16VectorDataPoint.cpp                                */
/*                                                                          */
/* CREATED DATE     : 22-07-2008   (dd-mm-yyyy)                             */
/*                                                                          */
/* SHORT FILE DESCRIPTION : A datapoint containing a set of int values.     */
/*  The IntVectorDataPoint is protected by semaphores, so none of its       */
/*  functionallity should be called from within an interrupt rutine.        */
/*                                                                          */
/****************************************************************************/
#ifndef __U16_VECTOR_DATA_POINT_H__
#define __U16_VECTOR_DATA_POINT_H__

/*****************************************************************************
SYSTEM INCLUDES
*****************************************************************************/
#include <rtos.h>
#include <vector>

/*****************************************************************************
PROJECT INCLUDES
*****************************************************************************/

/*****************************************************************************
LOCAL INCLUDES
*****************************************************************************/
#include <VectorDataPoint.h>

/*****************************************************************************
DEFINES
*****************************************************************************/

/*****************************************************************************
TYPEDEFS
*****************************************************************************/

/*****************************************************************************
* CLASS: U16VectorDataPoint
* DESCRIPTION: U16 vector data point
*****************************************************************************/
class U16VectorDataPoint : public VectorDataPoint<U16>
{
public:
  /*****************************************************************************
  * LIFECYCLE - Constructor
  * INPUT - initialSize: initial size of the vector
  *****************************************************************************/
  U16VectorDataPoint(int initialSize, int maxSize, int defaultValue) : VectorDataPoint<U16>(initialSize, maxSize, defaultValue)
  {
  }

  /*****************************************************************************
  * LIFECYCLE - Destructor
  *****************************************************************************/
  virtual ~U16VectorDataPoint()
  {
  }

  /*****************************************************************************
  * Subject::GetFlashId implementation
  *****************************************************************************/
  virtual FLASH_ID_TYPE GetFlashId(void)
  {
    return FLASH_ID_U16_VECTOR_DATA_POINT;
  }

  /*****************************************************************************
  * Subject::SaveToFlash implementation
  *****************************************************************************/
  virtual void SaveToFlash(IFlashWriter* pWriter, FLASH_SAVE_TYPE save)
  {
    const int maxSize = GetMaxSize();
    const int size = GetSize();
    const U16 defaultValue = GetDefaultValue();

    pWriter->WriteI32(maxSize);
    pWriter->WriteI32(size);

    for (int i = 0; i < maxSize; i++)
    {
      if (i < size)
      {
        pWriter->WriteU16(GetValue(i));
      }
      else
      {
        pWriter->WriteU16(defaultValue);
      }
    }
  }

  /*****************************************************************************
  * Subject::LoadFromFlash implementation
  *****************************************************************************/
  virtual void LoadFromFlash(IFlashReader* pReader, FLASH_SAVE_TYPE savedAs)
  {
    const int savedMaxSize = pReader->ReadI32(-1);
    const int savedSize = pReader->ReadI32(-1);
    const U16 defaultValue = GetDefaultValue();

    Clear();

    for (int i = 0; i < savedMaxSize; i++)
    {
      if (i < savedSize)
      {
        SetValue(i, pReader->ReadU16(defaultValue));
      }
      else
      {
        pReader->ReadU16(defaultValue);
      }
    }
  }

};

#endif
