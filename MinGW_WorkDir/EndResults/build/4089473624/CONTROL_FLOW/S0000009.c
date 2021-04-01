/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: control_flow
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/control_flow.c
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
#include "control_flow_inst_prefix.c"
#else
#include "control_flow_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "control_flow_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "control_flow_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "control_flow_inst_appendix.c"
#else
#include "control_flow_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "control_flow_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "control_flow_exp_inst_driver.c"
#else
#include "control_flow_expanded_driver.c"
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
      /* void setDimensions(float x, float y, float z) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      ( setDimensions(
        ( P_9_1_1 ),
        ( P_9_1_2 ),
        ( P_9_1_3 ) ) );
      break; }
    case 2: {
      /* float computeBaseArea(enum e_shape shape) */
      vCAST_SET_HISTORY_FLAGS ( 9, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_9_2 = 
      ( computeBaseArea(
        ( P_9_2_1 ) ) );
      break; }
    case 3: {
      /* float computeVolume(enum e_shape shape) */
      vCAST_SET_HISTORY_FLAGS ( 9, 3 );
      vCAST_USER_CODE_TIMER_START();
      R_9_3 = 
      ( computeVolume(
        ( P_9_3_1 ) ) );
      break; }
    case 4: {
      /* void partitionExample(unsigned char numberOfIterations) */
      vCAST_SET_HISTORY_FLAGS ( 9, 4 );
      vCAST_USER_CODE_TIMER_START();
      ( partitionExample(
        ( P_9_4_1 ) ) );
      break; }
    case 5: {
      /* void controlFlowExample() */
      vCAST_SET_HISTORY_FLAGS ( 9, 5 );
      vCAST_USER_CODE_TIMER_START();
      ( controlFlowExample( ) );
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
    default:
      break;
  } /* switch */
}
#include "vcast_ti_decls_9.h"
void VCAST_RUN_DATA_IF_9( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        case 1: /* for global object widthX */
          VCAST_TI_8_3 ( &(widthX));
          break;
        case 2: /* for global object lengthY */
          VCAST_TI_8_3 ( &(lengthY));
          break;
        case 3: /* for global object heightZ */
          VCAST_TI_8_3 ( &(heightZ));
          break;
        case 4: /* for global object Status */
          VCAST_TI_8_2 ( &(Status));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 6: /* function validShape */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_2 ( &(P_10_1_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(P_10_1_2));
          break;
        case 3:
          VCAST_TI_8_3 ( &(P_10_1_3));
          break;
        case 4:
          VCAST_TI_8_3 ( &(P_10_1_4));
          break;
        case 5:
          VCAST_TI_8_2 ( &(R_10_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function validShape */
    case 1: /* function setDimensions */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(P_9_1_2));
          break;
        case 3:
          VCAST_TI_8_3 ( &(P_9_1_3));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function setDimensions */
    case 2: /* function computeBaseArea */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_2 ( &(P_9_2_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(R_9_2));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function computeBaseArea */
    case 3: /* function computeVolume */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_2 ( &(P_9_3_1));
          break;
        case 2:
          VCAST_TI_8_3 ( &(R_9_3));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function computeVolume */
    case 4: /* function partitionExample */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_4_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function partitionExample */
    case 5: /* function controlFlowExample */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_SBF_OBJECT( &SBF_9_5 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function controlFlowExample */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_2 ( enum e_shape *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_2 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_2 ( enum e_shape *vcast_param ) 
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
    *vcast_param = (enum e_shape ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = CYLINDER;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = BOX;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_2 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_4 ( unsigned char *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_4 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_4 ( unsigned char *vcast_param ) 
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_integer(vCAST_OUTPUT_FILE, *vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( unsigned char  ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = UCHAR_MIN;
    break;
  case vCAST_MID_VAL :
    *vcast_param = (UCHAR_MIN / 2) + (UCHAR_MAX / 2);
    break;
  case vCAST_LAST_VAL :
    *vcast_param = UCHAR_MAX;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = UCHAR_MIN;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = UCHAR_MAX;
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
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900001\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,-(FLT_MAX) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,VCAST_FLT_MID );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,FLT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#endif
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900003\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(INT_MIN / 2) + (INT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_4 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,UCHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(UCHAR_MIN / 2) + (UCHAR_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,UCHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "control_flow_uc.cpp"

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
