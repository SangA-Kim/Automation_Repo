/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/rectangle.h*/
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
class Rectangle : public Shape
{
  public:
    Rectangle();
    Rectangle(int x, int y, int height, int width);
    virtual float getArea() const;
    virtual std::string getName() const {/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_4195580808
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_4195580808
/*vcast_internal_end*/
 return "Rectangle"; }
  public:
    int mHeight;
    int mWidth;
};
/*vcast_header_expansion_end*/
Rectangle::Rectangle()
{/*vcast_internal_start*/
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2382358791
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2382358791
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 1, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2382358791
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2382358791
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
}
Rectangle::Rectangle(int x, int y, int height, int width)
  : Shape( x, y ),
    mHeight(height),
    mWidth(width)
{/*vcast_internal_start*/
extern int P_9_2_1;
extern int P_9_2_2;
extern int P_9_2_3;
extern int P_9_2_4;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2407262779
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2407262779
  if ( vcast_is_in_driver ) {
    P_9_2_1 = x;
    P_9_2_2 = y;
    P_9_2_3 = height;
    P_9_2_4 = width;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 5, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2407262779
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2407262779
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
}
float Rectangle::getArea() const
{/*vcast_internal_start*/
extern float R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_76809143
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_76809143
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_76809143
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_76809143
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
  return mHeight * mWidth;
}
/*vcast_internal_start*/
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_2_1;
int P_9_2_2;
int P_9_2_3;
int P_9_2_4;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float R_9_3;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
std::__cxx11::string R_9_7;
unsigned char SBF_9_7 = 0;
/*vcast_internal_end*/
