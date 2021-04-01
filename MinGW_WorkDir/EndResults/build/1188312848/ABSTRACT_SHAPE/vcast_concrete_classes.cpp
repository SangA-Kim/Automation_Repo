#ifdef vcast_concrete_0
class vcast_concrete_Shape: public Shape {
public:
vcast_concrete_Shape();
vcast_concrete_Shape(int x, int y);
std::__cxx11::string getName() const;
float getArea() const;
};

#endif
#ifdef vcast_concrete_def_0

#ifdef VCAST_EXTERNED
extern
#endif
int P_10_6_1
#ifndef VCAST_EXTERNED

#endif
;

#ifdef VCAST_EXTERNED
extern
#endif
int P_10_6_2
#ifndef VCAST_EXTERNED

#endif
;

#ifdef VCAST_EXTERNED
extern
#endif
std::__cxx11::string R_10_3;

#ifdef VCAST_EXTERNED
extern
#endif
float R_10_4;
vcast_concrete_Shape::vcast_concrete_Shape()
: Shape() {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2174904497
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2174904497
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 5, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2174904497
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2174904497
  vCAST_USER_CODE_TIMER_START();
  return;
}
vcast_concrete_Shape::vcast_concrete_Shape(int x, int y)
: Shape(x ,y) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2174904497
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2174904497
  if ( vcast_is_in_driver ) {
    P_10_6_1 = x;
    P_10_6_2 = y;
    vCAST_COMMON_STUB_PROC_9( 10, 6, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2174904497
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2174904497
  vCAST_USER_CODE_TIMER_START();
  return;
}
std::__cxx11::string vcast_concrete_Shape::getName() const {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_1708626765
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_1708626765
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_1708626765
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_1708626765
  vCAST_USER_CODE_TIMER_START();
  return R_10_3;
}
float vcast_concrete_Shape::getArea() const {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_3676233182
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_3676233182
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 10, 4, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_3676233182
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_3676233182
  vCAST_USER_CODE_TIMER_START();
  return R_10_4;
}
#endif
