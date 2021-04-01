/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: Acme_PayrollSystem
 *
 * Path: C:/VCAST/Training/SourceFiles/Payroll/Acme_PayrollSystem.cpp
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
#include "Acme_PayrollSystem_inst_prefix.c"
#else
#include "Acme_PayrollSystem_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "Acme_PayrollSystem_inst.cpp"
#else
/* If coverage is not enabled, include the original UUT */
#include "Acme_PayrollSystem_vcast.cpp"
#endif
#ifdef VCAST_COVERAGE
#include "Acme_PayrollSystem_inst_appendix.c"
#else
#include "Acme_PayrollSystem_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "Acme_PayrollSystem_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "Acme_PayrollSystem_exp_inst_driver.c"
#else
#include "Acme_PayrollSystem_expanded_driver.c"
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
class Acme_PayrollSystem *C_1119740152_9;
/* Begin Function Acme_PayrollSystem::addEmployee */
std::__cxx11::string P_9_3_1;
double P_9_3_2;
int P_9_3_3;
bool R_9_3;
/* Begin Function Acme_PayrollSystem::removeEmployee */
std::__cxx11::string P_9_4_1;
bool R_9_4;
/* Begin Function Acme_PayrollSystem::addCash */
int P_9_5_1;
/* Begin Function Acme_PayrollSystem::runPayroll */
double R_9_6;
extern class Acme_PayrollSystem *C_1119740152_9;
;
#define vcast_concrete_def_0
#define vcast_concrete_0
#include "vcast_concrete_classes.cpp"
#undef vcast_concrete_0
#undef vcast_concrete_def_0
#ifdef VCAST_EXTERNED
#undef VCAST_EXTERNED
#endif
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
      case 3: {
        /* bool PayrollSystem::addEmployee(std::__cxx11::string name, double salary, int age) */
        if (C_1119740152_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 3 );
        vCAST_USER_CODE_TIMER_START();
        R_9_3 = 
        ( C_1119740152_9->addEmployee(
          ( P_9_3_1 ),
          ( P_9_3_2 ),
          ( P_9_3_3 ) ) );
        break; }
      case 4: {
        /* bool PayrollSystem::removeEmployee(std::__cxx11::string name) */
        if (C_1119740152_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 4 );
        vCAST_USER_CODE_TIMER_START();
        R_9_4 = 
        ( C_1119740152_9->removeEmployee(
          ( P_9_4_1 ) ) );
        break; }
      case 5: {
        /* void PayrollSystem::addCash(int deposit) */
        if (C_1119740152_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 5 );
        vCAST_USER_CODE_TIMER_START();
        ( C_1119740152_9->addCash(
          ( P_9_5_1 ) ) );
        break; }
      case 6: {
        /* double PayrollSystem::runPayroll() */
        if (C_1119740152_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 6 );
        vCAST_USER_CODE_TIMER_START();
        R_9_6 = 
        ( C_1119740152_9->runPayroll( ) );
        break; }
      case 1: {
        /* Acme_PayrollSystem::Acme_PayrollSystem(double InitialCash) */
        vCAST_SET_HISTORY_FLAGS ( 9, 1 );
        vCAST_USER_CODE_TIMER_START();
        C_1119740152_9 = ::new 
        class Acme_PayrollSystem (
          ( P_9_1_1 ) ) ;
        break; }
      case 2: {
        /* void Acme_PayrollSystem::processPayCheck(Employee emp) */
        if (C_1119740152_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        if ((P_9_2_1 == VCAST_NULL ))          vCAST_APPEND_HISTORY_FLAG('P');
        vCAST_SET_HISTORY_FLAGS ( 9, 2 );
        vCAST_USER_CODE_TIMER_START();
        ( C_1119740152_9->processPayCheck(
          ( *P_9_2_1 ) ) );
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
        case 1: /* for global object C_1119740152_9 */
          VCAST_TI_9_15 ( &(C_1119740152_9));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 7: /* function vcast_concrete_PayrollSystem::processPayCheck */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_19 ( &(P_10_1_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function vcast_concrete_PayrollSystem::processPayCheck */
    case 8: /* function vcast_concrete_PayrollSystem::vcast_concrete_PayrollSystem */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_7 ( &(P_10_2_1));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function vcast_concrete_PayrollSystem::vcast_concrete_PayrollSystem */
    case 3: /* function Acme_PayrollSystem::addEmployee */
      switch ( VCAST_PARAM_INDEX ) {
      case 1:
        VCAST_TI_9_8 ( &P_9_3_1);
        break;
      case 2:
        VCAST_TI_9_7 ( &(P_9_3_2));
        break;
      case 3:
        VCAST_TI_8_2 ( &(P_9_3_3));
        break;
      case 4:
        VCAST_TI_9_3 ( &(R_9_3));
        break;
    } /* switch ( VCAST_PARAM_INDEX ) */
    break; /* function Acme_PayrollSystem::addEmployee */
  case 4: /* function Acme_PayrollSystem::removeEmployee */
    switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_8 ( &P_9_4_1);
      break;
    case 2:
      VCAST_TI_9_3 ( &(R_9_4));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Acme_PayrollSystem::removeEmployee */
case 5: /* function Acme_PayrollSystem::addCash */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(P_9_5_1));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Acme_PayrollSystem::addCash */
case 6: /* function Acme_PayrollSystem::runPayroll */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_7 ( &(R_9_6));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Acme_PayrollSystem::runPayroll */
case 9: /* function PayrollSystem::processPayCheck */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_19 ( &(P_10_3_1));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function PayrollSystem::processPayCheck */
case 1: /* function Acme_PayrollSystem::Acme_PayrollSystem */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_7 ( &(P_9_1_1));
      break;
    case 2:
      VCAST_TI_SBF_OBJECT( &SBF_9_1 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Acme_PayrollSystem::Acme_PayrollSystem */
case 2: /* function Acme_PayrollSystem::processPayCheck */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_19 ( &(P_9_2_1));
      break;
    case 2:
      VCAST_TI_SBF_OBJECT( &SBF_9_2 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Acme_PayrollSystem::processPayCheck */
default:
  vCAST_TOOL_ERROR = vCAST_true;
  break;
} /* switch ( VCAST_SUB_INDEX ) */
}

struct VCAST_CSU_Data *vcast_csu_data_9 = (struct VCAST_CSU_Data *)0;

/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_15 ( class Acme_PayrollSystem **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_15 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_15 ( class Acme_PayrollSystem **vcast_param ) 
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
      case 1: { /* Choose class Acme_PayrollSystem */
        class Acme_PayrollSystem * vcast_class_pointer = (static_cast< class Acme_PayrollSystem * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Acme_PayrollSystem  */
              /* Acme_PayrollSystem::Acme_PayrollSystem */
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
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((double *)(vcast_item1->vcast_item)))));
                        VCAST_memset(vcast_item1->vcast_item, 0x0, sizeof ((*((double *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_7 ( &((*((double *)(vcast_item1->vcast_item)))));
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
                      class Acme_PayrollSystem (
                        ( (*((double *)(vcast_item1->vcast_item))) ) ) ;
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
          /* Setting member variable ( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mEmployeeList */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_22 ( ( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mEmployeeList);
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mCashOnHand */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_7 ( &(( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mCashOnHand));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mNumEmployees */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mNumEmployees));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          /* Setting member variable ( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mTotalPayroll */
          case 4: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_7 ( &(( ((class ::PayrollSystem *)(vcast_class_pointer)) ) ->mTotalPayroll));
              } /* end else */
            } /* end else */
            break; /* end case 4*/
          } /* end case */
          /* Setting member variable ( ((class ::Acme_PayrollSystem *)(vcast_class_pointer)) ) ->mTaxRate */
          case 5: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_7 ( &(( ((class ::Acme_PayrollSystem *)(vcast_class_pointer)) ) ->mTaxRate));
              } /* end else */
            } /* end else */
            break; /* end case 5*/
          } /* end case */
          /* Setting member variable ( ((class ::Acme_PayrollSystem *)(vcast_class_pointer)) ) ->mTotalTaxCollections */
          case 6: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_7 ( &(( ((class ::Acme_PayrollSystem *)(vcast_class_pointer)) ) ->mTotalTaxCollections));
              } /* end else */
            } /* end else */
            break; /* end case 6*/
          } /* end case */
          case 7: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 7*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */ 
        break;
      } /* end case */ 
    } /* end switch */ 
  }
} /* end VCAST_TI_9_15 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_19 ( class Employee **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_19 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_19 ( class Employee **vcast_param ) 
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
      case 1: { /* Choose class Employee */
        class Employee * vcast_class_pointer = (static_cast< class Employee * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Employee  */
              /* Employee::Employee */
              case 1: {
                switch ( vcast_get_param() ) {
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class Employee ( ) ;
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
              /* Employee::Employee */
              case 2: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item2 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item3 = 0;
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
                        vcast_item1->vcast_item = new class std::__cxx11::basic_string< char, std::char_traits< char> , std::allocator< char> >  ();
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_8 ( &(*((std::__cxx11::string *)(vcast_item1->vcast_item))));
                  }
                  break;
                } /* end case */
                case 2: {
                  if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                    /* Do Nothing */
                  } else {
                    /* If the value exists, it was already allocated. Look it up. */
                    vCAST_boolean vcast_found = vCAST_true;
                    vcast_item2 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                    if (vcast_item2 == 0) {
                      vcast_found = vCAST_false;
                      vcast_item2 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                      vcast_item2->vcast_item = (void*)VCAST_malloc (sizeof ((*((double *)(vcast_item2->vcast_item)))));
                      VCAST_memset(vcast_item2->vcast_item, 0x0, sizeof ((*((double *)(vcast_item2->vcast_item)))));
                      vcast_item2->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                      vcast_item2->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                      VCAST_strcpy (vcast_item2->vcast_command, vCAST_PARAMETER_KEY);
                    }
                    if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                      if (!vcast_found)
                        VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item2);
                    }
                    VCAST_TI_9_7 ( &((*((double *)(vcast_item2->vcast_item)))));
                  }
                  break;
                } /* end case */
                case 3: {
                  if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                    /* Do Nothing */
                  } else {
                    /* If the value exists, it was already allocated. Look it up. */
                    vCAST_boolean vcast_found = vCAST_true;
                    vcast_item3 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                    if (vcast_item3 == 0) {
                      vcast_found = vCAST_false;
                      vcast_item3 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                      vcast_item3->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item3->vcast_item)))));
                      VCAST_memset(vcast_item3->vcast_item, 0x0, sizeof ((*((int *)(vcast_item3->vcast_item)))));
                      vcast_item3->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                      vcast_item3->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                      VCAST_strcpy (vcast_item3->vcast_command, vCAST_PARAMETER_KEY);
                    }
                    if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                      if (!vcast_found)
                        VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item3);
                    }
                    VCAST_TI_8_2 ( &((*((int *)(vcast_item3->vcast_item)))));
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
                      vcast_item1->vcast_item = new class std::__cxx11::basic_string< char, std::char_traits< char> , std::allocator< char> >  ();
                      vcast_item1->vcast_command = 0;
                    }
                    vCAST_boolean was_allocated_2 = vCAST_false;
                    if (vcast_item2 == 0) {
                      vcast_item2 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                      vcast_item2->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item2));
                      vcast_item2->vcast_command = 0;
                    }
                    vCAST_boolean was_allocated_3 = vCAST_false;
                    if (vcast_item3 == 0) {
                      vcast_item3 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                      vcast_item3->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item3));
                      vcast_item3->vcast_command = 0;
                    }
                    vcast_is_in_driver = vCAST_false;
                    vcast_class_pointer = ::new 
                    class Employee (
                      ( (*((std::__cxx11::string *)(vcast_item1->vcast_item))) ),
                      ( (*((double *)(vcast_item2->vcast_item))) ),
                      ( (*((int *)(vcast_item3->vcast_item))) ) ) ;
                    *vcast_param = vcast_class_pointer;
                    vcast_is_in_driver = vCAST_true;
                    if (was_allocated_1) {
                      VCAST_free (vcast_item1->vcast_item);
                      VCAST_free (vcast_item1);
                    }
                    if (was_allocated_2) {
                      VCAST_free (vcast_item2->vcast_item);
                      VCAST_free (vcast_item2);
                    }
                    if (was_allocated_3) {
                      VCAST_free (vcast_item3->vcast_item);
                      VCAST_free (vcast_item3);
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
        /* Setting member variable ( ((class ::Employee *)(vcast_class_pointer)) ) ->mSalary */
        case 1: { 
          if ( settingRange () )
            vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
          else {
            if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
              vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
            else {
              VCAST_TI_9_7 ( &(( ((class ::Employee *)(vcast_class_pointer)) ) ->mSalary));
            } /* end else */
          } /* end else */
          break; /* end case 1*/
        } /* end case */
        /* Setting member variable ( ((class ::Employee *)(vcast_class_pointer)) ) ->mName */
        case 2: { 
          if ( settingRange () )
            vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
          else {
            if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
              vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
            else {
              VCAST_TI_9_8 ( &( ((class ::Employee *)(vcast_class_pointer)) ) ->mName);
          } /* end else */
        } /* end else */
        break; /* end case 2*/
      } /* end case */
      /* Setting member variable ( ((class ::Employee *)(vcast_class_pointer)) ) ->mAge */
      case 3: { 
        if ( settingRange () )
          vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
        else {
          if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else {
            VCAST_TI_8_2 ( &(( ((class ::Employee *)(vcast_class_pointer)) ) ->mAge));
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
} /* end VCAST_TI_9_19 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* A float */
#if ((defined(VCAST_NO_TYPE_SUPPORT))||(defined(VCAST_NO_FLOAT)))
void VCAST_TI_9_7 ( double *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_7 */
#else /*((defined(VCAST_NO_TYPE_SUPPORT))||(defined(VCAST_NO_FLOAT)))*/
void VCAST_TI_9_7 ( double *vcast_param ) 
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_long_float(vCAST_OUTPUT_FILE, *vcast_param);
        vectorcast_fprint_string     (vCAST_OUTPUT_FILE, "\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( double  ) vCAST_VALUE;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = -(DBL_MAX);
    break;
  case vCAST_MID_VAL :
    *vcast_param = VCAST_DBL_MID;
    break;
  case vCAST_LAST_VAL :
    *vcast_param = DBL_MAX;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = -(DBL_MAX);
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = DBL_MAX;
    *vcast_param = *vcast_param + 1;
    break;
  case vCAST_ZERO_VAL :
    *vcast_param = 0;
    break;
  case vCAST_POS_INF_VAL :
    *vcast_param = VCAST_GET_POSITIVE_INFINITY ();
    break;
  case vCAST_NEG_INF_VAL :
    *vcast_param = VCAST_GET_NEGATIVE_INFINITY ();
    break;
  case vCAST_NAN_VAL :
    *vcast_param = VCAST_GET_QUIET_NAN ();
    break;
  default:
    break;
} /* end switch */
} /* end VCAST_TI_9_7 */
#endif /*((defined(VCAST_NO_TYPE_SUPPORT))||(defined(VCAST_NO_FLOAT)))*/


/* A typedef */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_8 ( std::__cxx11::string *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_8 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_8 ( std::__cxx11::string *vcast_param ) 
{
#if (defined(VCAST_NO_TYPE_SUPPORT))
  /* User code: type is not supported */
  vcast_not_supported();
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
  {
    switch (vCAST_COMMAND) {
      case vCAST_PRINT:
        {
          char *vcast_char = const_cast<char*>(vcast_param->c_str ());
          VCAST_TI_STRING ( &vcast_char, 0, -1 );
        }
        break;
      case vCAST_SET_VAL:
        *vcast_param = VCAST_convert ( &vCAST_PARAMETER[vCAST_INDEX+1] );
        break;
      default :
        break;
      } /* switch */
    }
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/

} /* end VCAST_TI_9_8 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An integer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_3 ( bool *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_3 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_3 ( bool *vcast_param ) 
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
} /* end VCAST_TI_9_3 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


/* An array */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_22 ( class Employee *vcast_param[100] ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_22 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_22 ( class Employee *vcast_param[100] ) 
{
  {
    int VCAST_TI_9_22_array_index = 0;
    int VCAST_TI_9_22_index = 0;
    int VCAST_TI_9_22_first, VCAST_TI_9_22_last;
    int VCAST_TI_9_22_local_field = 0;
    int VCAST_TI_9_22_value_printed = 0;

    vcast_get_range_value (&VCAST_TI_9_22_first, &VCAST_TI_9_22_last);
    VCAST_TI_9_22_local_field = vCAST_DATA_FIELD;
    {
      int VCAST_TI_9_22_upper = 100;
      for (VCAST_TI_9_22_array_index=0; VCAST_TI_9_22_array_index< VCAST_TI_9_22_upper; VCAST_TI_9_22_array_index++){
        if ( (VCAST_TI_9_22_index >= VCAST_TI_9_22_first) && ( VCAST_TI_9_22_index <= VCAST_TI_9_22_last)){
          VCAST_TI_9_19 ( &(vcast_param[VCAST_TI_9_22_index]));
          VCAST_TI_9_22_value_printed = 1;
          vCAST_DATA_FIELD = VCAST_TI_9_22_local_field;
        } /* if */
        if (VCAST_TI_9_22_index >= VCAST_TI_9_22_last)
          break;
        VCAST_TI_9_22_index++;
      } /* loop */
      if ((vCAST_COMMAND == vCAST_PRINT)&&(!VCAST_TI_9_22_value_printed))
        vectorcast_fprint_string(vCAST_OUTPUT_FILE,"<<past end of array>>\n");
    }
  }
} /* end VCAST_TI_9_22 */
#endif /*(defined(VCAST_NO_TYPE_SUPPORT))*/


#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_9 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900003\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(INT_MIN / 2) + (INT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,INT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,1 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_4 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900005\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(CHAR_MIN/2) + (CHAR_MAX/2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_6 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900007\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(UINT_MIN / 2) + (UINT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,UINT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#ifndef VCAST_NO_FLOAT
  /* Range Data for TI (scalar) VCAST_TI_9_7 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900009\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,-(DBL_MAX) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,VCAST_DBL_MID );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,DBL_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
#endif
  /* Range Data for TI (scalar) VCAST_TI_9_9 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900011\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,USHRT_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,(USHRT_MIN / 2) + (USHRT_MAX / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_short (vCAST_OUTPUT_FILE,USHRT_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (array) VCAST_TI_9_17 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_ARRAY_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"100003\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,16);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
  /* Range Data for TI (array) VCAST_TI_9_22 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_ARRAY_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"100005\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,100);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "Acme_PayrollSystem_uc.cpp"

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
