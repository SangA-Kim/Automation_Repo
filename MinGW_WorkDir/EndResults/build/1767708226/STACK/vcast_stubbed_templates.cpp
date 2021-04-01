
#ifdef VCAST_STUBBED_TEMPLATE_1622493966

template <> 
void Stack< float> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::stub(unsigned maxSize) {
extern unsigned P_9_1_1;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1622493966
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1622493966
  if ( vcast_is_in_driver ) {
    P_9_1_1 = maxSize;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1622493966
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1622493966
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_910016013

template <> 
bool Stack< float> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::stub() {
extern bool R_9_2;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_910016013
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_910016013
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_910016013
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_910016013
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_3446060922

template <> 
bool Stack< float> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::stub() {
extern bool R_9_3;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3446060922
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3446060922
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 3, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3446060922
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3446060922
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_2370240574

template <> 
void Stack< float> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::stub(float item) {
extern float P_9_4_1;
extern enum StackErrorsT E_9_4_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2370240574
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2370240574
  if ( vcast_is_in_driver ) {
    P_9_4_1 = item;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 2, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 1 );
          throw E_9_4_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2370240574
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2370240574
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_4018297964

template <> 
float Stack< float> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::stub() {
extern float R_9_5;
extern enum StackErrorsT E_9_5_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4018297964
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4018297964
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 5, 1, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 2 );
          throw E_9_5_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4018297964
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4018297964
  vCAST_USER_CODE_TIMER_START();
  return R_9_5;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_3281357441

template <> 
unsigned Stack< float> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::stub() {
extern unsigned R_9_6;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3281357441
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3281357441
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 6, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3281357441
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3281357441
  vCAST_USER_CODE_TIMER_START();
  return R_9_6;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_47424539

template <> 
void Stack< float> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::stub(unsigned newMax) {
extern unsigned P_9_7_1;
extern enum StackErrorsT E_9_7_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_47424539
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_47424539
  if ( vcast_is_in_driver ) {
    P_9_7_1 = newMax;
    vCAST_COMMON_STUB_PROC_9( 9, 7, 2, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 3 );
          throw E_9_7_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_47424539
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_47424539
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_953572184

template <> 
void Stack< int> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::stub(unsigned maxSize) {
extern unsigned P_9_8_1;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_953572184
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_953572184
  if ( vcast_is_in_driver ) {
    P_9_8_1 = maxSize;
    vCAST_COMMON_STUB_PROC_9( 9, 8, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_953572184
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_953572184
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_3027053020

template <> 
bool Stack< int> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::stub() {
extern bool R_9_9;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3027053020
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3027053020
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 9, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3027053020
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3027053020
  vCAST_USER_CODE_TIMER_START();
  return R_9_9;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_3325751367

template <> 
bool Stack< int> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::stub() {
extern bool R_9_10;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3325751367
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3325751367
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 10, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3325751367
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3325751367
  vCAST_USER_CODE_TIMER_START();
  return R_9_10;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_2064609495

template <> 
void Stack< int> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::stub(int item) {
extern int P_9_11_1;
extern enum StackErrorsT E_9_11_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2064609495
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2064609495
  if ( vcast_is_in_driver ) {
    P_9_11_1 = item;
    vCAST_COMMON_STUB_PROC_9( 9, 11, 2, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 4 );
          throw E_9_11_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2064609495
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2064609495
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_432680069

template <> 
int Stack< int> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::stub() {
extern int R_9_12;
extern enum StackErrorsT E_9_12_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_432680069
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_432680069
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 12, 1, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 5 );
          throw E_9_12_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_432680069
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_432680069
  vCAST_USER_CODE_TIMER_START();
  return R_9_12;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_851654740

template <> 
unsigned Stack< int> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::stub() {
extern unsigned R_9_13;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_851654740
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_851654740
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 13, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_851654740
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_851654740
  vCAST_USER_CODE_TIMER_START();
  return R_9_13;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_4085585614

template <> 
void Stack< int> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::stub(unsigned newMax) {
extern unsigned P_9_14_1;
extern enum StackErrorsT E_9_14_0;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4085585614
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4085585614
  if ( vcast_is_in_driver ) {
    P_9_14_1 = newMax;
    vCAST_COMMON_STUB_PROC_9( 9, 14, 2, 1 );
    if( vcast_should_throw_exception ) {
      switch( vcast_exception_index ) {
        case 0:
          vCAST_SET_HISTORY( 1001, 6 );
          throw E_9_14_0;
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      }
    }
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4085585614
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4085585614
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_4178012948

template <> 
void Stack< float> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::stub(float p) {
extern float P_9_15_1;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4178012948
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4178012948
  if ( vcast_is_in_driver ) {
    P_9_15_1 = p;
    vCAST_COMMON_STUB_PROC_9( 9, 15, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4178012948
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4178012948
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif

#ifdef VCAST_STUBBED_TEMPLATE_2241338165

template <> 
void Stack< int> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::stub(int p) {
extern int P_9_16_1;
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2241338165
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2241338165
  if ( vcast_is_in_driver ) {
    P_9_16_1 = p;
    vCAST_COMMON_STUB_PROC_9( 9, 16, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2241338165
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2241338165
  vCAST_USER_CODE_TIMER_START();
  return;
}

#endif
