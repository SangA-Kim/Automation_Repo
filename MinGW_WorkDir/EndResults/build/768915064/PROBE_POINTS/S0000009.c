/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: probe_points
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/probe_points.c
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
#include "probe_points_inst_prefix.c"
#else
#include "probe_points_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "probe_points_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "probe_points_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "probe_points_inst_appendix.c"
#else
#include "probe_points_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "probe_points_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "probe_points_exp_inst_driver.c"
#else
#include "probe_points_expanded_driver.c"
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
      /* t_door_state process_door_event(t_door_state current_state) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      R_9_1 = 
      ( process_door_event(
        ( P_9_1_1 ) ) );
      break; }
    case 2: {
      /* int check_rx_err_bit(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_9_2 = 
      ( check_rx_err_bit( ) );
      break; }
    case 3: {
      /* void monitor_task(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 3 );
      vCAST_USER_CODE_TIMER_START();
      ( monitor_task( ) );
      break; }
    case 4: {
      /* float miles_before_fillup(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 4 );
      vCAST_USER_CODE_TIMER_START();
      R_9_4 = 
      ( miles_before_fillup( ) );
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
        case 1: /* for global object rx_err_count */
          VCAST_TI_8_2 ( &(rx_err_count));
          break;
        case 2: /* for global object tank_size */
          VCAST_TI_8_2 ( &(tank_size));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 5: /* function door_ajar_alarm */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_10_1_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function door_ajar_alarm */
    case 1: /* function process_door_event */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_9_4 ( &(R_9_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function process_door_event */
    case 2: /* function check_rx_err_bit */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_2));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function check_rx_err_bit */
    case 6: /* function sleep1 */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_10_2_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function sleep1 */
    case 7: /* function report_error */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_2 ( &(P_10_3_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function report_error */
    case 3: /* function monitor_task */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function monitor_task */
    case 8: /* function get_fuel_level */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(R_10_4));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function get_fuel_level */
    case 9: /* function get_recent_mpg */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(R_10_5));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function get_recent_mpg */
    case 4: /* function miles_before_fillup */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(R_9_4));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function miles_before_fillup */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* A typedef */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_4 ( t_door_state *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_4 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_4 ( t_door_state *vcast_param ) 
{
#if (defined(VCAST_NO_TYPE_SUPPORT))
  /* User code: type is not supported */
  vcast_not_supported();
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
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
    *vcast_param = (t_door_state )vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = POWER_UP;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = DOOR_CLOSED;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/

} /* end VCAST_TI_9_4 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_2 ( char **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_2 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_2 ( char **vcast_param ) 
{
  {
    int VCAST_TI_9_2_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_9_2_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_9_2_memory_ptr = (void**)vcast_param;
          *VCAST_TI_9_2_memory_ptr = (void*)VCAST_malloc(VCAST_TI_9_2_array_size*(sizeof(char )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_9_2_array_size*(sizeof(char )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_9_2_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        if (VCAST_FIND_INDEX() == -1 )
          VCAST_TI_STRING ( (char**)vcast_param, 0,-1);
        else {
          VCAST_TI_9_2_index = vcast_get_param();
          VCAST_TI_8_1 ( &((*vcast_param)[VCAST_TI_9_2_index]));
        }
      }
    }
  }
} /* end VCAST_TI_9_2 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_9 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900001\n" );
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
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900006\n" );
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
#include "probe_points_uc.cpp"

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
