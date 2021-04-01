/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: inlines
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/inlines.cpp
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
#include "inlines_inst_prefix.c"
#else
#include "inlines_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "inlines_inst.cpp"
#else
/* If coverage is not enabled, include the original UUT */
#include "inlines_vcast.cpp"
#endif
#ifdef VCAST_COVERAGE
#include "inlines_inst_appendix.c"
#else
#include "inlines_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "inlines_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "inlines_exp_inst_driver.c"
#else
#include "inlines_expanded_driver.c"
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
class class_with_only_inlines *C_11558984_9;
class class_with_some_inlines *C_345208_9;
extern class class_with_only_inlines *C_11558984_9;
;
extern class class_with_some_inlines *C_345208_9;
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
      case 4: {
        /* int class_with_some_inlines::get_int() */
        if (C_345208_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 4 );
        vCAST_USER_CODE_TIMER_START();
        R_9_4 = 
        ( C_345208_9->get_int( ) );
        break; }
      case 3: {
        /* int non_member_inline() */
        vCAST_SET_HISTORY_FLAGS ( 9, 3 );
        vCAST_USER_CODE_TIMER_START();
        R_9_3 = 
        ( non_member_inline( ) );
        break; }
      case 5: {
        /* class_with_only_inlines::class_with_only_inlines() */
        vCAST_SET_HISTORY_FLAGS ( 9, 5 );
        vCAST_USER_CODE_TIMER_START();
        C_11558984_9 = ::new 
        class class_with_only_inlines ( ) ;
        break; }
      case 6: {
        /* int class_with_only_inlines::inline_member() */
        if (C_11558984_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 6 );
        vCAST_USER_CODE_TIMER_START();
        R_9_6 = 
        ( C_11558984_9->inline_member( ) );
        break; }
      case 1: {
        /* class_with_some_inlines::class_with_some_inlines(int i) */
        vCAST_SET_HISTORY_FLAGS ( 9, 1 );
        vCAST_USER_CODE_TIMER_START();
        C_345208_9 = ::new 
        class class_with_some_inlines (
          ( P_9_1_1 ) ) ;
        break; }
      case 2: {
        /* int class_with_some_inlines::use_int() */
        if (C_345208_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 2 );
        vCAST_USER_CODE_TIMER_START();
        R_9_2 = 
        ( C_345208_9->use_int( ) );
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
    case 4: {
      SBF_9_4 = 0;
      break; }
    case 3: {
      SBF_9_3 = 0;
      break; }
    case 5: {
      SBF_9_5 = 0;
      break; }
    case 6: {
      SBF_9_6 = 0;
      break; }
    case 1: {
      SBF_9_1 = 0;
      break; }
    case 2: {
      SBF_9_2 = 0;
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
        case 2: /* for global object C_11558984_9 */
          VCAST_TI_9_6 ( &(C_11558984_9));
          break;
        case 1: /* for global object C_345208_9 */
          VCAST_TI_9_1 ( &(C_345208_9));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 4: /* function class_with_some_inlines::get_int */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_4));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_4 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function class_with_some_inlines::get_int */
    case 3: /* function non_member_inline */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_3));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_3 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function non_member_inline */
    case 5: /* function class_with_only_inlines::class_with_only_inlines */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_SBF_OBJECT( &SBF_9_5 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function class_with_only_inlines::class_with_only_inlines */
    case 6: /* function class_with_only_inlines::inline_member */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_6));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_6 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function class_with_only_inlines::inline_member */
    case 1: /* function class_with_some_inlines::class_with_some_inlines */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_1 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function class_with_some_inlines::class_with_some_inlines */
    case 2: /* function class_with_some_inlines::use_int */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(R_9_2));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &SBF_9_2 );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function class_with_some_inlines::use_int */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}

struct VCAST_CSU_Data *vcast_csu_data_9 = (struct VCAST_CSU_Data *)0;

/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_6 ( class class_with_only_inlines **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_6 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_6 ( class class_with_only_inlines **vcast_param ) 
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
      case 1: { /* Choose class class_with_only_inlines */
        class class_with_only_inlines * vcast_class_pointer = (static_cast< class class_with_only_inlines * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class class_with_only_inlines  */
              /* class_with_only_inlines::class_with_only_inlines */
              case 1: {
                switch ( vcast_get_param() ) {
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class class_with_only_inlines ( ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
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
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 1*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_6 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_1 ( class class_with_some_inlines **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_1 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_1 ( class class_with_some_inlines **vcast_param ) 
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
      case 1: { /* Choose class class_with_some_inlines */
        class class_with_some_inlines * vcast_class_pointer = (static_cast< class class_with_some_inlines * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class class_with_some_inlines  */
              /* class_with_some_inlines::class_with_some_inlines */
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
                      class class_with_some_inlines (
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
          /* Setting member variable ( ((class class_with_some_inlines *)(vcast_class_pointer)) ) ->m_i */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class class_with_some_inlines *)(vcast_class_pointer)) ) ->m_i));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 2*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_1 */
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
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "inlines_uc.cpp"

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
