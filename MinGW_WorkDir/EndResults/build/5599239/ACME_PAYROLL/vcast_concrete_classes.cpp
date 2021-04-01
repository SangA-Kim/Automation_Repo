#ifdef vcast_concrete_0
class vcast_concrete_PayrollSystem: public PayrollSystem {
public:
vcast_concrete_PayrollSystem(double InitialCash);
void processPayCheck(Employee emp);
};

#endif
#ifdef vcast_concrete_def_0

#ifdef VCAST_EXTERNED
extern
#endif
double P_10_2_1
#ifndef VCAST_EXTERNED

#endif
;

#ifdef VCAST_EXTERNED
extern
#endif
class ::Employee *P_10_1_1
#ifndef VCAST_EXTERNED

#endif
;
vcast_concrete_PayrollSystem::vcast_concrete_PayrollSystem(double InitialCash)
: PayrollSystem(InitialCash) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_243871004
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_243871004
  if ( vcast_is_in_driver ) {
    P_10_2_1 = InitialCash;
    vCAST_COMMON_STUB_PROC_9( 10, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_243871004
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_243871004
  vCAST_USER_CODE_TIMER_START();
  return;
}
void vcast_concrete_PayrollSystem::processPayCheck(Employee emp) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_10_2941563830
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_10_2941563830
  if ( vcast_is_in_driver ) {
    P_10_1_1 = &emp;
    vCAST_COMMON_STUB_PROC_9( 10, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_10_2941563830
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_10_2941563830
  vCAST_USER_CODE_TIMER_START();
  return;
}
#endif
