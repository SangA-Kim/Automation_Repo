void VCAST_RUN_DATA_IF_8( int, int );
void VCAST_RUN_DATA_IF_9( int, int );
void VCAST_TI_RANGE_DATA_8(void);
void VCAST_TI_RANGE_DATA_9(void);
#include "B0000001.h"
#include "S0000002.h"
void vcast_B1_switch( int VCAST_UNIT_INDEX, int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX, char *work )
{
switch( VCAST_UNIT_INDEX ) {
case 0:
  switch( VCAST_PARAM_INDEX ) {
  case 0:
    vCAST_SUBPROGRAM = (int)vCAST_VALUE;
    break;
  case 2:      /* deprecated */ 
    break;
  case 3:
    vCAST_UNIT = (int)vCAST_VALUE;
    break;
  case 4:
    vCAST_SET_TESTCASE_CONFIGURATION_OPTIONS( VCAST_SUB_INDEX, VCAST_atoi(work), 0 );
    break;
  case 5:
    vcastIsCodeBasedTest = (vCAST_boolean)vCAST_VALUE;
    break;
  case 9:
    vCAST_SET_TESTCASE_OPTIONS ( work );
    break;
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break;
  } /* switch VCAST_PARAM_INDEX */
  break; /* case 0 */
case 1: /* TI RANGE DATA */
  VCAST_TI_RANGE_DATA_8();
  VCAST_TI_RANGE_DATA_9();
  break;
case 8:
  VCAST_RUN_DATA_IF_8(VCAST_SUB_INDEX, VCAST_PARAM_INDEX);
  break;
case 9:
  VCAST_RUN_DATA_IF_9(VCAST_SUB_INDEX, VCAST_PARAM_INDEX);
  break;
case 10: /* PROTOTYPES */
  switch( VCAST_SUB_INDEX ) {
    case 0: /* Defined externs */
      switch( VCAST_PARAM_INDEX ) {
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch */
      break;
        case 4:
          /* For vcast_concrete_Shape::getArea */
          VCAST_RUN_DATA_IF_9( 7, VCAST_PARAM_INDEX );
          break;
        case 3:
          /* For vcast_concrete_Shape::getName */
          VCAST_RUN_DATA_IF_9( 6, VCAST_PARAM_INDEX );
          break;
        case 5:
          /* For vcast_concrete_Shape::vcast_concrete_Shape */
          VCAST_RUN_DATA_IF_9( 8, VCAST_PARAM_INDEX );
          break;
        case 6:
          /* For vcast_concrete_Shape::vcast_concrete_Shape */
          VCAST_RUN_DATA_IF_9( 9, VCAST_PARAM_INDEX );
          break;
        case 7:
          /* For Shape::getName */
          VCAST_RUN_DATA_IF_9( 10, VCAST_PARAM_INDEX );
          break;
        case 8:
          /* For Shape::getArea */
          VCAST_RUN_DATA_IF_9( 11, VCAST_PARAM_INDEX );
          break;
        case 9:
          /* For Rectangle::Rectangle */
          VCAST_RUN_DATA_IF_9( 12, VCAST_PARAM_INDEX );
          break;
        case 10:
          /* For Rectangle::Rectangle */
          VCAST_RUN_DATA_IF_9( 13, VCAST_PARAM_INDEX );
          break;
        case 11:
          /* For Rectangle::getArea */
          VCAST_RUN_DATA_IF_9( 14, VCAST_PARAM_INDEX );
          break;
        case 1:
          /* For Shape::Shape */
          VCAST_RUN_DATA_IF_9( 4, VCAST_PARAM_INDEX );
          break;
        case 2:
          /* For Shape::Shape */
          VCAST_RUN_DATA_IF_9( 5, VCAST_PARAM_INDEX );
          break;
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch */
  break; /* case 10 */
} /* switch */
} /* vcast_B1_switch */

int vCAST_ITERATION_COUNTER_SWITCH( int VCAST_UNIT_INDEX)
{
  return VCAST_UNIT_INDEX - 8;
} /* vCAST_ITERATION_COUNTER_SWITCH */
