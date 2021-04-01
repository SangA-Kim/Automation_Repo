/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: stack
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/stack.cpp
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
#include "stack_inst_prefix.c"
#else
#include "stack_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "stack_inst.cpp"
#else
/* If coverage is not enabled, include the original UUT */
#include "stack_vcast.cpp"
#endif
#ifdef VCAST_COVERAGE
#include "stack_inst_appendix.c"
#else
#include "stack_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "stack_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "stack_exp_inst_driver.c"
#else
#include "stack_expanded_driver.c"
#endif /*VCAST_COVERAGE*/
#else
#include "S0000009.h"
#include "vcast_undef_9.h"
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#ifdef VCAST_CLASS_INST_SHARING
#include "vcast_class_instances.h"
#endif
class Stack< float>  *C_1245370136_9;
class Stack< int>  *C_1245371128_9;
struct Stack< float> ::ItemContainer *C_1245373112_9;
struct Stack< int> ::ItemContainer *C_1268516952_9;
extern class Stack< float>  *C_1245370136_9;
;
extern struct Stack< float> ::ItemContainer *C_1245373112_9;
;
extern class Stack< int>  *C_1245371128_9;
;
extern struct Stack< int> ::ItemContainer *C_1268516952_9;
;
#include "vcast_stubs_9.c"
/* begin declarations of inlined friends */
/* end declarations of inlined friends */
void VCAST_DRIVER_9( int VC_SUBPROGRAM ) {
  try {
#ifdef VCAST_SBF_UNITS_AVAILABLE
    vCAST_MODIFY_SBF_TABLE(9, VC_SUBPROGRAM, vCAST_false);
#endif
    switch( VC_SUBPROGRAM ) {
      case 0:
        vCAST_SET_HISTORY_FLAGS ( 9, 0);
        vCAST_USER_CODE_TIMER_START();
        break;
      case 15: {
        /* Stack< float> ::ItemContainer::ItemContainer(float p) */
        vCAST_SET_HISTORY_FLAGS ( 9, 15 );
        vCAST_USER_CODE_TIMER_START();
        C_1245373112_9 = ::new 
        struct Stack< float> ::ItemContainer (
          ( P_9_15_1 ) ) ;
        break; }
      case 16: {
        /* Stack< int> ::ItemContainer::ItemContainer(int p) */
        vCAST_SET_HISTORY_FLAGS ( 9, 16 );
        vCAST_USER_CODE_TIMER_START();
        C_1268516952_9 = ::new 
        struct Stack< int> ::ItemContainer (
          ( P_9_16_1 ) ) ;
        break; }
      case 1: {
        /* Stack< float> ::Stack(unsigned maxSize) */
        vCAST_SET_HISTORY_FLAGS ( 9, 1 );
        vCAST_USER_CODE_TIMER_START();
        C_1245370136_9 = ::new 
        class Stack< float>  (
          ( P_9_1_1 ) ) ;
        break; }
      case 8: {
        /* Stack< int> ::Stack(unsigned maxSize) */
        vCAST_SET_HISTORY_FLAGS ( 9, 8 );
        vCAST_USER_CODE_TIMER_START();
        C_1245371128_9 = ::new 
        class Stack< int>  (
          ( P_9_8_1 ) ) ;
        break; }
      case 2: {
        /* bool Stack< float> ::empty() */
        if (C_1245370136_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 2 );
        vCAST_USER_CODE_TIMER_START();
        R_9_2 = 
        ( C_1245370136_9->empty( ) );
        break; }
      case 9: {
        /* bool Stack< int> ::empty() */
        if (C_1245371128_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 9 );
        vCAST_USER_CODE_TIMER_START();
        R_9_9 = 
        ( C_1245371128_9->empty( ) );
        break; }
      case 3: {
        /* Stack< float> ::operator bool() */
        if (C_1245370136_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 3 );
        vCAST_USER_CODE_TIMER_START();
        R_9_3 = 
        ( C_1245370136_9->operator bool( ) );
        break; }
      case 10: {
        /* Stack< int> ::operator bool() */
        if (C_1245371128_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 10 );
        vCAST_USER_CODE_TIMER_START();
        R_9_10 = 
        ( C_1245371128_9->operator bool( ) );
        break; }
      case 4: {
        /* void Stack< float> ::push(float item) */
        try {
          if (C_1245370136_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 4 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245370136_9->push(
            ( P_9_4_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_4_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 1 );
        }
        break; }
      case 11: {
        /* void Stack< int> ::push(int item) */
        try {
          if (C_1245371128_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 11 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245371128_9->push(
            ( P_9_11_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_11_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 4 );
        }
        break; }
      case 5: {
        /* float Stack< float> ::pop() */
        try {
          if (C_1245370136_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 5 );
          vCAST_USER_CODE_TIMER_START();
          R_9_5 = 
          ( C_1245370136_9->pop( ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_5_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 2 );
        }
        break; }
      case 12: {
        /* int Stack< int> ::pop() */
        try {
          if (C_1245371128_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 12 );
          vCAST_USER_CODE_TIMER_START();
          R_9_12 = 
          ( C_1245371128_9->pop( ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_12_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 5 );
        }
        break; }
      case 6: {
        /* unsigned Stack< float> ::count() */
        if (C_1245370136_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 6 );
        vCAST_USER_CODE_TIMER_START();
        R_9_6 = 
        ( C_1245370136_9->count( ) );
        break; }
      case 13: {
        /* unsigned Stack< int> ::count() */
        if (C_1245371128_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 13 );
        vCAST_USER_CODE_TIMER_START();
        R_9_13 = 
        ( C_1245371128_9->count( ) );
        break; }
      case 7: {
        /* void Stack< float> ::grow(unsigned newMax) */
        try {
          if (C_1245370136_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 7 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245370136_9->grow(
            ( P_9_7_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_7_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 3 );
        }
        break; }
      case 14: {
        /* void Stack< int> ::grow(unsigned newMax) */
        try {
          if (C_1245371128_9 == VCAST_NULL){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 14 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245371128_9->grow(
            ( P_9_14_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_14_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 6 );
        }
        break; }
      default:
        vectorcast_print_string("ERROR: Internal Tool Error\n");
        break;
    } /* switch */
    vCAST_USER_CODE_TIMER_STOP();
  } catch( ... ) {
    vCAST_USER_CODE_TIMER_STOP();
    vCAST_SET_HISTORY( 1000, 999 );
  }
}

void VCAST_SBF_9( int VC_SUBPROGRAM ) {
  switch( VC_SUBPROGRAM ) {
    case 15: {
      Stack< float> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
      break; }
    case 16: {
      Stack< int> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
      break; }
    case 1: {
      Stack< float> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
      break; }
    case 8: {
      Stack< int> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
      break; }
    case 2: {
      Stack< float> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
      break; }
    case 9: {
      Stack< int> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
      break; }
    case 3: {
      Stack< float> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
      break; }
    case 10: {
      Stack< int> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
      break; }
    case 4: {
      Stack< float> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
      break; }
    case 11: {
      Stack< int> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
      break; }
    case 5: {
      Stack< float> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
      break; }
    case 12: {
      Stack< int> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
      break; }
    case 6: {
      Stack< float> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
      break; }
    case 13: {
      Stack< int> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
      break; }
    case 7: {
      Stack< float> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
      break; }
    case 14: {
      Stack< int> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
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
        case 1: /* for global object C_1245370136_9 */
          VCAST_TI_9_9 ( &(C_1245370136_9));
          break;
        case 2: /* for global object C_1245371128_9 */
          VCAST_TI_9_13 ( &(C_1245371128_9));
          break;
        case 3: /* for global object C_1245373112_9 */
          VCAST_TI_9_8 ( &(C_1245373112_9));
          break;
        case 4: /* for global object C_1268516952_9 */
          VCAST_TI_9_12 ( &(C_1268516952_9));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 15: /* function Stack< float> ::ItemContainer::ItemContainer */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(P_9_15_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::ItemContainer::ItemContainer */
    case 16: /* function Stack< int> ::ItemContainer::ItemContainer */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_9_16_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::ItemContainer::ItemContainer */
    case 1: /* function Stack< float> ::Stack */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::Stack */
    case 8: /* function Stack< int> ::Stack */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_8_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::Stack */
    case 2: /* function Stack< float> ::empty */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_2));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::empty */
    case 9: /* function Stack< int> ::empty */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_9));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::empty */
    case 3: /* function Stack< float> ::operator bool */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_3));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::operator bool */
    case 10: /* function Stack< int> ::operator bool */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_10));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::operator bool */
    case 4: /* function Stack< float> ::push */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_4_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_3 ( &(P_9_4_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::push */
    case 11: /* function Stack< int> ::push */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_11_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_2 ( &(P_9_11_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::push */
    case 5: /* function Stack< float> ::pop */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_5_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_3 ( &(R_9_5));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::pop */
    case 12: /* function Stack< int> ::pop */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_12_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_2 ( &(R_9_12));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::pop */
    case 6: /* function Stack< float> ::count */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(R_9_6));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::count */
    case 13: /* function Stack< int> ::count */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(R_9_13));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::count */
    case 7: /* function Stack< float> ::grow */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_7_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_9_4 ( &(P_9_7_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::grow */
    case 14: /* function Stack< int> ::grow */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_14_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_9_4 ( &(P_9_14_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::grow */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}

struct VCAST_CSU_Data *vcast_csu_data_9 = (struct VCAST_CSU_Data *)0;

/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_9 ( class Stack< float>  **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_9 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_9 ( class Stack< float>  **vcast_param ) 
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose class Stack< float>  */
        class Stack< float>  * vcast_class_pointer = (static_cast< class Stack< float>  * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Stack< float>   */
              /* Stack< float> ::Stack */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        VCAST_memset(vcast_item1->vcast_item, 0x0, sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_4 ( &((*((unsigned *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class Stack< float>  (
                        ( (*((unsigned *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        VCAST_free (vcast_item1->vcast_item);
                        VCAST_free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */ 
            break;
          } /* end case */ 
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStack */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_8 ( &(( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStack));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStackCount */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStackCount));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mMaxSize */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mMaxSize));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          case 4: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 4*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_9 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_13 ( class Stack< int>  **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_13 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_13 ( class Stack< int>  **vcast_param ) 
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose class Stack< int>  */
        class Stack< int>  * vcast_class_pointer = (static_cast< class Stack< int>  * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Stack< int>   */
              /* Stack< int> ::Stack */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        VCAST_memset(vcast_item1->vcast_item, 0x0, sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_4 ( &((*((unsigned *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class Stack< int>  (
                        ( (*((unsigned *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        VCAST_free (vcast_item1->vcast_item);
                        VCAST_free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */ 
            break;
          } /* end case */ 
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStack */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_12 ( &(( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStack));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStackCount */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStackCount));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mMaxSize */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mMaxSize));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          case 4: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 4*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_13 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_8 ( struct Stack< float> ::ItemContainer **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_8 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_8 ( struct Stack< float> ::ItemContainer **vcast_param ) 
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose struct Stack< float> ::ItemContainer */
        struct Stack< float> ::ItemContainer * vcast_class_pointer = (static_cast< struct Stack< float> ::ItemContainer * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for struct Stack< float> ::ItemContainer  */
              /* Stack< float> ::ItemContainer::ItemContainer */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((float *)(vcast_item1->vcast_item)))));
                        VCAST_memset(vcast_item1->vcast_item, 0x0, sizeof ((*((float *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_8_3 ( &((*((float *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      struct Stack< float> ::ItemContainer (
                        ( (*((float *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        VCAST_free (vcast_item1->vcast_item);
                        VCAST_free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */ 
            break;
          } /* end case */ 
          /* Setting member variable ( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->item */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_3 ( &(( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->item));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->next */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_8 ( &(( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->next));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 3*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_8 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_12 ( struct Stack< int> ::ItemContainer **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_12 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_12 ( struct Stack< int> ::ItemContainer **vcast_param ) 
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose struct Stack< int> ::ItemContainer */
        struct Stack< int> ::ItemContainer * vcast_class_pointer = (static_cast< struct Stack< int> ::ItemContainer * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for struct Stack< int> ::ItemContainer  */
              /* Stack< int> ::ItemContainer::ItemContainer */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item1->vcast_item)))));
                        VCAST_memset(vcast_item1->vcast_item, 0x0, sizeof ((*((int *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_8_2 ( &((*((int *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      struct Stack< int> ::ItemContainer (
                        ( (*((int *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        VCAST_free (vcast_item1->vcast_item);
                        VCAST_free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */ 
            break;
          } /* end case */ 
          /* Setting member variable ( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->item */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->item));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->next */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_12 ( &(( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->next));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 3*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_12 */
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


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_5 ( bool *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_5 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_5 ( bool *vcast_param ) 
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        if (*vcast_param)
          vectorcast_fprint_string(vCAST_OUTPUT_FILE, "true\n");
        else
          vectorcast_fprint_string(vCAST_OUTPUT_FILE, "false\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( bool  ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = 0;
    break;
  case vCAST_MID_VAL :
    *vcast_param = 0;
    break;
  case vCAST_LAST_VAL :
    *vcast_param = 1;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = 0;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = 1;
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


/* An enumeration */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_7 ( enum StackErrorsT *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_7 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_7 ( enum StackErrorsT *vcast_param ) 
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
    *vcast_param = (enum StackErrorsT ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = E_OVERFLOW;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = E_UNDERFLOW;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_7 */
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
  /* Range Data for TI (scalar) VCAST_TI_9_4 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_5 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900005\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,1 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900011\n" );
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
#include "stack_uc.cpp"

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
