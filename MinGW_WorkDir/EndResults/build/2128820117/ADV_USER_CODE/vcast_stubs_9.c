#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
unsigned P_10_1_1_memsize;
void *P_10_1_1;
int P_10_1_2;
int R_10_1;
int log_msg(void * msg, int msg_len)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_124745332
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_124745332
  if ( vcast_is_in_driver ) {
    P_10_1_1 = msg;
    P_10_1_2 = msg_len;
    vCAST_COMMON_STUB_PROC_9( 10, 1, 3, 0 );
    if ( P_10_1_1_memsize > 0 )
      VCAST_memcpy ( msg, P_10_1_1, P_10_1_1_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_124745332
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_124745332
  vCAST_USER_CODE_TIMER_START();
  return R_10_1;
}


unsigned P_10_2_1_memsize;
void *P_10_2_1;
int P_10_2_2;
int R_10_2;
int calc_crc(void * msg, int msg_len)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2809052359
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2809052359
  if ( vcast_is_in_driver ) {
    P_10_2_1 = msg;
    P_10_2_2 = msg_len;
    vCAST_COMMON_STUB_PROC_9( 10, 2, 3, 0 );
    if ( P_10_2_1_memsize > 0 )
      VCAST_memcpy ( msg, P_10_2_1, P_10_2_1_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2809052359
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2809052359
  vCAST_USER_CODE_TIMER_START();
  return R_10_2;
}


void reset_transmitter(void)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3478164839
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3478164839
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_3478164839
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_3478164839
  vCAST_USER_CODE_TIMER_START();
  return;
}


/* END PROTOTYPE STUBS */
