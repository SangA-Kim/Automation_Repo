#include "c:/vcast/mingw/include/stdio.h"
/*******Inserted File Scope probe_point_id=5**********/
int loop_cnt=0;
void door_ajar_alarm(int);
typedef enum
{
    POWER_UP, DOOR_OPEN, DOOR_CLOSED
}
t_door_state;
/*

 *  This function gets called at a periodic rate and determines the Open/Close status of a door.

 *  It uses a hysteresis/debounce algorithm to determine the stable state.  If the door status

 *  is either "opened" or "closed" for THRESHOLD subsequent times, then the state is considered stable.

 */
 t_door_state process_door_event(t_door_state current_state)
{/*vcast_internal_start*/
extern t_door_state P_9_1_1;
extern t_door_state R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1686082956
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1686082956
  if ( vcast_is_in_driver ) {
    P_9_1_1 = current_state;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1686082956
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1686082956
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    static int open_count;
    static int close_count;
    static t_door_state stable_state;
    int z;
    switch (current_state)
    {
        case POWER_UP:
            open_count = 0;
            close_count = 0;
            stable_state=POWER_UP;
            break;
        case DOOR_OPEN:
            open_count++;
            close_count = 0;
            break;
        case DOOR_CLOSED:
            open_count = 0;
            close_count++;
            break;
    }
    if (open_count == 3)
    {
        door_ajar_alarm(1); // Set Alarm
        stable_state = DOOR_OPEN;
    }
    {
/*******Inserted Before probe_point_id=2**********/
close_count=3;
if (close_count == 3)
    {
        door_ajar_alarm(0); // Clear Alarm
        stable_state = DOOR_CLOSED;
    }}
    return(stable_state);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*

 *  This function simply reads a Memory Mapped Register and isolates

 *  the Receive Error Bit.

 */
int check_rx_err_bit(void)
{/*vcast_internal_start*/
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1788444960
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1788444960
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1788444960
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1788444960
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  unsigned char reg_value;
/*******Inserted Before probe_point_id=3**********/
#if (0)
reg_value = *((unsigned char*)0x80008000);
/*******Inserted After probe_point_id=3**********/
#endif
if (vcast_test_name_equals( "TruePath" ))
  reg_value=4;
else
  reg_value=0;
  if (reg_value & 0x04)
    return(1);
  else
    return(0);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*

 *  This function is a task that monitors for any Receive Errors.

 *  If an error occurs, it is counted and reported.

 */
extern void sleep1(int delay);
extern void report_error(char *);
static int rx_err_count=0;
void monitor_task(void)
{/*vcast_internal_start*/
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3952974276
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3952974276
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3952974276
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3952974276
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    while (1)
    {
        if (check_rx_err_bit())
        {
            rx_err_count++;
            report_error("Rx Error");
        }
/*******Inserted Before probe_point_id=4**********/
if (++loop_cnt >= 5)  break;
sleep1(100); // Sleep 100ms
    }
    return;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*

 *  Example code to show some highlights of probe points.

 */
static int tank_size = 20; // In gallons
extern float get_fuel_level(void);
extern float get_recent_mpg(void);
float miles_before_fillup(void)
{/*vcast_internal_start*/
extern float R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4157827059
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4157827059
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 4, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4157827059
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4157827059
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    float fuel_level, mpg, miles;
    fuel_level = get_fuel_level();
    {
/*******Inserted Before probe_point_id=1**********/
if (vcast_test_name_equals( "CONDITIONAL_TEST" ))
  fuel_level=25.5;
else
  fuel_level=tank_size;
vcast_probe_print( "\nTank Size =" );
vcast_probe_print_unsigned( tank_size );
vcast_probe_print( "\nFuel level=" );
vcast_probe_print_float( fuel_level );
vcast_probe_print( "\n" );
if (fuel_level > tank_size)
    {
        printf("\nInvalid Fuel Reading\n");
        fuel_level = tank_size;
    }}
    mpg = get_recent_mpg();
    miles = fuel_level*mpg;
    return(miles);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
t_door_state P_9_1_1;
t_door_state R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float R_9_4;
unsigned char SBF_9_4 = 0;
/*vcast_internal_end*/
