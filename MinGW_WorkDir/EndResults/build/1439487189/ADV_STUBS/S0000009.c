/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: advanced_stubbing
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/advanced_stubbing.c
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
#include "advanced_stubbing_inst_prefix.c"
#else
#include "advanced_stubbing_vcast_prefix.c"
#endif
#if defined(VCAST_LIBRARY_STUB_ONLY_CHANGE_FUNCTION_CALLS) || defined(VCAST_ONLY_RENAME_FUNCTION_malloc)
#define malloc(p1) VCAST_LIB_STUB_malloc(p1)
#else
#define malloc VCAST_LIB_STUB_malloc
#endif

#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "advanced_stubbing_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "advanced_stubbing_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "advanced_stubbing_inst_appendix.c"
#else
#include "advanced_stubbing_vcast_appendix.c"
#endif
#undef malloc
#endif /* VCAST_DRIVER_ONLY */
#include "advanced_stubbing_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "advanced_stubbing_exp_inst_driver.c"
#else
#include "advanced_stubbing_expanded_driver.c"
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
      /* char *use_malloc(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      R_9_1 = 
      ( use_malloc( ) );
      break; }
    case 2: {
      /* enum e_temp_range temp_monitor(tempurature_guage_func_ptr_t func_ptr, enum e_scale scale) */
      vCAST_SET_HISTORY_FLAGS ( 9, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_9_2 = 
      ( temp_monitor(
        ( P_9_2_1 ),
        ( P_9_2_2 ) ) );
      break; }
    case 3: {
      /* int get_numeric_string(int string_length) */
      vCAST_SET_HISTORY_FLAGS ( 9, 3 );
      vCAST_USER_CODE_TIMER_START();
      R_9_3 = 
      ( get_numeric_string(
        ( P_9_3_1 ) ) );
      break; }
    case 4: {
      /* int log_error_msg(char * str) */
      vCAST_SET_HISTORY_FLAGS ( 9, 4 );
      vCAST_USER_CODE_TIMER_START();
      R_9_4 = 
      ( log_error_msg(
        ( P_9_4_1 ) ) );
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
    default:
      break;
  } /* switch */
}
#include "vcast_ti_decls_9.h"
void VCAST_RUN_DATA_IF_9( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 5: /* function malloc */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_10_1_1));
          break;
        case 2:
          VCAST_TI_9_3 ( &(R_10_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_10_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function malloc */
    case 1: /* function use_malloc */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_1 ( &(R_9_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function use_malloc */
    case 2: /* function temp_monitor */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_10 ( &(P_9_2_1));
          break;
        case 2:
          VCAST_TI_9_6 ( &(P_9_2_2));
          break;
        case 3:
          VCAST_TI_9_8 ( &(R_9_2));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function temp_monitor */
    case 6: /* function read_key_pad */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_1 ( &(R_10_2));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function read_key_pad */
    case 3: /* function get_numeric_string */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_9_3_1));
          break;
        case 2:
          VCAST_TI_8_2 ( &(R_9_3));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function get_numeric_string */
    case 4: /* function log_error_msg */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_1 ( &(P_9_4_1));
          break;
        case 2:
          VCAST_TI_8_2 ( &(R_9_4));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function log_error_msg */
    case 7: /* function myGauge */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(R_10_3));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function myGauge */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_5 ( unsigned *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_5 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_5 ( unsigned *vcast_param ) 
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
} /* end VCAST_TI_9_5 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_3 ( void **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_3 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_3 ( void **vcast_param ) 
{
  {
    int VCAST_TI_9_3_object_index = vcast_get_param();
    if (( vCAST_COMMAND == vCAST_PRINT ) && (*vcast_param == NULL)) {
      vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NULL\n");
      return;
    }
    switch ( VCAST_TI_9_3_object_index ) {
      case 0: {
        if ( vCAST_COMMAND == vCAST_PRINT )
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "##ADDRESS##\n");
        else if ( vCAST_COMMAND == vCAST_SET_VAL )
          *vcast_param = (void*)NULL;
        break;
      } /* end case 0 */
      case 1:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT1\n");
          VCAST_memcpy(&VECTORCAST_INT1, (void *)*vcast_param, sizeof (VECTORCAST_INT1));
        } /* end else if */
        break;
      } /* end case 1 */
      case 2:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT2;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT2);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT2\n");
          VCAST_memcpy(&VECTORCAST_INT2, (void *)*vcast_param, sizeof (VECTORCAST_INT2));
        } /* end else if */
        break;
      } /* end case 2 */
      case 3:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT3;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT3);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT3\n");
          VCAST_memcpy(&VECTORCAST_INT3, (void *)*vcast_param, sizeof (VECTORCAST_INT3));
        } /* end else if */
        break;
      } /* end case 3 */
      case 4:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_FLT1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_FLT1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_FLT1\n");
          VCAST_memcpy(&VECTORCAST_FLT1, (void *)*vcast_param, sizeof (VECTORCAST_FLT1));
        } /* end else if */
        break;
      } /* end case 4 */
      case 5:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_STR1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_STR1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_STR1\n");
          VCAST_memcpy(&VECTORCAST_STR1, (void *)*vcast_param, sizeof (VECTORCAST_STR1));
        } /* end else if */
        break;
      } /* end case 5 */
      case 6:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_BUFFER;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_BUFFER);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_BUFFER\n");
          VCAST_memcpy(&VECTORCAST_BUFFER, (void *)*vcast_param, sizeof (VECTORCAST_BUFFER));
        } /* end else if */
        break;
      } /* end case 6 */
      default:
        vCAST_TOOL_ERROR = vCAST_true;
    } /* end switch */

    if ( VCAST_TI_9_3_object_index > 0 )
      vCAST_GLOBALS_TOUCHED[VCAST_TI_9_3_object_index-1] = vCAST_true;
  }
} /* end VCAST_TI_9_3 */
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


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_10 ( float (**vcast_param)(void) ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_10 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_10 ( float (**vcast_param)(void) ) 
{
  float (*vcast_local_ptr)(void);
  switch ( vCAST_COMMAND ) {
    case vCAST_PRINT:
      if ( !*vcast_param )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "<<null>>\n");
      else if ( vcast_local_ptr = myGauge, *vcast_param == vcast_local_ptr ) {
        vectorcast_fprint_integer (vCAST_OUTPUT_FILE, 0);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      }
      else
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"<<unknown>>\n");
      break;
    case vCAST_SET_VAL:
      if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
        return;
      }
      switch ( (int) vCAST_VALUE ) {
        case 0:
          vcast_local_ptr = myGauge;
          *vcast_param = vcast_local_ptr;
          break;
      }
      break;
  }
} /* end VCAST_TI_9_10 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_6 ( enum e_scale *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_6 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_6 ( enum e_scale *vcast_param ) 
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
    *vcast_param = (enum e_scale ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = CELSIUS;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = FAHRENHEIT;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_6 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_8 ( enum e_temp_range *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_8 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_8 ( enum e_temp_range *vcast_param ) 
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
    *vcast_param = (enum e_temp_range ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = BAD_GAUGE;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = BOILING;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_8 */
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
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(CHAR_MIN/2) + (CHAR_MAX/2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_5 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900005\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900007\n" );
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
#include "advanced_stubbing_uc.cpp"

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
