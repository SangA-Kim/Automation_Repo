/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: PayrollSystem
 *
 * Path: C:/VCAST/Training/SourceFiles/Payroll/PayrollSystem.cpp
 *
 * Type: not-stubbed
 *
 * Unit Number: 12
 *
 ***********************************************/
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
#ifdef VCAST_COVERAGE
#ifndef VCAST_COVERAGE_COLLAPSE_ALL
#define VCAST_HEADER_EXPANSION
#endif
#endif
#ifdef VCAST_HEADER_EXPANSION
#include "PayrollSystem_inst_prefix.c"
#else
#include "PayrollSystem_prefix.c"
#endif
#ifdef VCAST_COVERAGE
/* If coverage is enabled, include the instrumented UUT */
#include "PayrollSystem_inst.cpp"
#else
/* If coverage is not enabled, include the original UUT */
#include "C:/VCAST/Training/SourceFiles/Payroll/PayrollSystem.cpp"
#endif
#ifdef VCAST_HEADER_EXPANSION
#include "PayrollSystem_inst_appendix.c"
#else
#include "PayrollSystem_appendix.c"
#include "S0000008.h"
#endif
#endif /* VCAST_DRIVER_ONLY */
#include "PayrollSystem_driver_prefix.c"
#ifdef VCAST_HEADER_EXPANSION
#ifdef VCAST_COVERAGE
#include "PayrollSystem_exp_inst_driver.c"
#else
#include "PayrollSystem_expanded_driver.c"
#endif /*VCAST_COVERAGE*/
#else
#include "B0000001.h"
#include "S0000002.h"
#include "S0000004.h"
#include "S0000007.h"
#include "vcast_undef_12.h"
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
#include "vcast_uc_prototypes.h"
#define VCAST_EXTERNED
#define vcast_concrete_0
#include "vcast_concrete_classes.cpp"
#undef vcast_concrete_0
#ifdef VCAST_EXTERNED
#undef VCAST_EXTERNED
#endif
#include "vcast_stubs_12.c"
#include "vcast_ti_decls_12.h"
void VCAST_RUN_DATA_IF_12( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}
#ifdef VCAST_PARADIGM_ADD_SEGMENT
#pragma new_codesegment(1)
#endif
void VCAST_TI_RANGE_DATA_12 ( void ) {
#define VCAST_TI_SCALAR_TYPE "NEW_SCALAR\n"
#define VCAST_TI_ARRAY_TYPE  "NEW_ARRAY\n"
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
#include "PayrollSystem_uc.cpp"

void vCAST_COMMON_STUB_PROC_12(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData )
{
   vCAST_BEGIN_STUB_PROC_12(unitIndex, subprogramIndex);
   if ( robjectIndex )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, robjectIndex );
   if ( readEobjectData )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, 0 );
   vCAST_SET_HISTORY( unitIndex, subprogramIndex );
   vCAST_READ_COMMAND_DATA( vCAST_CURRENT_SLOT, unitIndex, subprogramIndex, vCAST_true, vCAST_false );
   vCAST_READ_COMMAND_DATA_FOR_USER_GLOBALS();
   vCAST_STUB_PROCESSING_12(unitIndex, subprogramIndex);
}
#endif /* VCAST_HEADER_EXPANSION */
