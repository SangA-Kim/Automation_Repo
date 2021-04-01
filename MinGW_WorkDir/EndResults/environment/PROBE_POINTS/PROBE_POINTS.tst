-- VectorCAST 18.sp3 (10/18/18)
-- Test Case Script
-- 
-- Environment    : PROBE_POINTS
-- Unit(s) Under Test: probe_points
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

-- Unit: probe_points

-- Subprogram: check_rx_err_bit

-- Test Case: FalsePath
TEST.UNIT:probe_points
TEST.SUBPROGRAM:check_rx_err_bit
TEST.NEW
TEST.NAME:FalsePath
TEST.END

-- Test Case: TruePath
TEST.UNIT:probe_points
TEST.SUBPROGRAM:check_rx_err_bit
TEST.NEW
TEST.NAME:TruePath
TEST.END

-- Subprogram: miles_before_fillup

-- Test Case: CONDITIONAL_TEST
TEST.UNIT:probe_points
TEST.SUBPROGRAM:miles_before_fillup
TEST.NEW
TEST.NAME:CONDITIONAL_TEST
TEST.END

-- Test Case: miles_before_fillup.001
TEST.UNIT:probe_points
TEST.SUBPROGRAM:miles_before_fillup
TEST.NEW
TEST.NAME:miles_before_fillup.001
TEST.VALUE:uut_prototype_stubs.get_fuel_level.return:15.0
TEST.VALUE:uut_prototype_stubs.get_recent_mpg.return:20.0
TEST.END

-- Subprogram: monitor_task

-- Test Case: BreakOut5
TEST.UNIT:probe_points
TEST.SUBPROGRAM:monitor_task
TEST.NEW
TEST.NAME:BreakOut5
TEST.END

-- Subprogram: process_door_event

-- Test Case: DoorAjar
TEST.UNIT:probe_points
TEST.SUBPROGRAM:process_door_event
TEST.NEW
TEST.NAME:DoorAjar
TEST.END
