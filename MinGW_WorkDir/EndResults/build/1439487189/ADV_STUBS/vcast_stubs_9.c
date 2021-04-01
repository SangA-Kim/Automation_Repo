#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */

/* INITIALIZATION_OBJECTS_USER_CODE "1" */
/* INITIALIZATION_OBJECTS_USER_CODE_END "1" */
const int debug_flag 
/* INITIALIZATION_CODE_USER_CODE "1" */
      =1;
/* INITIALIZATION_CODE_USER_CODE_END "1" */
;
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
unsigned P_10_1_1;
void *R_10_1;
unsigned char SBF_10_1 = 0;
#undef malloc
__attribute__((__cdecl__))void *malloc(size_t VCAST_PARAM_1);
__attribute__((__cdecl__))void *VCAST_LIB_STUB_malloc(size_t VCAST_PARAM_1)
{
  if(SBF_10_1) {
    vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2803490479
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2803490479
    if ( vcast_is_in_driver ) {
      P_10_1_1 = VCAST_PARAM_1;
      vCAST_COMMON_STUB_PROC_9( 10, 1, 2, 0 );
    } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2803490479
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2803490479
    vCAST_USER_CODE_TIMER_START();
    return R_10_1;
  }
  return malloc(VCAST_PARAM_1);
}


char R_10_2;
char read_key_pad(void)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_4117180857
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_4117180857
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_4117180857
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_4117180857
  vCAST_USER_CODE_TIMER_START();
  return R_10_2;
}


float R_10_3;
float myGauge(void)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2000124001
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2000124001
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2000124001
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2000124001
  vCAST_USER_CODE_TIMER_START();
  return R_10_3;
}


/* END PROTOTYPE STUBS */
