-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : ABSTRACT_SHAPE
-- Unit(s) Under Test: shape
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

-- Unit: shape

-- Subprogram: Shape::getX

-- Test Case: GET.001.001
TEST.UNIT:shape
TEST.SUBPROGRAM:Shape::getX
TEST.NEW
TEST.NAME:GET.001.001
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 25 TEST.NAME:GET.001
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: GET.001.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:shape.<<GLOBAL>>.(cl).Shape.Rectangle.<<constructor>>.Rectangle().<<call>>:0
TEST.VALUE:shape.<<GLOBAL>>.(cl).Shape.Rectangle.mX:10
TEST.EXPECTED:shape.Shape::getX.return:10
TEST.END

-- Test Case: GET.002
TEST.UNIT:shape
TEST.SUBPROGRAM:Shape::getX
TEST.NEW
TEST.NAME:GET.002
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 16 TEST.NAME:GET
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: GET.002
TEST.END_IMPORT_FAILURES:
TEST.VALUE:shape.<<GLOBAL>>.(cl).Shape.vcast_concrete_Shape.<<constructor>>.vcast_concrete_Shape(int,int).<<call>>:0
TEST.VALUE:shape.<<GLOBAL>>.(cl).Shape.vcast_concrete_Shape.mX:1
TEST.EXPECTED:shape.Shape::getX.return:1
TEST.END
