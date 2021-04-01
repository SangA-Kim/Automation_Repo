#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
class ::Employee *P_10_3_1;
void PayrollSystem::processPayCheck(Employee emp)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2398994567
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2398994567
  if ( vcast_is_in_driver ) {
    P_10_3_1 = &emp;
    vCAST_COMMON_STUB_PROC_9( 10, 3, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2398994567
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2398994567
  vCAST_USER_CODE_TIMER_START();
  return;
}


/* END PROTOTYPE STUBS */
