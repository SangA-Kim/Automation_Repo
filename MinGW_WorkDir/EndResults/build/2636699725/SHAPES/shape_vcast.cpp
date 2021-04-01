/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.h*/
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/string"
class Shape
{
  public:
    Shape();
    Shape(int x, int y);
    void setPosition(int x, int y);
    int getX() const;
    int getY() const;
    virtual std::string getName() const = 0;
    virtual float getArea() const = 0;
  public:
    int mX;
    int mY;
};
/*vcast_header_expansion_end*/
Shape::Shape()
{/*vcast_internal_start*/
extern unsigned char SBF_10_7;
if(SBF_10_7) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3751723047
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3751723047
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_11( 10, 7, 1, 0 );
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
extern int P_10_8_1;
extern int P_10_8_2;
extern unsigned char SBF_10_8;
if(SBF_10_8) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2550907283
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2550907283
  if ( vcast_is_in_driver ) {
    P_10_8_1 = x;
    P_10_8_2 = y;
    vCAST_COMMON_STUB_PROC_11( 10, 8, 3, 0 );
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
extern int P_11_1_1;
extern int P_11_1_2;
extern unsigned char SBF_11_1;
if(SBF_11_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_2386613739
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_2386613739
  if ( vcast_is_in_driver ) {
    P_11_1_1 = x;
    P_11_1_2 = y;
    vCAST_COMMON_STUB_PROC_11( 11, 1, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_2386613739
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_2386613739
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
  mX = x;
  mY = y;
}
int Shape::getX() const
{/*vcast_internal_start*/
extern int R_11_2;
extern unsigned char SBF_11_2;
if(SBF_11_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_3116114357
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_3116114357
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_11( 11, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_3116114357
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_3116114357
  vCAST_USER_CODE_TIMER_START();
  return R_11_2;
}
/*vcast_internal_end*/
  return mX;
}
int Shape::getY() const
{/*vcast_internal_start*/
extern int R_11_3;
extern unsigned char SBF_11_3;
if(SBF_11_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_11_572091866
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_11_572091866
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_11( 11, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_11_572091866
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_11_572091866
  vCAST_USER_CODE_TIMER_START();
  return R_11_3;
}
/*vcast_internal_end*/
  return mY;
}
/*vcast_internal_start*/
unsigned char SBF_10_7 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_10_8_1;
int P_10_8_2;
unsigned char SBF_10_8 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_11_1_1;
int P_11_1_2;
unsigned char SBF_11_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_11_2;
unsigned char SBF_11_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_11_3;
unsigned char SBF_11_3 = 0;
/*vcast_internal_end*/
