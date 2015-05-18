#ifndef __DISPLAY_TYPES_H__
#define __DISPLAY_TYPES_H__

namespace mpc
{
  namespace display
  {
  
    typedef  struct
    {
      int StringId;
      int CheckValue;
    } MODE_CHECK_BOX_LABEL_VALUE;
    
    // DI index
    typedef enum
    {
      FIRST_DI_INDEX = 0,
      DI_INDEX_NOT_CONFIGURED = FIRST_DI_INDEX,
      DI_INDEX_DI1_CU361,
      DI_INDEX_DI2_CU361,
      DI_INDEX_DI3_CU361,
      DI_INDEX_DI1_IO351_41,
      DI_INDEX_DI2_IO351_41,
      DI_INDEX_DI3_IO351_41,
      DI_INDEX_DI4_IO351_41,
      DI_INDEX_DI5_IO351_41,
      DI_INDEX_DI6_IO351_41,
      DI_INDEX_DI7_IO351_41,
      DI_INDEX_DI8_IO351_41,
      DI_INDEX_DI9_IO351_41,
      DI_INDEX_DI1_IO351_42,
      DI_INDEX_DI2_IO351_42,
      DI_INDEX_DI3_IO351_42,
      DI_INDEX_DI4_IO351_42,
      DI_INDEX_DI5_IO351_42,
      DI_INDEX_DI6_IO351_42,
      DI_INDEX_DI7_IO351_42,
      DI_INDEX_DI8_IO351_42,
      DI_INDEX_DI9_IO351_42,
      DI_INDEX_DI1_IO351_43,
      DI_INDEX_DI2_IO351_43,
      DI_INDEX_DI3_IO351_43,
      DI_INDEX_DI4_IO351_43,
      DI_INDEX_DI5_IO351_43,
      DI_INDEX_DI6_IO351_43,
      DI_INDEX_DI7_IO351_43,
      DI_INDEX_DI8_IO351_43,
      DI_INDEX_DI9_IO351_43,
      NO_OF_DI_INDEX,
      LAST_DI_INDEX = NO_OF_DI_INDEX - 1
    } DI_INDEX_TYPE;

    // DO index
    typedef enum
    {
      FIRST_DO_INDEX = 0,
      DO_INDEX_NOT_CONFIGURED = FIRST_DO_INDEX,
      DO_INDEX_DO1_CU361,
      DO_INDEX_DO2_CU361,
      DO_INDEX_DO1_IO351_41,
      DO_INDEX_DO2_IO351_41,
      DO_INDEX_DO3_IO351_41,
      DO_INDEX_DO4_IO351_41,
      DO_INDEX_DO5_IO351_41,
      DO_INDEX_DO6_IO351_41,
      DO_INDEX_DO7_IO351_41,
      DO_INDEX_DO1_IO351_42,
      DO_INDEX_DO2_IO351_42,
      DO_INDEX_DO3_IO351_42,
      DO_INDEX_DO4_IO351_42,
      DO_INDEX_DO5_IO351_42,
      DO_INDEX_DO6_IO351_42,
      DO_INDEX_DO7_IO351_42,
      DO_INDEX_DO1_IO351_43,
      DO_INDEX_DO2_IO351_43,
      DO_INDEX_DO3_IO351_43,
      DO_INDEX_DO4_IO351_43,
      DO_INDEX_DO5_IO351_43,
      DO_INDEX_DO6_IO351_43,
      DO_INDEX_DO7_IO351_43,
      NO_OF_DO_INDEX,
      LAST_DO_INDEX = NO_OF_DO_INDEX - 1
    } DO_INDEX_TYPE;

    // AI index
    typedef enum
    {
      FIRST_AI_INDEX = 0,
      AI_INDEX_NOT_CONFIGURED = FIRST_AI_INDEX,
      AI_INDEX_AI1_CU361,
      AI_INDEX_AI2_CU361,
      AI_INDEX_AI3_CU361,
      AI_INDEX_AI1_IO351_41,
      AI_INDEX_AI2_IO351_41,
      AI_INDEX_AI1_IO351_42,
      AI_INDEX_AI2_IO351_42,
      AI_INDEX_AI1_IO351_43,
      AI_INDEX_AI2_IO351_43,
      NO_OF_AI_INDEX,
      LAST_AI_INDEX = NO_OF_AI_INDEX - 1
    } AI_INDEX_TYPE;
  }
}

#endif

