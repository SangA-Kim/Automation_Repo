/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/communication.h*/
/*
 *  Course Values: Floating point value in Radians
 *
 *  There are 2*Pi radians in 360 degrees:
 *    North = 0 Radians
 *    East  = Pi/2 Radians
 *    South = Pi   Radians
 *    West  = (3/2)*Pi Radians
 *    2*Pi is back to North again.
 *
 *    So, the range for the Course is between 0 & 2*Pi.
 */
/*
 *  Altitude Values: Integer value between 10 & 40,000 ft.
 */
#include "c:/vcast/mingw/include/stdio.h"
enum Message { Change_Altitude, Change_Course, Text_Message, Invalid };
typedef enum Message MessageT;
enum Boolean { False, True };
struct AltCmd {
   unsigned newAltitude;
   int crc;
   };
typedef struct AltCmd AltCmdT;
struct CourseCmd {
   float newCourse;
   int crc;
   };
typedef struct CourseCmd CourseCmdT;
enum Boolean ProcessMessage ( MessageT messageCategory,
                      void *message );
void ChangeAltitude ( unsigned altitude );
void ChangeCourse ( float course );
void InvalidCommand ( MessageT messageCategory );
/*vcast_header_expansion_end*/
/*
 *  Copy & paste these 3 lines into User Globals:

  #include "communication.h"
  VCAST_USER_GLOBALS_EXTERN AltCmdT AltCmd;
  VCAST_USER_GLOBALS_EXTERN CourseCmdT CourseCmd;

 */
enum Boolean ProcessMessage ( MessageT messageCategory, void *message )
{/*vcast_internal_start*/
extern enum Message P_9_1_1;
extern unsigned P_9_1_2_memsize;
extern void *P_9_1_2;
extern enum Boolean R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2277181471
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2277181471
  if ( vcast_is_in_driver ) {
    P_9_1_1 = messageCategory;
    P_9_1_2 = message;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
    if ( P_9_1_2_memsize > 0 )
      VCAST_memcpy ( message, P_9_1_2, P_9_1_2_memsize );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2277181471
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2277181471
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
 enum Boolean rc=True;
 switch ( messageCategory )
 {
   case Change_Altitude:
   {
      AltCmdT *cmd = (AltCmdT *)message;
      int altitude = cmd->newAltitude;
      if ( (altitude < 10) || (altitude > 40000) )
      {
          printf("\nBad Altitude: %d\n", altitude);
          rc = False;
      }
      else
      {
         ChangeAltitude ( altitude );
         printf("\nNew Altitude: %d\n", altitude);
      }
      break;
   }
   case Change_Course:
   {
      CourseCmdT *cmd = (CourseCmdT *)message;
      float course = cmd->newCourse;
      if ( (course < 0) || (course > (2*(3.14159265))))
      {
         printf("\nBad Course: %f\n", course);
         rc = False;
      }
      else
      {
         printf ("\nNew Course: %f\n", course );
         ChangeCourse ( course );
      }
      break;
   }
   case Text_Message:
   {
      char *ascii_msg;
      ascii_msg = (char *)message;
      printf ("\n%s\n", ascii_msg );
      break;
   }
   default:
       InvalidCommand( messageCategory );
 }
 return(rc);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
enum Message P_9_1_1;
unsigned P_9_1_2_memsize = 0
;
void *P_9_1_2;
enum Boolean R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
