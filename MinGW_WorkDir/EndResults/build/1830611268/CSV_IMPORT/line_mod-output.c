#line 3 "vcast_preprocess.17572.10.c"                                                                                                                            
# 1 "vcast_preprocess.17572.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/line.c" 1

struct coordT {
   float X;
   float Y;
   };

/* functions to determine missing value in 'y = mx + b' */

/* y = mx + b */
float findY ( float x, float m, float b ) {/*vcast_internal_start*/
extern float P_9_1_1;
extern float P_9_1_2;
extern float P_9_1_3;
extern float R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3339807904
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3339807904
  if ( vcast_is_in_driver ) {
    P_9_1_1 = x;
    P_9_1_2 = m;
    P_9_1_3 = b;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3339807904
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3339807904
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

   return m * x + b;
/*vcast_internal_start*/}/*vcast_internal_end*/
}

float findX ( float y, float m, float b ) {/*vcast_internal_start*/
extern float P_9_2_1;
extern float P_9_2_2;
extern float P_9_2_3;
extern float R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2954255414
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2954255414
  if ( vcast_is_in_driver ) {
    P_9_2_1 = y;
    P_9_2_2 = m;
    P_9_2_3 = b;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2954255414
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2954255414
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

   return ( y - b ) / m;
/*vcast_internal_start*/}/*vcast_internal_end*/
}

float findM ( struct coordT coord, float b ) {/*vcast_internal_start*/
extern struct coordT P_9_3_1;
extern float P_9_3_2;
extern float R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3721115869
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3721115869
  if ( vcast_is_in_driver ) {
    P_9_3_1 = coord;
    P_9_3_2 = b;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3721115869
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3721115869
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

   return ( coord.Y - b ) / coord.X;
/*vcast_internal_start*/}/*vcast_internal_end*/
}

float findB ( struct coordT coord, float m ) {/*vcast_internal_start*/
extern struct coordT P_9_4_1;
extern float P_9_4_2;
extern float R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1299490124
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1299490124
  if ( vcast_is_in_driver ) {
    P_9_4_1 = coord;
    P_9_4_2 = m;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1299490124
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1299490124
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

   return coord.Y - m * coord.X;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
# 6 "vcast_preprocess.17572.8.c" 2

/*vcast_internal_start*/
float P_9_1_1;
float P_9_1_2;
float P_9_1_3;
float R_9_1;
unsigned char SBF_9_1 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
float P_9_2_1;
float P_9_2_2;
float P_9_2_3;
float R_9_2;
unsigned char SBF_9_2 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
struct coordT P_9_3_1;
float P_9_3_2;
float R_9_3;
unsigned char SBF_9_3 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
struct coordT P_9_4_1;
float P_9_4_2;
float R_9_4;
unsigned char SBF_9_4 = 0;

/*vcast_internal_end*/
typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.17572.10.c" 2

                                               
