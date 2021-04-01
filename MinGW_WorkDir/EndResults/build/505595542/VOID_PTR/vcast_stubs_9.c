#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
unsigned P_10_1_1;
void ChangeAltitude(unsigned altitude)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_194509928
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_194509928
  if ( vcast_is_in_driver ) {
    P_10_1_1 = altitude;
    vCAST_COMMON_STUB_PROC_9( 10, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_194509928
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_194509928
  vCAST_USER_CODE_TIMER_START();
  return;
}


float P_10_2_1;
void ChangeCourse(float course)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3756777638
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3756777638
  if ( vcast_is_in_driver ) {
    P_10_2_1 = course;
    vCAST_COMMON_STUB_PROC_9( 10, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_3756777638
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_3756777638
  vCAST_USER_CODE_TIMER_START();
  return;
}


enum Message P_10_3_1;
void InvalidCommand(MessageT messageCategory)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_600685314
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_600685314
  if ( vcast_is_in_driver ) {
    P_10_3_1 = messageCategory;
    vCAST_COMMON_STUB_PROC_9( 10, 3, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_600685314
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_600685314
  vCAST_USER_CODE_TIMER_START();
  return;
}


/* END PROTOTYPE STUBS */
