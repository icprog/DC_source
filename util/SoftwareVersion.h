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
/* CLASS NAME       : SoftwareVersion                                       */
/*                                                                          */
/* FILE NAME        : SoftwareVersion.H                                     */
/*                                                                          */
/* CREATED DATE     :                                                       */
/*                                                                          */
/* SHORT FILE DESCRIPTION :                                                 */
/****************************************************************************/
/*****************************************************************************
   Protect against multiple inclusion through the use of guards:
 ****************************************************************************/
#ifndef mpcSOFTWAREVERSION_h
#define mpcSOFTWAREVERSION_h

/*****************************************************************************
  SYSTEM INCLUDES
 *****************************************************************************/

/*****************************************************************************
  PROJECT INCLUDES
 *****************************************************************************/
#include <cu351_cpu_types.h>

/*****************************************************************************
  LOCAL INCLUDES
 ****************************************************************************/
#include <StringDataPoint.h>
/*****************************************************************************
  DEFINES
 *****************************************************************************/
#define CPU_SW_VERSION_NO 0x00F40001    //version no  V  0x##VVRRPP
                                        //                 ## not used
                                        //                 VV version no
                                        //                 RR revision no
                                        //                 PP pre-release no

#define IO_SW_VERSION_NO 0x00ffffff     // version no. V 0x##VVRRPP
                                        //                 ## not used
                                        //                 VV version no
                                        //                 RR revision no
                                        //                 PP pre-release no

/*****************************************************************************
  TYPE DEFINES
 *****************************************************************************/
void BcdConv(char* str, int bcdEncodedValue);

/******************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class CpuSoftwareVersion : public StringDataPoint
{
    public:
        /********************************************************************
        ASSIGNMENT OPERATOR
        ********************************************************************/
        /********************************************************************
        OPERATIONS
        ********************************************************************/
        static CpuSoftwareVersion* GetInstance();
        bool SetValue(int versionNo);

  private:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

     /****************************************************************
      *              IMPORTENT
      *
      * Please Notice that the constructor  and destructor is Private
      *
      *
      ****************************************************************/

    /********************************************************************
        LIFECYCLE - Default constructor.
        ********************************************************************/
        CpuSoftwareVersion();
        /********************************************************************
        LIFECYCLE - Destructor.
        ********************************************************************/
        ~CpuSoftwareVersion();
        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
        static CpuSoftwareVersion* mInstance;

    protected:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
};

/*****************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class IoSoftwareVersion : public StringDataPoint
{
    public:
        /********************************************************************
        ASSIGNMENT OPERATOR
        ********************************************************************/
        /********************************************************************
        OPERATIONS
        ********************************************************************/
        static IoSoftwareVersion* GetInstance();
        bool SetValue(int versionNo);
  private:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

     /****************************************************************
      *              IMPORTENT
      *
      * Please Notice that the constructor  and destructor is Private
      *
      *
      ****************************************************************/

    /********************************************************************
        LIFECYCLE - Default constructor.
        ********************************************************************/
        IoSoftwareVersion();
        /********************************************************************
        LIFECYCLE - Destructor.
        ********************************************************************/
        ~IoSoftwareVersion();
        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
        static IoSoftwareVersion* mInstance;

    protected:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
};

/*****************************************************************************
 * CLASS:
 * DESCRIPTION:
 *
 *****************************************************************************/
class BootLoadSoftwareVersion : public StringDataPoint
{
    public:
        /********************************************************************
        ASSIGNMENT OPERATOR
        ********************************************************************/
        /********************************************************************
        OPERATIONS
        ********************************************************************/
        static BootLoadSoftwareVersion* GetInstance();
        bool SetValue(int versionNo);
  private:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

     /****************************************************************
      *              IMPORTENT
      *
      * Please Notice that the constructor  and destructor is Private
      *
      *
      ****************************************************************/

    /********************************************************************
        LIFECYCLE - Default constructor.
        ********************************************************************/
        BootLoadSoftwareVersion();
        /********************************************************************
        LIFECYCLE - Destructor.
        ********************************************************************/
        ~BootLoadSoftwareVersion();
        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
        static BootLoadSoftwareVersion* mInstance;

    protected:
        /********************************************************************
        OPERATIONS
        ********************************************************************/

        /********************************************************************
        ATTRIBUTE
        ********************************************************************/
};

#endif
