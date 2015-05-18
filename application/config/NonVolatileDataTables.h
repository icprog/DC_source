/**************************************************************************
 This file is auto-generated by FactoryGenerator, do not modify it manually
**************************************************************************/

#ifndef __NON_VOLATILE_DATA_TABLES_H__
#define __NON_VOLATILE_DATA_TABLES_H__

/**************************************************************************
 INCLUDES
**************************************************************************/
#include <cu351_cpu_types.h>
#include <AppTypeDefs.h>

/**************************************************************************
 TYPE DEFINITIONS
**************************************************************************/
typedef struct 
{
  U16 subjectId;
  FLASH_SAVE_TYPE saveType;
} NON_VOLATILE_SUBJECT_TYPE;

/**************************************************************************
 EXTERNALS
**************************************************************************/
extern const NON_VOLATILE_SUBJECT_TYPE NON_VOLATILE_CONFIG_SUBJECTS[];
extern const int NON_VOLATILE_CONFIG_SUBJECTS_CNT;
extern const NON_VOLATILE_SUBJECT_TYPE NON_VOLATILE_LOG_SUBJECTS[];
extern const int NON_VOLATILE_LOG_SUBJECTS_CNT;
extern const NON_VOLATILE_SUBJECT_TYPE* NON_VOLATILE_GSC_SUBJECTS;
extern const int NON_VOLATILE_GSC_SUBJECTS_CNT;
extern const NON_VOLATILE_SUBJECT_TYPE NON_VOLATILE_NOBOOT_SUBJECTS[];
extern const int NON_VOLATILE_NOBOOT_SUBJECTS_CNT;

#endif
