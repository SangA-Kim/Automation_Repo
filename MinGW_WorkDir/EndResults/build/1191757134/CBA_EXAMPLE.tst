-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : CBA_EXAMPLE
-- Unit(s) Under Test: cba_example
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

-- Unit: cba_example

-- Subprogram: route_msg

-- Test Case: CAN
TEST.UNIT:cba_example
TEST.SUBPROGRAM:route_msg
TEST.NEW
TEST.NAME:CAN
TEST.BASIS_PATH:1 of 5
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (msg_type >= (INVALID)) ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:cba_example.route_msg.msg_type:CAN_BUS
TEST.END

-- Test Case: ENET
TEST.UNIT:cba_example
TEST.SUBPROGRAM:route_msg
TEST.NEW
TEST.NAME:ENET
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (msg_type >= (INVALID)) ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:cba_example.route_msg.msg_type:ENET
TEST.END

-- Test Case: INVALID
TEST.UNIT:cba_example
TEST.SUBPROGRAM:route_msg
TEST.NEW
TEST.NAME:INVALID
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (msg_type >= (INVALID)) ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:cba_example.route_msg.msg_type:INVALID
TEST.END

-- Test Case: SERIAL
TEST.UNIT:cba_example
TEST.SUBPROGRAM:route_msg
TEST.NEW
TEST.NAME:SERIAL
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if (msg_type >= (INVALID)) ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:cba_example.route_msg.msg_type:SERIAL
TEST.END
