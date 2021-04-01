#line 3 "vcast_preprocess.13548.10.cpp"                                                                                                                              
# 1 "vcast_preprocess.13548.8.cpp" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/stack.cpp" 1
enum StackErrorsT { E_OVERFLOW, E_UNDERFLOW };

template <typename T>
class Stack {
  public:
    Stack(unsigned maxSize);

    bool empty();
    operator bool();

    void push(T item) throw ( StackErrorsT );
    T pop() throw ( StackErrorsT );
    unsigned count();

    void grow ( unsigned newMax ) throw ( StackErrorsT );

  public:
    struct ItemContainer {
      ItemContainer(T p) : item(p), next(0) {}
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
{
}

template <typename T>
bool Stack<T>::empty()
{
  return !(bool)mStack;
}

template <typename T>
Stack<T>::operator bool()
{
  return !empty();
}

template <typename T>
void Stack<T>::push(T item)
throw ( StackErrorsT )
{
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
{
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
{
  return mStackCount;
}

template <typename T>
void Stack<T>::grow ( unsigned newMax ) throw(StackErrorsT)
{
  if ( newMax < mStackCount )
     throw E_OVERFLOW;
  mMaxSize = newMax;
}
# 6 "vcast_preprocess.13548.8.cpp" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

template class Stack<float>;
template class Stack<int>;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.13548.10.cpp" 2

                                               
