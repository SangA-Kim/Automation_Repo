/*vcast_header_collapse_start:C:\\VCAST\\TRAINING\\SOURCEFILES\\SEARCHPATHS\\include/vcast_time.h*/
typedef struct time {
    int mins ;
    int secs ;
} time_T ;
int invalid_time(time_T time_val);
/*vcast_header_collapse_end*/
time_T time_add_seconds ( time_T start, int seconds )
{/*vcast_internal_start*/
extern struct time P_9_1_1;
extern int P_9_1_2;
extern struct time R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3285303213
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3285303213
  if ( vcast_is_in_driver ) {
    P_9_1_1 = start;
    P_9_1_2 = seconds;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3285303213
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3285303213
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    time_T ret ;
    int newseconds;
    if (invalid_time(start))
    {
        ret.secs=0;
        ret.mins=0;
        return ret;
    }
    newseconds = start.secs + seconds ;
    ret.mins = start.mins ;
    if ( newseconds >= 60 )
    {
        ret.mins++ ;
        newseconds -= 60 ;
    }
    ret.secs = newseconds ;
    return ret ;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
struct time P_9_1_1;
int P_9_1_2;
struct time R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
