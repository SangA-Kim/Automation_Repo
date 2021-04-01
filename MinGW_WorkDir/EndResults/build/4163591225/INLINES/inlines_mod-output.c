#line 3 "vcast_preprocess.7260.10.cpp"                                                                                                                             
# 1 "vcast_preprocess.7260.8.cpp" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/inlines.cpp" 1
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/inlines.h" 1



class class_with_some_inlines
{
public:
  class_with_some_inlines(int i);
  int use_int();
  int get_int() {/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_4281873062
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_4281873062
/*vcast_internal_end*/
 return m_i; }

public:
  int m_i;
};

inline int non_member_inline(void)
{/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_1445771036
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_1445771036
/*vcast_internal_end*/

  return 1;
}

class class_with_only_inlines
{
public:
  class_with_only_inlines() {/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_1297009154
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_1297009154
/*vcast_internal_end*/
}
  int inline_member() {/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_757571370
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_757571370
/*vcast_internal_end*/
 return 2; }
};
# 2 "C:/VCAST/Environments/Git_Test/SourceFiles/inlines.cpp" 2

class_with_some_inlines::class_with_some_inlines(int i)
  : m_i( i )
{/*vcast_internal_start*/
extern int P_9_1_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1860086096
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1860086096
  if ( vcast_is_in_driver ) {
    P_9_1_1 = i;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1860086096
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1860086096
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/

}

int class_with_some_inlines::use_int()
{/*vcast_internal_start*/
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1844480316
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1844480316
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 2, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1844480316
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1844480316
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/

  if ( m_i )
  {
    return 3;
  }
  return 4;
}
# 6 "vcast_preprocess.7260.8.cpp" 2

/*vcast_internal_start*/
int P_9_1_1;
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
/*vcast_internal_start*/
int R_9_4;
unsigned char SBF_9_4 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char SBF_9_5 = 0;

/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_6;
unsigned char SBF_9_6 = 0;

/*vcast_internal_end*/
typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.7260.10.cpp" 2

                                               
