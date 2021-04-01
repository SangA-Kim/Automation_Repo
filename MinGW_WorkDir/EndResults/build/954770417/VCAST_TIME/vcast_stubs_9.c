#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
struct time P_10_1_1;
int R_10_1;
int invalid_time(time_T time_val)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2187305789
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2187305789
  if ( vcast_is_in_driver ) {
    P_10_1_1 = time_val;
    vCAST_COMMON_STUB_PROC_9( 10, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2187305789
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2187305789
  vCAST_USER_CODE_TIMER_START();
  return R_10_1;
}


/* END PROTOTYPE STUBS */
