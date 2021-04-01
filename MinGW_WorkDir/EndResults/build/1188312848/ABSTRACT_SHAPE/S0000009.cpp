/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: shape
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.cpp
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
#include "shape_inst_prefix.c"
#else
#include "shape_vcast_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "shape_inst.cpp"
#else
/* If coverage is not enabled, include the original UUT */
#include "shape_vcast.cpp"
#endif
#ifdef VCAST_COVERAGE
#include "shape_inst_appendix.c"
#else
#include "shape_vcast_appendix.c"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "shape_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "shape_exp_inst_driver.c"
#else
#include "shape_expanded_driver.c"
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
class Shape *C_3956211000_9;
extern class Shape *C_3956211000_9;
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
      case 1: {
        /* void Shape::setPosition(int x, int y) */
        if (C_3956211000_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 1 );
        vCAST_USER_CODE_TIMER_START();
        ( C_3956211000_9->setPosition(
          ( P_9_1_1 ),
          ( P_9_1_2 ) ) );
        break; }
      case 2: {
        /* int Shape::getX() const */
        if (C_3956211000_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 2 );
        vCAST_USER_CODE_TIMER_START();
        R_9_2 = 
        ( (const_cast< const class ::Shape * >(C_3956211000_9))->getX( ) );
        break; }
      case 3: {
        /* int Shape::getY() const */
        if (C_3956211000_9 == VCAST_NULL){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 3 );
        vCAST_USER_CODE_TIMER_START();
        R_9_3 = 
        ( (const_cast< const class ::Shape * >(C_3956211000_9))->getY( ) );
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
    case 3: {
      SBF_9_3 = 0;
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
        case 1: /* for global object C_3956211000_9 */
          VCAST_TI_9_8 ( &(C_3956211000_9));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 7: /* function vcast_concrete_Shape::getArea */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(R_10_4));
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function vcast_concrete_Shape::getArea */
    case 6: /* function vcast_concrete_Shape::getName */
      switch ( VCAST_PARAM_INDEX ) {
      case 1:
        VCAST_TI_9_7 ( &R_10_3);
        break;
    } /* switch ( VCAST_PARAM_INDEX ) */
    break; /* function vcast_concrete_Shape::getName */
  case 9: /* function vcast_concrete_Shape::vcast_concrete_Shape */
    switch ( VCAST_PARAM_INDEX ) {
      case 1:
        VCAST_TI_8_2 ( &(P_10_6_1));
        break;
      case 2:
        VCAST_TI_8_2 ( &(P_10_6_2));
        break;
    } /* switch ( VCAST_PARAM_INDEX ) */
    break; /* function vcast_concrete_Shape::vcast_concrete_Shape */
  case 10: /* function Shape::getName */
    switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_9_7 ( &R_10_7);
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::getName */
case 11: /* function Shape::getArea */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_3 ( &(R_10_8));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::getArea */
case 13: /* function Rectangle::Rectangle */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(P_10_10_1));
      break;
    case 2:
      VCAST_TI_8_2 ( &(P_10_10_2));
      break;
    case 3:
      VCAST_TI_8_2 ( &(P_10_10_3));
      break;
    case 4:
      VCAST_TI_8_2 ( &(P_10_10_4));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Rectangle::Rectangle */
case 14: /* function Rectangle::getArea */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_3 ( &(R_10_11));
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Rectangle::getArea */
case 4: /* function Shape::Shape */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_SBF_OBJECT( &SBF_10_1 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::Shape */
case 5: /* function Shape::Shape */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(P_10_2_1));
      break;
    case 2:
      VCAST_TI_8_2 ( &(P_10_2_2));
      break;
    case 3:
      VCAST_TI_SBF_OBJECT( &SBF_10_2 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::Shape */
case 1: /* function Shape::setPosition */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(P_9_1_1));
      break;
    case 2:
      VCAST_TI_8_2 ( &(P_9_1_2));
      break;
    case 3:
      VCAST_TI_SBF_OBJECT( &SBF_9_1 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::setPosition */
case 2: /* function Shape::getX */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(R_9_2));
      break;
    case 2:
      VCAST_TI_SBF_OBJECT( &SBF_9_2 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::getX */
case 3: /* function Shape::getY */
  switch ( VCAST_PARAM_INDEX ) {
    case 1:
      VCAST_TI_8_2 ( &(R_9_3));
      break;
    case 2:
      VCAST_TI_SBF_OBJECT( &SBF_9_3 );
      break;
  } /* switch ( VCAST_PARAM_INDEX ) */
  break; /* function Shape::getY */
default:
  vCAST_TOOL_ERROR = vCAST_true;
  break;
} /* switch ( VCAST_SUB_INDEX ) */
}

struct VCAST_CSU_Data *vcast_csu_data_9 = (struct VCAST_CSU_Data *)0;

/* A pointer */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_8 ( class Shape **vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_8 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_8 ( class Shape **vcast_param ) 
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
      case 1: { /* Choose class vcast_concrete_Shape */
        class vcast_concrete_Shape * vcast_class_pointer = (static_cast< class vcast_concrete_Shape * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class vcast_concrete_Shape  */
              /* vcast_concrete_Shape::vcast_concrete_Shape */
              case 1: {
                switch ( vcast_get_param() ) {
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class vcast_concrete_Shape ( ) ;
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
              /* vcast_concrete_Shape::vcast_concrete_Shape */
              case 2: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item2 = 0;
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
                        vcast_item2->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item2->vcast_item)))));
                        VCAST_memset(vcast_item2->vcast_item, 0x0, sizeof ((*((int *)(vcast_item2->vcast_item)))));
                        vcast_item2->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item2->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item2->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item2);
                      }
                      VCAST_TI_8_2 ( &((*((int *)(vcast_item2->vcast_item)))));
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
                      vCAST_boolean was_allocated_2 = vCAST_false;
                      if (vcast_item2 == 0) {
                        vcast_item2 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item2->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item2));
                        vcast_item2->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class vcast_concrete_Shape (
                        ( (*((int *)(vcast_item1->vcast_item))) ),
                        ( (*((int *)(vcast_item2->vcast_item))) ) ) ;
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
          /* Setting member variable ( ((class ::Shape *)(vcast_class_pointer)) ) ->mX */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Shape *)(vcast_class_pointer)) ) ->mX));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class ::Shape *)(vcast_class_pointer)) ) ->mY */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Shape *)(vcast_class_pointer)) ) ->mY));
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
      case 2: { /* Choose class Rectangle */
        class Rectangle * vcast_class_pointer = (static_cast< class Rectangle * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Rectangle  */
              /* Rectangle::Rectangle */
              case 1: {
                switch ( vcast_get_param() ) {
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class Rectangle ( ) ;
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
              /* Rectangle::Rectangle */
              case 2: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item2 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item3 = 0;
                static struct VCAST_CSU_Data_Item *vcast_item4 = 0;
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
                        vcast_item2->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item2->vcast_item)))));
                        VCAST_memset(vcast_item2->vcast_item, 0x0, sizeof ((*((int *)(vcast_item2->vcast_item)))));
                        vcast_item2->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item2->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item2->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item2);
                      }
                      VCAST_TI_8_2 ( &((*((int *)(vcast_item2->vcast_item)))));
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
                  case 4: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item4 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item4 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item4 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item4->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item4->vcast_item)))));
                        VCAST_memset(vcast_item4->vcast_item, 0x0, sizeof ((*((int *)(vcast_item4->vcast_item)))));
                        vcast_item4->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item4->vcast_command = (char*)VCAST_malloc (sizeof(char)*(VCAST_strlen (vCAST_PARAMETER_KEY)+1));
                        VCAST_strcpy (vcast_item4->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item4);
                      }
                      VCAST_TI_8_2 ( &((*((int *)(vcast_item4->vcast_item)))));
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
                      vCAST_boolean was_allocated_4 = vCAST_false;
                      if (vcast_item4 == 0) {
                        vcast_item4 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item4->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item4));
                        vcast_item4->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new 
                      class Rectangle (
                        ( (*((int *)(vcast_item1->vcast_item))) ),
                        ( (*((int *)(vcast_item2->vcast_item))) ),
                        ( (*((int *)(vcast_item3->vcast_item))) ),
                        ( (*((int *)(vcast_item4->vcast_item))) ) ) ;
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
                      if (was_allocated_4) {
                        VCAST_free (vcast_item4->vcast_item);
                        VCAST_free (vcast_item4);
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
          /* Setting member variable ( ((class ::Shape *)(vcast_class_pointer)) ) ->mX */
          case 1: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Shape *)(vcast_class_pointer)) ) ->mX));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class ::Shape *)(vcast_class_pointer)) ) ->mY */
          case 2: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Shape *)(vcast_class_pointer)) ) ->mY));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class ::Rectangle *)(vcast_class_pointer)) ) ->mHeight */
          case 3: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Rectangle *)(vcast_class_pointer)) ) ->mHeight));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          /* Setting member variable ( ((class ::Rectangle *)(vcast_class_pointer)) ) ->mWidth */
          case 4: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((class ::Rectangle *)(vcast_class_pointer)) ) ->mWidth));
              } /* end else */
            } /* end else */
            break; /* end case 4*/
          } /* end case */
          case 5: { 
            if ( settingRange () )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 5*/
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


/* A typedef */
#if (defined(VCAST_NO_TYPE_SUPPORT))
void VCAST_TI_9_7 ( std::__cxx11::string *vcast_param ) 
{
  /* User code: type is not supported */
  vcast_not_supported();
} /* end VCAST_TI_9_7 */
#else /*(defined(VCAST_NO_TYPE_SUPPORT))*/
void VCAST_TI_9_7 ( std::__cxx11::string *vcast_param ) 
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
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MIN );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(CHAR_MIN/2) + (CHAR_MAX/2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,CHAR_MAX );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_5 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_SCALAR_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900006\n" );
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
  /* Range Data for TI (array) VCAST_TI_9_9 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, VCAST_TI_ARRAY_TYPE );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"100003\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,16);
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"%%\n");
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "shape_uc.cpp"

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
