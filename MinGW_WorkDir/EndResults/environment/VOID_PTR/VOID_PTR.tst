-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : VOID_PTR
-- Unit(s) Under Test: communication
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

-- Unit: communication

-- Subprogram: ProcessMessage

-- Test Case: BadAlt
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:BadAlt
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.AltCmd.newAltitude:0
TEST.VALUE:communication.ProcessMessage.messageCategory:Change_Altitude
TEST.VALUE:communication.ProcessMessage.message:AltCmd
TEST.EXPECTED:communication.ProcessMessage.return:False
TEST.END

-- Test Case: BadCourse
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:BadCourse
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.CourseCmd.newCourse:10.0
TEST.VALUE:communication.ProcessMessage.messageCategory:Change_Course
TEST.VALUE:communication.ProcessMessage.message:CourseCmd
TEST.EXPECTED:communication.ProcessMessage.return:False
TEST.END

-- Test Case: GoodAlt
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:GoodAlt
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.AltCmd.newAltitude:1000
TEST.VALUE:communication.ProcessMessage.messageCategory:Change_Altitude
TEST.VALUE:communication.ProcessMessage.message:AltCmd
TEST.EXPECTED:communication.ProcessMessage.return:True
TEST.END

-- Test Case: GoodCourse
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:GoodCourse
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.CourseCmd.newCourse:MACRO=Pi
TEST.VALUE:communication.ProcessMessage.messageCategory:Change_Course
TEST.VALUE:communication.ProcessMessage.message:CourseCmd
TEST.EXPECTED:communication.ProcessMessage.return:True
TEST.END

-- Test Case: InvalidCmd
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:InvalidCmd
TEST.VALUE:communication.ProcessMessage.messageCategory:Invalid
TEST.EXPECTED:communication.ProcessMessage.return:True
TEST.END

-- Test Case: TextMsg
TEST.UNIT:communication
TEST.SUBPROGRAM:ProcessMessage
TEST.NEW
TEST.NAME:TextMsg
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.VECTORCAST_STR1:<<malloc 6>>
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.VECTORCAST_STR1:"Text1"
TEST.VALUE:communication.ProcessMessage.messageCategory:Text_Message
TEST.VALUE:communication.ProcessMessage.message:VECTORCAST_STR1
TEST.EXPECTED:communication.ProcessMessage.return:True
TEST.END
