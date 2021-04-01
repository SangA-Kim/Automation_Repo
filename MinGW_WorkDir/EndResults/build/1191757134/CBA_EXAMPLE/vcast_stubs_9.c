#ifndef VCAST_NEVER_STUB_EXTERNS
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
#endif /*VCAST_NEVER_STUB_EXTERNS*/
/* BEGIN PROTOTYPE STUBS */
unsigned P_10_1_1_memsize;
void *P_10_1_1;
int R_10_1;
int send_can_msg(void * VCAST_PARAM_1)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_276066546
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_276066546
  if ( vcast_is_in_driver ) {
    P_10_1_1 = VCAST_PARAM_1;
    vCAST_COMMON_STUB_PROC_9( 10, 1, 2, 0 );
    if ( P_10_1_1_memsize > 0 )
      VCAST_memcpy ( VCAST_PARAM_1, P_10_1_1, P_10_1_1_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_276066546
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_276066546
  vCAST_USER_CODE_TIMER_START();
  return R_10_1;
}


unsigned P_10_2_1_memsize;
void *P_10_2_1;
int R_10_2;
int send_enet_msg(void * VCAST_PARAM_1)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3702653579
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3702653579
  if ( vcast_is_in_driver ) {
    P_10_2_1 = VCAST_PARAM_1;
    vCAST_COMMON_STUB_PROC_9( 10, 2, 2, 0 );
    if ( P_10_2_1_memsize > 0 )
      VCAST_memcpy ( VCAST_PARAM_1, P_10_2_1, P_10_2_1_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_3702653579
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_3702653579
  vCAST_USER_CODE_TIMER_START();
  return R_10_2;
}


unsigned P_10_3_1_memsize;
void *P_10_3_1;
int R_10_3;
int send_serial_msg(void * VCAST_PARAM_1)
{
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2627027036
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2627027036
  if ( vcast_is_in_driver ) {
    P_10_3_1 = VCAST_PARAM_1;
    vCAST_COMMON_STUB_PROC_9( 10, 3, 2, 0 );
    if ( P_10_3_1_memsize > 0 )
      VCAST_memcpy ( VCAST_PARAM_1, P_10_3_1, P_10_3_1_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2627027036
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2627027036
  vCAST_USER_CODE_TIMER_START();
  return R_10_3;
}


/* END PROTOTYPE STUBS */
