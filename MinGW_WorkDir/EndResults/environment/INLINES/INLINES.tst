-- VectorCAST 18.sp3 (10/18/18)
-- Test Case Script
-- 
-- Environment    : INLINES
-- Unit(s) Under Test: inlines
-- 
-- Script Features
TEST.SCRIPT_FEATURE:C_DIRECT_ARRAY_INDEXING
TEST.SCRIPT_FEATURE:CPP_CLASS_OBJECT_REVISION
TEST.SCRIPT_FEATURE:MULTIPLE_UUT_SUPPORT
TEST.SCRIPT_FEATURE:MIXED_CASE_NAMES
TEST.SCRIPT_FEATURE:STANDARD_SPACING_R2
TEST.SCRIPT_FEATURE:OVERLOADED_CONST_SUPPORT
TEST.SCRIPT_FEATURE:UNDERSCORE_NULLPTR
TEST.SCRIPT_FEATURE:FULL_PARAMETER_TYPES
TEST.SCRIPT_FEATURE:STRUCT_DTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STRUCT_FIELD_CTOR_ADDS_POINTER
TEST.SCRIPT_FEATURE:STATIC_HEADER_FUNCS_IN_UUTS
--

-- Unit: inlines

-- Subprogram: (cl)class_with_only_inlines::class_with_only_inlines

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_only_inlines::class_with_only_inlines
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 1
TEST.NOTES:
   No branches in subprogram
TEST.END_NOTES:
TEST.END

-- Subprogram: (cl)class_with_only_inlines::inline_member

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_only_inlines::inline_member
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 1
TEST.NOTES:
   No branches in subprogram
TEST.END_NOTES:
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_only_inlines.class_with_only_inlines.<<constructor>>.class_with_only_inlines().<<call>>:0
TEST.END

-- Subprogram: (cl)class_with_some_inlines::class_with_some_inlines

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_some_inlines::class_with_some_inlines
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 1
TEST.NOTES:
   No branches in subprogram
TEST.END_NOTES:
TEST.END

-- Subprogram: (cl)class_with_some_inlines::get_int

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_some_inlines::get_int
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 1
TEST.NOTES:
   No branches in subprogram
TEST.END_NOTES:
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).i:<<MIN>>
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).<<call>>:0
TEST.END

-- Subprogram: (cl)class_with_some_inlines::use_int

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_some_inlines::use_int
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 2
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (m_i) ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).i:<<MIN>>
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).<<call>>:0
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.m_i:<<MIN>>
TEST.END

-- Test Case: BASIS-PATH-002
TEST.UNIT:inlines
TEST.SUBPROGRAM:(cl)class_with_some_inlines::use_int
TEST.NEW
TEST.NAME:BASIS-PATH-002
TEST.BASIS_PATH:2 of 2
TEST.NOTES:
This is an automatically generated test case.
   Test Path 2
      (1) if (m_i) ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).i:<<MIN>>
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.<<constructor>>.class_with_some_inlines(int).<<call>>:0
TEST.VALUE:inlines.<<GLOBAL>>.(cl).class_with_some_inlines.class_with_some_inlines.m_i:0
TEST.END

-- Subprogram: non_member_inline

-- Test Case: BASIS-PATH-001
TEST.UNIT:inlines
TEST.SUBPROGRAM:non_member_inline
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 1
TEST.NOTES:
   No branches in subprogram
TEST.END_NOTES:
TEST.END
