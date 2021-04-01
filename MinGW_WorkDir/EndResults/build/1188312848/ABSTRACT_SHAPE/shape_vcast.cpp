/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.h*/
/*vcast_header_expansion_end*/
Shape::Shape()
{/*vcast_internal_start*/
extern unsigned char SBF_10_1;
if(SBF_10_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3751723047
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3751723047
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 1, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_3751723047
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_3751723047
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
}
Shape::Shape(int x, int y)
  : mX(x),
    mY(y)
{/*vcast_internal_start*/
extern int P_10_2_1;
extern int P_10_2_2;
extern unsigned char SBF_10_2;
if(SBF_10_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2550907283
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2550907283
  if ( vcast_is_in_driver ) {
    P_10_2_1 = x;
    P_10_2_2 = y;
    vCAST_COMMON_STUB_PROC_9( 10, 2, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2550907283
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2550907283
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
}
void Shape::setPosition(int x, int y)
{/*vcast_internal_start*/
extern int P_9_1_1;
extern int P_9_1_2;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2386613739
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2386613739
  if ( vcast_is_in_driver ) {
    P_9_1_1 = x;
    P_9_1_2 = y;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2386613739
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2386613739
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
  mX = x;
  mY = y;
}
int Shape::getX() const
{/*vcast_internal_start*/
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3116114357
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3116114357
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3116114357
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3116114357
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
  return mX;
}
int Shape::getY() const
{/*vcast_internal_start*/
extern int R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_572091866
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_572091866
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_572091866
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_572091866
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
  return mY;
}
/*vcast_internal_start*/
unsigned char SBF_10_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_10_2_1;
int P_10_2_2;
unsigned char SBF_10_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_1_1;
int P_9_1_2;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_3;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
