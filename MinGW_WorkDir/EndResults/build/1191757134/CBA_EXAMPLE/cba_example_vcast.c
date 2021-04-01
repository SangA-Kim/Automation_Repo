#include "c:/vcast/mingw/include/stdio.h"
extern int send_can_msg(void *);
extern int send_enet_msg(void *);
extern int send_serial_msg(void *);
enum e_msg_type
{
    CAN_BUS,
    ENET,
    SERIAL,
    INVALID
};
typedef enum e_msg_type t_msg_type;
int route_msg(t_msg_type msg_type, void *msg)
{/*vcast_internal_start*/
extern enum e_msg_type P_9_1_1;
extern unsigned P_9_1_2_memsize;
extern void *P_9_1_2;
extern int R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1241750725
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1241750725
  if ( vcast_is_in_driver ) {
    P_9_1_1 = msg_type;
    P_9_1_2 = msg;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
    if ( P_9_1_2_memsize > 0 )
      VCAST_memcpy ( msg, P_9_1_2, P_9_1_2_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1241750725
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1241750725
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    int rc;
    if (msg_type >= INVALID)
    {
        return(-1);
    }
    switch (msg_type)
    {
    case CAN_BUS:
        rc = send_can_msg(msg);
        break;
    case ENET:
        rc = send_enet_msg(msg);
        break;
    case SERIAL:
        rc = send_serial_msg(msg);
        break;
    default:
        printf("\nBad Message Type");
        rc = -1;
    }
    return(rc);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
enum e_msg_type P_9_1_1;
unsigned P_9_1_2_memsize = 0
;
void *P_9_1_2;
int R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
