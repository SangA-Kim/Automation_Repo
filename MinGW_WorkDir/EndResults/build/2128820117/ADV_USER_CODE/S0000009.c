/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: datalink_transmit
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/datalink_transmit.c
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
#include "datalink_transmit_inst_prefix.c"
#else
#include "datalink_transmit_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "datalink_transmit_inst.c"
#else
/* If coverage is not enabled, include the original UUT */
#include "datalink_transmit_vcast.c"
#endif
#ifdef VCAST_COVERAGE
#include "datalink_transmit_inst_appendix.c"
#else
#include "datalink_transmit_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "datalink_transmit_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "datalink_transmit_exp_inst_driver.c"
#else
#include "datalink_transmit_expanded_driver.c"
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
      /* void hw_send_rts(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 1 );
      vCAST_USER_CODE_TIMER_START();
      ( hw_send_rts( ) );
      break; }
    case 2: {
      /* int hw_check_cts(void) */
      vCAST_SET_HISTORY_FLAGS ( 9, 2 );
      vCAST_USER_CODE_TIMER_START();
      R_9_2 = 
      ( hw_check_cts( ) );
      break; }
    case 3: {
      /* void hw_tx_byte(unsigned char ch) */
      vCAST_SET_HISTORY_FLAGS ( 9, 3 );
      vCAST_USER_CODE_TIMER_START();
      ( hw_tx_byte(
        ( P_9_3_1 ) ) );
      break; }
    case 4: {
      /* t_msg_sts data_tx_V1(unsigned char * msg, unsigned char msg_len) */
      vCAST_SET_HISTORY_FLAGS ( 9, 4 );
      vCAST_USER_CODE_TIMER_START();
      R_9_4 = 
      ( data_tx_V1(
        ( P_9_4_1 ),
        ( P_9_4_2 ) ) );
      break; }
    case 5: {
      /* t_msg_sts data_tx_V2(unsigned char * data_ptr, unsigned char data_len) */
      vCAST_SET_HISTORY_FLAGS ( 9, 5 );
      vCAST_USER_CODE_TIMER_START();
      R_9_5 = 
      ( data_tx_V2(
        ( P_9_5_1 ),
        ( P_9_5_2 ) ) );
      break; }
    case 6: {
      /* t_msg_sts pkt_transmit(unsigned char * msg, unsigned char msg_len, unsigned char msg_num) */
      vCAST_SET_HISTORY_FLAGS ( 9, 6 );
      vCAST_USER_CODE_TIMER_START();
      R_9_6 = 
      ( pkt_transmit(
        ( P_9_6_1 ),
        ( P_9_6_2 ),
        ( P_9_6_3 ) ) );
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
        case 1: /* for global object log_flag */
          VCAST_TI_8_2 ( &(log_flag));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 7: /* function log_msg */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            VCAST_SET_GLOBAL_SIZE( &P_10_1_1_memsize );
          VCAST_TI_9_2 ( &(P_10_1_1));
          VCAST_SET_GLOBAL_SIZE( VCAST_NULL );
          break;
        case 2:
          VCAST_TI_8_2 ( &(P_10_1_2));
          break;
        case 3:
          VCAST_TI_8_2 ( &(R_10_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function log_msg */
    case 8: /* function calc_crc */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          if( vCAST_COMMAND == vCAST_SET_VAL )
            VCAST_SET_GLOBAL_SIZE( &P_10_2_1_memsize );
          VCAST_TI_9_2 ( &(P_10_2_1));
          VCAST_SET_GLOBAL_SIZE( VCAST_NULL );
          break;
        case 2:
          VCAST_TI_8_2 ( &(P_10_2_2));
          break;
        case 3:
          VCAST_TI_8_2 ( &(R_10_2));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function calc_crc */
    case 1: /* function hw_send_rts */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function hw_send_rts */
    case 2: /* function hw_check_cts */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_2));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function hw_check_cts */
    case 3: /* function hw_tx_byte */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_3_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function hw_tx_byte */
    case 4: /* function data_tx_V1 */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_3 ( &(P_9_4_1));
          break;
        case 2:
          VCAST_TI_9_4 ( &(P_9_4_2));
          break;
        case 3:
          VCAST_TI_9_5 ( &(R_9_4));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function data_tx_V1 */
    case 5: /* function data_tx_V2 */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_3 ( &(P_9_5_1));
          break;
        case 2:
          VCAST_TI_9_4 ( &(P_9_5_2));
          break;
        case 3:
          VCAST_TI_9_5 ( &(R_9_5));
          break;
        case 4:
          VCAST_TI_SBF_OBJECT( &SBF_9_5 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function data_tx_V2 */
    case 6: /* function pkt_transmit */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_3 ( &(P_9_6_1));
          break;
        case 2:
          VCAST_TI_9_4 ( &(P_9_6_2));
          break;
        case 3:
          VCAST_TI_9_4 ( &(P_9_6_3));
          break;
        case 4:
          VCAST_TI_9_5 ( &(R_9_6));
          break;
        case 5:
          VCAST_TI_SBF_OBJECT( &SBF_9_6 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function pkt_transmit */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}


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
          *vcast_param = (void*) &my_stub_ctr;
          if ( VCAST_GET_GLOBAL_SIZE() )
            *VCAST_GET_GLOBAL_SIZE() = sizeof (my_stub_ctr);
        } else if ( vCAST_COMMAND == vCAST_PRINT ) {
          vectorcast_fprint_string (vCAST_OUTPUT_FILE, "my_stub_ctr\n");
          VCAST_memcpy(&my_stub_ctr, (void *)*vcast_param, sizeof (my_stub_ctr));
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

    if ( VCAST_TI_9_2_object_index > 0 )
      vCAST_GLOBALS_TOUCHED[VCAST_TI_9_2_object_index-1] = vCAST_true;
  }
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


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_3 ( unsigned char **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_3 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_3 ( unsigned char **vcast_param ) 
{
  {
    int VCAST_TI_9_3_index;
    if (((*vcast_param) == 0) && (vCAST_COMMAND != vCAST_ALLOCATE)){
      if ( vCAST_COMMAND == vCAST_PRINT )
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"null\n");
    } else {
      if (vCAST_COMMAND == vCAST_ALLOCATE && vcast_proc_handles_command(1)) {
        int VCAST_TI_9_3_array_size = (int) vCAST_VALUE;
        if (VCAST_FIND_INDEX() == -1) {
          void **VCAST_TI_9_3_memory_ptr = (void**)vcast_param;
          *VCAST_TI_9_3_memory_ptr = (void*)VCAST_malloc(VCAST_TI_9_3_array_size*(sizeof(unsigned char )));
          VCAST_memset((void*)*vcast_param, 0x0, VCAST_TI_9_3_array_size*(sizeof(unsigned char )));
#ifndef VCAST_NO_MALLOC
          VCAST_Add_Allocated_Data(*VCAST_TI_9_3_memory_ptr);
#endif
        }
      } else if (vCAST_VALUE_NUL == vCAST_true && vcast_proc_handles_command(1)) {
        if (VCAST_FIND_INDEX() == -1)
          *vcast_param = 0;
      } else {
        if (VCAST_FIND_INDEX() == -1 )
          VCAST_TI_STRING ( (char**)vcast_param, 0,-1);
        else {
          VCAST_TI_9_3_index = vcast_get_param();
          VCAST_TI_9_4 ( &((*vcast_param)[VCAST_TI_9_3_index]));
        }
      }
    }
  }
} /* end VCAST_TI_9_3 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_5 ( enum e_msg_sts *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_5 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_5 ( enum e_msg_sts *vcast_param ) 
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
    *vcast_param = (enum e_msg_sts ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = BAD_PTR;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = RX_BAD;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_5 */
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
#include "datalink_transmit_uc.cpp"

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
