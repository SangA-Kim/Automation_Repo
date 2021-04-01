/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: io_wrapper
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/io_wrapper.c
 *
 * Type: stub-by-function
 *
 * Unit Number: 9
 *
 ***********************************************/
#ifndef VCAST_DRIVER_ONLY
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#include "vcast_basics.h"
/* STUB_DEPENDENCY_USER_CODE */
/* STUB_DEPENDENCY_USER_CODE_END */
#else
#include "vcast_env_defines.h"
#define __VCAST_BASICS_H__
#endif /* VCAST_DRIVER_ONLY */
#ifndef VCAST_DRIVER_ONLY
#ifndef VCAST_DONT_RENAME_EXIT
#ifdef __cplusplus
extern "C" {
#endif
void exit (int status);
#ifdef __cplusplus
}
#endif
/* used to capture the exit call */
#define exit VCAST_exit
#endif /* VCAST_DONT_RENAME_EXIT */
#endif /* VCAST_DRIVER_ONLY */
#ifndef VCAST_DRIVER_ONLY
#define VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "io_wrapper_inst_prefix.c"
#else
#include "io_wrapper_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "io_wrapper_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "io_wrapper_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "io_wrapper_inst_appendix.c"
#else
#include "io_wrapper_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "io_wrapper_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "io_wrapper_exp_inst_driver.c"
#else
#include "io_wrapper_expanded_driver.c"
#endif /*VCAST_COVERAGE*/
#else
#include "S0000009.h"
#include "vcast_undef_9.h"
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#include "vcast_stubs_9.c"
/* begin declarations of inlined friends */
/* end declarations of inlined friends */
void VCAST_DRIVER_9( int VC_SUBPROGRAM ) {
#ifdef VCAST_SBF_UNITS_AVAILABLE
  vCAST_MODIFY_SBF_TABLE(9, VC_SUBPROGRAM, vCAST_false);
#endif
  switch( VC_SUBPROGRAM ) {
    case 0:
      vCAST_SET_HISTORY_FLAGS ( 9, 0);
      vCAST_USER_CODE_TIMER_START();
      break;
    case 1: {
      /* t_bool CloseFile(struct FILE_TYPE * fp) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      R_9_1 = 
      ( CloseFile(
        ( P_9_1_1 ) ) );
      break; }
    case 2: {
      /* struct FILE_TYPE *OpenFile(char  filename[], enum FileModeT mode) */
      vCAST_SET_HISTORY_FLAGS ( 9, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_9_2 = 
      ( OpenFile(
        ( P_9_2_1 ),
        ( P_9_2_2 ) ) );
      break; }
    case 3: {
      /* t_bool ReadLine(struct FILE_TYPE * fp, char  line[]) */
      vCAST_SET_HISTORY_FLAGS ( 9, 3 );
      vCAST_USER_CODE_TIMER_START();
      R_9_3 = 
      ( ReadLine(
        ( P_9_3_1 ),
        ( P_9_3_2 ) ) );
      break; }
    case 4: {
      /* t_bool WriteString(struct FILE_TYPE * fp, char  line[]) */
      vCAST_SET_HISTORY_FLAGS ( 9, 4 );
      vCAST_USER_CODE_TIMER_START();
      R_9_4 = 
      ( WriteString(
        ( P_9_4_1 ),
        ( P_9_4_2 ) ) );
      break; }
    case 5: {
      /* t_bool WriteInteger(struct FILE_TYPE * fp, int value) */
      vCAST_SET_HISTORY_FLAGS ( 9, 5 );
      vCAST_USER_CODE_TIMER_START();
      R_9_5 = 
      ( WriteInteger(
        ( P_9_5_1 ),
        ( P_9_5_2 ) ) );
      break; }
    case 6: {
      /* t_bool WriteFloat(struct FILE_TYPE * fp, float value) */
      vCAST_SET_HISTORY_FLAGS ( 9, 6 );
      vCAST_USER_CODE_TIMER_START();
      R_9_6 = 
      ( WriteFloat(
        ( P_9_6_1 ),
        ( P_9_6_2 ) ) );
      break; }
    default:
      vectorcast_print_string("ERROR: Internal Tool Error\n");
      break;
  } /* switch */
  vCAST_USER_CODE_TIMER_STOP();
}

void VCAST_SBF_9( int VC_SUBPROGRAM ) {
  switch( VC_SUBPROGRAM ) {
    case 1: {
      SBF_9_1 = 0;
      break; }
    case 2: {
      SBF_9_2 = 0;
      break; }
    case 3: {
      SBF_9_3 = 0;
      break; }
    case 4: {
      SBF_9_4 = 0;
      break; }
    case 5: {
      SBF_9_5 = 0;
      break; }
    case 6: {
      SBF_9_6 = 0;
      break; }
    default:
      break;
  } /* switch */
}
#include "vcast_ti_decls_9.h"
void VCAST_RUN_DATA_IF_9( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        case 1: /* for global object close_ret */
          VCAST_TI_8_2 ( &(close_ret));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 1: /* function CloseFile */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_9_9 ( &(R_9_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function CloseFile */
    case 2: /* function OpenFile */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            P_9_2_1_set = vCAST_true;
          VCAST_TI_9_1 ( &(P_9_2_1));
          break;
        case 2:
          VCAST_TI_9_6 ( &(P_9_2_2));
          break;
        case 3:
          VCAST_TI_9_5 ( &(R_9_2));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function OpenFile */
    case 3: /* function ReadLine */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_3_1));
          break;
        case 2:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            P_9_3_2_set = vCAST_true;
          VCAST_TI_9_1 ( &(P_9_3_2));
          break;
        case 3:
          VCAST_TI_9_9 ( &(R_9_3));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function ReadLine */
    case 4: /* function WriteString */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_4_1));
          break;
        case 2:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            P_9_4_2_set = vCAST_true;
          VCAST_TI_9_1 ( &(P_9_4_2));
          break;
        case 3:
          VCAST_TI_9_9 ( &(R_9_4));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function WriteString */
    case 5: /* function WriteInteger */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_5_1));
          break;
        case 2:
          VCAST_TI_8_2 ( &(P_9_5_2));
          break;
        case 3:
          VCAST_TI_9_9 ( &(R_9_5));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_5 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function WriteInteger */
    case 6: /* function WriteFloat */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_6_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(P_9_6_2));
          break;
        case 3:
          VCAST_TI_9_9 ( &(R_9_6));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_6 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function WriteFloat */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_5 ( struct FILE_TYPE **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_5 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_5 ( struct FILE_TYPE **vcast_param ) 
{
  {
    int VCAST_TI_9_5_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_9_5_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_9_5_memory_ptr = (void**)vcast_param;
          *VCAST_TI_9_5_memory_ptr = (void*)VCAST_malloc(VCAST_TI_9_5_array_size*(sizeof(struct FILE_TYPE )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_9_5_array_size*(sizeof(struct FILE_TYPE )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_9_5_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        VCAST_TI_9_5_index = vcast_get_param();
        VCAST_TI_9_7 ( &((*vcast_param)[VCAST_TI_9_5_index]));
      }
    }
  }
} /* end VCAST_TI_9_5 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_9 ( enum bool *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_9 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_9 ( enum bool *vcast_param ) 
{
  switch ( vCAST_COMMAND ) {
    case vCAST_PRINT: {
      if ( vcast_param == 0 )
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_long_long(vCAST_OUTPUT_FILE, (VCAST_LONGEST_INT)*vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      } /* end else */
      } /* end vCAST_PRINT block */
      break; /* end case vCAST_PRINT */
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL:
    *vcast_param = (enum bool ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = False;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = True;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_9 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_1 ( char **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_1 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_1 ( char **vcast_param ) 
{
  {
    int VCAST_TI_9_1_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_9_1_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_9_1_memory_ptr = (void**)vcast_param;
          *VCAST_TI_9_1_memory_ptr = (void*)VCAST_malloc(VCAST_TI_9_1_array_size*(sizeof(char )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_9_1_array_size*(sizeof(char )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_9_1_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        if (VCAST_FIND_INDEX() == -1 )
          VCAST_TI_STRING ( (char**)vcast_param, 0,-1);
        else {
          VCAST_TI_9_1_index = vcast_get_param();
          VCAST_TI_8_1 ( &((*vcast_param)[VCAST_TI_9_1_index]));
        }
      }
    }
  }
} /* end VCAST_TI_9_1 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_6 ( enum FileModeT *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_6 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_6 ( enum FileModeT *vcast_param ) 
{
  switch ( vCAST_COMMAND ) {
    case vCAST_PRINT: {
      if ( vcast_param == 0 )
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_long_long(vCAST_OUTPUT_FILE, (VCAST_LONGEST_INT)*vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      } /* end else */
      } /* end vCAST_PRINT block */
      break; /* end case vCAST_PRINT */
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL:
    *vcast_param = (enum FileModeT ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = F_READ;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = F_APPEND;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_6 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A struct */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_7 ( struct FILE_TYPE *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_7 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_7 ( struct FILE_TYPE *vcast_param ) 
{
  {
    switch ( vcast_get_param () ) { /* Choose field member */
      /* Setting member variable vcast_param->fileHandle */
      case 1: { 
        VCAST_TI_9_4 ( &(vcast_param->fileHandle));
        break; /* end case 1*/
      } /* end case */
      /* Setting member variable vcast_param->isOpen */
      case 2: { 
        VCAST_TI_9_9 ( &(vcast_param->isOpen));
        break; /* end case 2*/
      } /* end case */
      default:
        vCAST_TOOL_ERROR = vCAST_true;
    } /* end switch */ 
  }
} /* end VCAST_TI_9_7 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_4 ( unsigned *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_4 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_4 ( unsigned *vcast_param ) 
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_unsigned_integer(vCAST_OUTPUT_FILE, *vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( unsigned  ) vCAST_VALUE_UNSIGNED;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = UINT_MIN;
    break;
  case vCAST_MID_VAL :
    *vcast_param = (UINT_MIN / 2) + (UINT_MAX / 2);
    break;
  case vCAST_LAST_VAL :
    *vcast_param = UINT_MAX;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = UINT_MIN;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = UINT_MAX;
    *vcast_param = *vcast_param + 1;
    break;
  case vCAST_ZERO_VAL :
    *vcast_param = 0;
    break;
  default:
    break;
} /* end switch */
} /* end VCAST_TI_9_4 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_9 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900002\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(INT_MIN / 2) + (INT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_8_1 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900003\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(CHAR_MIN/2) + (CHAR_MAX/2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_4 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900008\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,-(FLT_MAX) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,VCAST_FLT_MID );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,FLT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#endif
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "io_wrapper_uc.cpp"

void vCAST_COMMON_STUB_PROC_9(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData )
{
   vCAST_BEGIN_STUB_PROC_9(unitIndex, subprogramIndex);
   if ( robjectIndex )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, robjectIndex );
   if ( readEobjectData )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, 0 );
   vCAST_SET_HISTORY( unitIndex, subprogramIndex );
   vCAST_READ_COMMAND_DATA( vCAST_CURRENT_SLOT, unitIndex, subprogramIndex, vCAST_true, vCAST_false );
   vCAST_READ_COMMAND_DATA_FOR_USER_GLOBALS();
   vCAST_STUB_PROCESSING_9(unitIndex, subprogramIndex);
}
#endif /* VCAST_HEADER_EXPANSION */
