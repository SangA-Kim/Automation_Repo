-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : STACK
-- Unit(s) Under Test: stack
--
-- Script Features
TEST.SCRIPT_FEATURE:C_DIRECT_ARRAY_INDEXING
TEST.SCRIPT_FEATURE:CPP_CLASS_OBJECT_REVISION
TEST.SCRIPT_FEATURE:MULTIPLE_UUT_SUPPORT
TEST.SCRIPT_FEATURE:REMOVED_CL_PREFIX
TEST.SCRIPT_FEATURE:MIXED_CASE_NAMES
TEST.SCRIPT_FEATURE:STANDARD_SPACING_R2
TEST.SCRIPT_FEATURE:OVERLOADED_CONST_SUPPORT
TEST.SCRIPT_FEATURE:UNDERSCORE_NULLPTR
TEST.SCRIPT_FEATURE:FULL_PARAMETER_TYPES
TEST.SCRIPT_FEATURE:STRUCT_DTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STRUCT_FIELD_CTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STATIC_HEADER_FUNCS_IN_UUTS
TEST.SCRIPT_FEATURE:VCAST_MAIN_NOT_RENAMED
--

-- Unit: stack

-- Subprogram: Stack<float>::push

-- Test Case: PUSH_FLT
TEST.UNIT:stack
TEST.SUBPROGRAM:Stack<float>::push
TEST.NEW
TEST.NAME:PUSH_FLT
TEST.VALUE:stack.<<GLOBAL>>.(cl).Stack<float>.Stack<float>.<<constructor>>.Stack(unsigned).<<call>>:0
TEST.VALUE:stack.Stack<float>::push.item:7.0
TEST.EXPECTED:stack.<<GLOBAL>>.(cl).Stack<float>.Stack<float>.mStackCount:1
TEST.END

-- Subprogram: Stack<int>::push

-- Test Case: PUSH_INT
TEST.UNIT:stack
TEST.SUBPROGRAM:Stack<int>::push
TEST.NEW
TEST.NAME:PUSH_INT
TEST.VALUE:stack.<<GLOBAL>>.(cl).Stack<int>.Stack<int>.<<constructor>>.Stack(unsigned).<<call>>:0
TEST.VALUE:stack.Stack<int>::push.item:7
TEST.EXPECTED:stack.<<GLOBAL>>.(cl).Stack<int>.Stack<int>.mStackCount:1
TEST.END

-- Test Case: PUSH_INT2
TEST.UNIT:stack
TEST.SUBPROGRAM:Stack<int>::push
TEST.NEW
TEST.NAME:PUSH_INT2
TEST.VALUE:<<OPTIONS>>.GLOBAL_DATA_DISPLAY:RANGE_ITERATION
TEST.VALUE:stack.<<GLOBAL>>.(cl).Stack<int>.Stack<int>.<<constructor>>.Stack(unsigned).<<call>>:0
TEST.VALUE:stack.Stack<int>::push.item:7,100
TEST.EXPECTED:stack.<<GLOBAL>>.(cl).Stack<int>.Stack<int>.mStackCount:1,2
TEST.END
