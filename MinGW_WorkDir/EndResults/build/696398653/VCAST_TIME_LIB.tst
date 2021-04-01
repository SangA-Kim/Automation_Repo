-- VectorCAST 20.sp5 (12/16/20)
-- Test Case Script
--
-- Environment    : VCAST_TIME_LIB
-- Unit(s) Under Test: vcast_time
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

-- Unit: vcast_time

-- Subprogram: time_add_seconds

-- Test Case: time_add_seconds.001
TEST.UNIT:vcast_time
TEST.SUBPROGRAM:time_add_seconds
TEST.NEW
TEST.NAME:time_add_seconds.001
TEST.VALUE:vcast_time.time_add_seconds.seconds:6
TEST.VALUE_USER_CODE:vcast_time.time_add_seconds.start
<<vcast_time.time_add_seconds.start>>.mins = 1;
<<vcast_time.time_add_seconds.start>>.secs = 59;

TEST.END_VALUE_USER_CODE:
TEST.EXPECTED_USER_CODE:vcast_time.time_add_seconds.return
{{ <<vcast_time.time_add_seconds.return>>.mins == 2 }}
{{ <<vcast_time.time_add_seconds.return>>.secs == 5 }}

TEST.END_EXPECTED_USER_CODE:
TEST.END
