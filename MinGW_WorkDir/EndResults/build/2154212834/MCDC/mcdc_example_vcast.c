/*

 *  This function determines if a company is open for business depending on the day/time.

 *  It returns a simple true/false value based on the input day/time.

 *  Time is in military time (i.e. 1700 equals 5pm)

 */
enum e_day_of_week {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} ;
typedef enum e_day_of_week t_day_of_week;
int open_for_business(int time, t_day_of_week day)
{/*vcast_internal_start*/
extern int P_9_1_1;
extern enum e_day_of_week P_9_1_2;
extern int R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2366514367
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2366514367
  if ( vcast_is_in_driver ) {
    P_9_1_1 = time;
    P_9_1_2 = day;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2366514367
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2366514367
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  if ((time > 800) && (time < 1700) && (day != SUNDAY))
  {
    return(1);
  }
  else
  {
    return(0);
  }
/*vcast_internal_start*/}/*vcast_internal_end*/
}
int Conditional_Example (int a, int b, int c) {/*vcast_internal_start*/
extern int P_9_2_1;
extern int P_9_2_2;
extern int P_9_2_3;
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3633827972
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3633827972
  if ( vcast_is_in_driver ) {
    P_9_2_1 = a;
    P_9_2_2 = b;
    P_9_2_3 = c;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3633827972
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3633827972
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
   if (a && (b || c))
      return 1;
   else
      return 0;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
//
//  The following functions may be of additional interest, wrt MC/DC, but are ifdef'd out for now
//
/*vcast_internal_start*/
int P_9_1_1;
enum e_day_of_week P_9_1_2;
int R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_2_1;
int P_9_2_2;
int P_9_2_3;
int R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
