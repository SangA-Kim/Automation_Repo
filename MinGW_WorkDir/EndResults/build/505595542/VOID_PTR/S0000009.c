/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: communication
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/communication.c
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
#include "communication_inst_prefix.c"
#else
#include "communication_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "communication_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "communication_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "communication_inst_appendix.c"
#else
#include "communication_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "communication_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "communication_exp_inst_driver.c"
#else
#include "communication_expanded_driver.c"
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
      /* enum Boolean ProcessMessage(MessageT messageCategory, void * message) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      R_9_1 = 
      ( ProcessMessage(
        ( P_9_1_1 ),
        ( P_9_1_2 ) ) );
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
    case 2: /* function ChangeAltitude */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(P_10_1_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function ChangeAltitude */
    case 3: /* function ChangeCourse */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_8 ( &(P_10_2_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function ChangeCourse */
    case 4: /* function InvalidCommand */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_10_3_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function InvalidCommand */
    case 1: /* function ProcessMessage */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(P_9_1_1));
          break;
        case 2:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            VCAST_SET_GLOBAL_SIZE( &P_9_1_2_memsize );
          VCAST_TI_9_2 ( &(P_9_1_2));
          VCAST_SET_GLOBAL_SIZE( VCAST_NULL );
          break;
        case 3:
          VCAST_TI_9_3 ( &(R_9_1));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function ProcessMessage */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_5 ( enum Message *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_5 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_5 ( enum Message *vcast_param ) 
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
    *vcast_param = (enum Message ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = Change_Altitude;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = Invalid;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_5 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_2 ( void **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_2 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_2 ( void **vcast_param ) 
{
  {
    int VCAST_TI_9_2_object_index = vcast_get_param();
    if (( vCAST_COMMAND == vCAST_PRINT ) && (*vcast_param == NULL)) {
      vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NULL\n");
      return;
    }
    switch ( VCAST_TI_9_2_object_index ) {
      case 0: {
        if ( vCAST_COMMAND == vCAST_PRINT )
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "##ADDRESS##\n");
        else if ( vCAST_COMMAND == vCAST_SET_VAL )
          *vcast_param = (void*)NULL;
        break;
      } /* end case 0 */
      case 1:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &AltCmd;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (AltCmd);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "AltCmd\n");
          VCAST_memcpy(&AltCmd, (void *)*vcast_param, sizeof (AltCmd));
        } /* end else if */
        break;
      } /* end case 1 */
      case 2:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &CourseCmd;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (CourseCmd);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "CourseCmd\n");
          VCAST_memcpy(&CourseCmd, (void *)*vcast_param, sizeof (CourseCmd));
        } /* end else if */
        break;
      } /* end case 2 */
      case 3:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT1\n");
          VCAST_memcpy(&VECTORCAST_INT1, (void *)*vcast_param, sizeof (VECTORCAST_INT1));
        } /* end else if */
        break;
      } /* end case 3 */
      case 4:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT2;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT2);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT2\n");
          VCAST_memcpy(&VECTORCAST_INT2, (void *)*vcast_param, sizeof (VECTORCAST_INT2));
        } /* end else if */
        break;
      } /* end case 4 */
      case 5:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_INT3;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_INT3);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_INT3\n");
          VCAST_memcpy(&VECTORCAST_INT3, (void *)*vcast_param, sizeof (VECTORCAST_INT3));
        } /* end else if */
        break;
      } /* end case 5 */
      case 6:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_FLT1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_FLT1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_FLT1\n");
          VCAST_memcpy(&VECTORCAST_FLT1, (void *)*vcast_param, sizeof (VECTORCAST_FLT1));
        } /* end else if */
        break;
      } /* end case 6 */
      case 7:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_STR1;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_STR1);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_STR1\n");
          VCAST_memcpy(&VECTORCAST_STR1, (void *)*vcast_param, sizeof (VECTORCAST_STR1));
        } /* end else if */
        break;
      } /* end case 7 */
      case 8:{
        if ( vCAST_COMMAND == vCAST_SET_VAL ) {
          *vcast_param = (void*) &VECTORCAST_BUFFER;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (VECTORCAST_BUFFER);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "VECTORCAST_BUFFER\n");
          VCAST_memcpy(&VECTORCAST_BUFFER, (void *)*vcast_param, sizeof (VECTORCAST_BUFFER));
        } /* end else if */
        break;
      } /* end case 8 */
      default:
        vCAST_TOOL_ERROR = vCAST_true;
    } /* end switch */

    if ( VCAST_TI_9_2_object_index > 0 )
      vCAST_GLOBALS_TOUCHED[VCAST_TI_9_2_object_index-1] = vCAST_true;
  }
} /* end VCAST_TI_9_2 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_3 ( enum Boolean *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_3 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_3 ( enum Boolean *vcast_param ) 
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
    *vcast_param = (enum Boolean ) vCAST_VALUE_INT;
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
} /* end VCAST_TI_9_3 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_9 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900001\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_8 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
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
#include "communication_uc.cpp"

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
