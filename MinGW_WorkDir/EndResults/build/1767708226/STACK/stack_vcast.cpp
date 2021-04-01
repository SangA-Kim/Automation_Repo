enum StackErrorsT { E_OVERFLOW, E_UNDERFLOW };
template <typename T>
class Stack {
  public:
    /*vcast_internal_start*/
struct SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447 {
  static unsigned char _SBF_enabled;
  void stub(unsigned maxSize);
};
/*vcast_internal_end*/
Stack(unsigned maxSize);
    /*vcast_internal_start*/
struct SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317 {
  static unsigned char _SBF_enabled;
  bool stub();
  Stack& _SBF_parent;
  SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
bool empty();
    /*vcast_internal_start*/
struct SBF___opb__16Stack__tm__4_Z1ZFv_695050629 {
  static unsigned char _SBF_enabled;
  bool stub();
  Stack& _SBF_parent;
  SBF___opb__16Stack__tm__4_Z1ZFv_695050629(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
operator bool();
    /*vcast_internal_start*/
struct SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385 {
  static unsigned char _SBF_enabled;
  void stub(T item);
  Stack& _SBF_parent;
  SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
void push(T item) throw ( StackErrorsT );
    /*vcast_internal_start*/
struct SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714 {
  static unsigned char _SBF_enabled;
  T stub();
  Stack& _SBF_parent;
  SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
T pop() throw ( StackErrorsT );
    /*vcast_internal_start*/
struct SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118 {
  static unsigned char _SBF_enabled;
  unsigned stub();
  Stack& _SBF_parent;
  SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
unsigned count();
    /*vcast_internal_start*/
struct SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542 {
  static unsigned char _SBF_enabled;
  void stub(unsigned newMax);
  Stack& _SBF_parent;
  SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
void grow ( unsigned newMax ) throw ( StackErrorsT );
  public:
    struct ItemContainer {
      /*vcast_internal_start*/
struct SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501 {
  static unsigned char _SBF_enabled;
  void stub(T p);
};
/*vcast_internal_end*/
ItemContainer(T p) : item(p), next(0) {/*vcast_internal_start*/
if (SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled) {
  SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501().stub(p);
  return;
}
/*vcast_internal_end*/
}
      T item;
      ItemContainer *next;
    };
    ItemContainer *mStack;
    unsigned mStackCount;
    unsigned mMaxSize;
};
template <typename T>
Stack<T>::Stack(unsigned maxSize) :
  mStack(0),
  mStackCount(0),
  mMaxSize(maxSize)
{/*vcast_internal_start*/
if (SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled) {
  SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447().stub(maxSize);
  return;
}
/*vcast_internal_end*/
}
template <typename T>
bool Stack<T>::empty()
{/*vcast_internal_start*/
if (SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled) {
  return SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317(*this).stub();
}
/*vcast_internal_end*/
  return !(bool)mStack;
}
template <typename T>
Stack<T>::operator bool()
{/*vcast_internal_start*/
if (SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled) {
  return SBF___opb__16Stack__tm__4_Z1ZFv_695050629(*this).stub();
}
/*vcast_internal_end*/
  return !empty();
}
template <typename T>
void Stack<T>::push(T item)
throw ( StackErrorsT )
{/*vcast_internal_start*/
if (SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled) {
  SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385(*this).stub(item);
  return;
}
/*vcast_internal_end*/
  if (mStack) {
    if ( mStackCount >= mMaxSize )
       throw E_OVERFLOW;
    ItemContainer *tmp =
          new ItemContainer(item);
    if ( !tmp )
       throw E_OVERFLOW;
    tmp->next = mStack;
    mStack = tmp;
    mStackCount++;
  } else {
    mStack = new ItemContainer (item);
    mStackCount++;
    if ( !mStack )
       throw E_OVERFLOW;
  }
}
template <typename T>
T Stack<T>::pop()
throw ( StackErrorsT )
{/*vcast_internal_start*/
if (SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled) {
  return SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714(*this).stub();
}
/*vcast_internal_end*/
  if (empty()) {
    throw E_UNDERFLOW;
  }
  T rtn = mStack->item;
  ItemContainer *tmp = mStack;
  mStack = mStack->next;
  delete tmp;
  mStackCount--;
  return rtn;
}
template <typename T>
unsigned Stack<T>::count()
{/*vcast_internal_start*/
if (SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled) {
  return SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118(*this).stub();
}
/*vcast_internal_end*/
  return mStackCount;
}
template <typename T>
void Stack<T>::grow ( unsigned newMax ) throw(StackErrorsT)
{/*vcast_internal_start*/
if (SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled) {
  SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542(*this).stub(newMax);
  return;
}
/*vcast_internal_end*/
  if ( newMax < mStackCount )
     throw E_OVERFLOW;
  mMaxSize = newMax;
}
/*vcast_internal_start*/
unsigned P_9_1_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_2;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_3;
/*vcast_internal_end*/
/*vcast_internal_start*/
float P_9_4_1;
enum StackErrorsT E_9_4_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float R_9_5;
enum StackErrorsT E_9_5_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned R_9_6;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_7_1;
enum StackErrorsT E_9_7_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_8_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_9;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_10;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_11_1;
enum StackErrorsT E_9_11_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_12;
enum StackErrorsT E_9_12_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned R_9_13;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_14_1;
enum StackErrorsT E_9_14_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float P_9_15_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_16_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_4178012948
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4178012948
#define VCAST_STUBBED_TEMPLATE_2241338165
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2241338165
template< class T> 
void Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::stub(T p) {
  Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
  ItemContainer _SBF_dummy(p);
}
template< class T> 
unsigned char Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_1622493966
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_1622493966
#define VCAST_STUBBED_TEMPLATE_953572184
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_953572184
template< class T> 
void Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::stub(unsigned maxSize) {
  Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
  Stack< T>  _SBF_dummy(maxSize);
}
template< class T> 
unsigned char Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_3027053020
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3027053020
#define VCAST_STUBBED_TEMPLATE_910016013
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_910016013
template< class T> 
bool Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::stub() {
  Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
  return this->_SBF_parent.empty();
}
template< class T> 
unsigned char Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_3446060922
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3446060922
#define VCAST_STUBBED_TEMPLATE_3325751367
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3325751367
template< class T> 
bool Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::stub() {
  Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
  return this->_SBF_parent.operator bool();
}
template< class T> 
unsigned char Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_2064609495
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2064609495
#define VCAST_STUBBED_TEMPLATE_2370240574
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2370240574
template< class T> 
void Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::stub(T item) {
  Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
  this->_SBF_parent.push(item);
}
template< class T> 
unsigned char Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_4018297964
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4018297964
#define VCAST_STUBBED_TEMPLATE_432680069
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_432680069
template< class T> 
T Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::stub() {
  Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
  return this->_SBF_parent.pop();
}
template< class T> 
unsigned char Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_851654740
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_851654740
#define VCAST_STUBBED_TEMPLATE_3281357441
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3281357441
template< class T> 
unsigned Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::stub() {
  Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
  return this->_SBF_parent.count();
}
template< class T> 
unsigned char Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_47424539
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_47424539
#define VCAST_STUBBED_TEMPLATE_4085585614
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4085585614
template< class T> 
void Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::stub(unsigned newMax) {
  Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
  this->_SBF_parent.grow(newMax);
}
template< class T> 
unsigned char Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
/*vcast_internal_end*/
