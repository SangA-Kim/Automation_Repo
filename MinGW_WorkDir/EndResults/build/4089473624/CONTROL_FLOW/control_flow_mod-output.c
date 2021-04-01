#line 3 "vcast_preprocess.2968.10.c"                                                                                                                           
# 1 "vcast_preprocess.2968.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/control_flow.c" 1






enum e_shape {
  CYLINDER,
  CONE,
  BOX,
};



extern int validShape ( enum e_shape shape, float x, float y, float z );

float widthX =0;
float lengthY =0;
float heightZ =0;


void setDimensions (float x, float y, float z) {/*vcast_internal_start*/
extern float P_9_1_1;
extern float P_9_1_2;
extern float P_9_1_3;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3102379170
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3102379170
  if ( vcast_is_in_driver ) {
    P_9_1_1 = x;
    P_9_1_2 = y;
    P_9_1_3 = z;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3102379170
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3102379170
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/


    widthX = x;
    lengthY = y;
    heightZ = z;
/*vcast_internal_start*/}/*vcast_internal_end*/
}


float computeBaseArea ( enum e_shape shape ) {/*vcast_internal_start*/
extern enum e_shape P_9_2_1;
extern float R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2576382743
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2576382743
  if ( vcast_is_in_driver ) {
    P_9_2_1 = shape;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2576382743
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2576382743
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

    float area, radius;

    if (!validShape( shape, widthX, lengthY, heightZ ))
    {
        area = 0;
    }
    else
    {
        switch (shape) {
          case BOX: area = widthX * lengthY; break;
          case CONE: radius = widthX/2; area = 3.14159265 *(radius * radius); break;
          case CYLINDER: radius = widthX/2; area = 3.14159265 *(radius * radius); break;
        }
    }

    return area;
/*vcast_internal_start*/}/*vcast_internal_end*/
}


float computeVolume ( enum e_shape shape ) {/*vcast_internal_start*/
extern enum e_shape P_9_3_1;
extern float R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3486928437
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3486928437
  if ( vcast_is_in_driver ) {
    P_9_3_1 = shape;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3486928437
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3486928437
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/

    float volume, radius;

    if (!validShape( shape, widthX, lengthY, heightZ ))
    {
        volume = 0;
    }
    else
    {
        switch (shape) {
          case BOX: volume = widthX * lengthY * heightZ; break;
          case CONE: radius = widthX/2; volume = (1/3)*heightZ * (3.14159265 *(radius * radius)); break;
          case CYLINDER: radius = widthX/2; volume = heightZ * (3.14159265 *(radius * radius)); break;
        }
       volume = widthX * lengthY * heightZ;
    }
    return volume;
/*vcast_internal_start*/}/*vcast_internal_end*/
}


int Status;


void partitionExample (
     unsigned char numberOfIterations) {/*vcast_internal_start*/
extern unsigned char P_9_4_1;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_354475630
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_354475630
  if ( vcast_is_in_driver ) {
    P_9_4_1 = numberOfIterations;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_354475630
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_354475630
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/


    if (numberOfIterations < 20)
        Status = 1;
    else if (numberOfIterations < 40)
        Status = 2;
    else if (numberOfIterations < 60)
        Status = 3;
    else if (numberOfIterations < 80)
        Status = 4;
    else if (numberOfIterations < 100)
        Status = 5;

/*vcast_internal_start*/}/*vcast_internal_end*/
}


void someExternalFunctionA ();
void someExternalFunctionB();
void someExternalFunctionC();
void someExternalFunctionD();
void someExternalFunctionE();

void controlFlowExample () {/*vcast_internal_start*/
extern unsigned char SBF_9_5;
if(SBF_9_5) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2841427870
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2841427870
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 5, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2841427870
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2841427870
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/


      someExternalFunctionA();
      someExternalFunctionB();
      someExternalFunctionC();
      someExternalFunctionD();
      someExternalFunctionE();
    /*vcast_internal_start*/}/*vcast_internal_end*/
}
# 6 "vcast_preprocess.2968.8.c" 2

/*vcast_internal_start*/
float P_9_1_1;
float P_9_1_2;
float P_9_1_3;
unsigned char SBF_9_1 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
enum e_shape P_9_2_1;
float R_9_2;
unsigned char SBF_9_2 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
enum e_shape P_9_3_1;
float R_9_3;
unsigned char SBF_9_3 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char P_9_4_1;
unsigned char SBF_9_4 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char SBF_9_5 = 0;

/*vcast_internal_end*/
typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.2968.10.c" 2

                                               
