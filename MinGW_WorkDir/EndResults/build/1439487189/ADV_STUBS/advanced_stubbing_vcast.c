#include "c:/vcast/mingw/include/stdlib.h"
#include "c:/vcast/mingw/include/stdio.h"
#include "c:/vcast/mingw/include/time.h"
#include "c:/vcast/mingw/include/string.h"
char* use_malloc( void )
{/*vcast_internal_start*/
extern char *R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1636405559
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1636405559
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 1, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1636405559
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1636405559
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  char* ptr = (char*)malloc( 10 );
  if ( !ptr )
  {
    return 0;
  }
  else
  {
    strcpy( ptr, "ok" );
  }
  return ptr;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*****************************************************************************************************

 *  temp_monitor

 *

 *  This function reads a water temparature gauge and determines if it is freezing, boiling, or normal

 *

 *****************************************************************************************************/
typedef float (*tempurature_guage_func_ptr_t)(void);
enum e_temp_range
{
  BAD_GAUGE,
  FREEZING,
  NORMAL,
  BOILING,
};
enum e_scale
{
  CELSIUS,
  FAHRENHEIT,
};
enum e_temp_range temp_monitor( tempurature_guage_func_ptr_t func_ptr, enum e_scale scale )
{/*vcast_internal_start*/
extern float (*P_9_2_1)(void);
extern enum e_scale P_9_2_2;
extern enum e_temp_range R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1507831066
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1507831066
  if ( vcast_is_in_driver ) {
    P_9_2_1 = func_ptr;
    P_9_2_2 = scale;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1507831066
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1507831066
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    float current_temperature;
    enum e_temp_range rc;
    if ( !func_ptr )
    {
        rc = BAD_GAUGE;
    }
    else
    {
        current_temperature = (*func_ptr)();
        if (scale == CELSIUS)
        {
            if (current_temperature <= 0.0)
                rc = FREEZING;
            else if (current_temperature >= 100.0)
                rc = BOILING;
            else
                rc = NORMAL;
        }
        if (scale == FAHRENHEIT)
        {
            if (current_temperature <= 32.0)
                rc = FREEZING;
            else if (current_temperature >= 212.0)
                rc = BOILING;
            else
                rc = NORMAL;
        }
    }
    return rc;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*****************************************************************************************************

 *  get_numeric_string

 *

 *  This function reads a series of ASCII digits from a key pad and converts it to a number.

 *

 *****************************************************************************************************/
extern char read_key_pad(void);
int get_numeric_string(int string_length)
{/*vcast_internal_start*/
extern int P_9_3_1;
extern int R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3874054974
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3874054974
  if ( vcast_is_in_driver ) {
    P_9_3_1 = string_length;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3874054974
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3874054974
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    int i,val;
    char ch;
    char str[100];
    for (i=0; i < string_length; i++)
    {
        ch = read_key_pad();
        if (!((ch >= '0') && (ch <= '9'))) ch='0';
        str[i] = ch;
    }
    val = atoi(str);
    return(val);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*

 *  This function prints out a log error string.  If the debug flag is on, the Time-of-day will also be included.

 *

 *  The debug flag will be returned as the return value.

 */
extern const int debug_flag;
int log_error_msg( char *str )
{/*vcast_internal_start*/
extern char *P_9_4_1;
extern int R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_224955469
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_224955469
  if ( vcast_is_in_driver ) {
    P_9_4_1 = str;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_224955469
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_224955469
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    static int msg_num=0;
    time_t tod = time(
                     ((void *)0)
                         );
    if ( debug_flag )
    {
        printf("Log Msg #%d:  %s\n", msg_num, str);
        printf("Error Occurred on:  %s\n", ctime(&tod));
    }
    else
    {
        printf("Log Msg #%d:  %s\n", msg_num, str);
    }
    msg_num++;
    return debug_flag;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
char *R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float (*P_9_2_1)(void);
enum e_scale P_9_2_2;
enum e_temp_range R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_3_1;
int R_9_3;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
char *P_9_4_1;
int R_9_4;
unsigned char SBF_9_4 = 0;
/*vcast_internal_end*/
