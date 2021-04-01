-- VectorCAST 20.sp5 (12/16/20)
-- Test Case Script
--
-- Environment    : ADV_STUBS
-- Unit(s) Under Test: advanced_stubbing
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

-- Subprogram: <<INIT>>

-- Test Case: <<INIT>>.001
TEST.SUBPROGRAM:<<INIT>>
TEST.NEW
TEST.NAME:<<INIT>>.001
TEST.END

-- Unit: advanced_stubbing

-- Subprogram: get_numeric_string

-- Test Case: get3
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:get_numeric_string
TEST.NEW
TEST.NAME:get3
TEST.VALUE:advanced_stubbing.get_numeric_string.string_length:3
TEST.VALUE:uut_prototype_stubs.read_key_pad.return:'9','8','7'
TEST.EXPECTED:advanced_stubbing.get_numeric_string.return:987
TEST.END

-- Test Case: get_3_2_4
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:get_numeric_string
TEST.NEW
TEST.NAME:get_3_2_4
TEST.VALUE:<<OPTIONS>>.MULTI_RETURN_SPANS_RANGE:TRUE
TEST.VALUE:advanced_stubbing.get_numeric_string.string_length:3,2,4
TEST.VALUE:uut_prototype_stubs.read_key_pad.return:'1','2','3','4','5','6','7','8','9'
TEST.EXPECTED:advanced_stubbing.get_numeric_string.return:123,45,6789
TEST.END

-- Subprogram: log_error_msg

-- Test Case: log_error_msg.001
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:log_error_msg
TEST.NEW
TEST.NAME:log_error_msg.001
TEST.VALUE:advanced_stubbing.log_error_msg.str:<<malloc 12>>
TEST.VALUE:advanced_stubbing.log_error_msg.str:"SystemError"
TEST.EXPECTED:advanced_stubbing.log_error_msg.return:1
TEST.END

-- Subprogram: temp_monitor

-- Test Case: C_BOILING
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:C_BOILING
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:CELSIUS
TEST.VALUE:uut_prototype_stubs.myGauge.return:101.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:BOILING
TEST.END

-- Test Case: C_FREEZING
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:C_FREEZING
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:CELSIUS
TEST.VALUE:uut_prototype_stubs.myGauge.return:-1.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:FREEZING
TEST.END

-- Test Case: C_NORMAL
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:C_NORMAL
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:CELSIUS
TEST.VALUE:uut_prototype_stubs.myGauge.return:50.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:NORMAL
TEST.END

-- Test Case: F_BOILING
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:F_BOILING
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:FAHRENHEIT
TEST.VALUE:uut_prototype_stubs.myGauge.return:213.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:BOILING
TEST.END

-- Test Case: F_BOILING.001
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:F_BOILING.001
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:FAHRENHEIT
TEST.VALUE:uut_prototype_stubs.myGauge.return:100.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:NORMAL
TEST.END

-- Test Case: F_FREEZING
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:F_FREEZING
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:myGauge
TEST.VALUE:advanced_stubbing.temp_monitor.scale:FAHRENHEIT
TEST.VALUE:uut_prototype_stubs.myGauge.return:31.0
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:FREEZING
TEST.END

-- Test Case: NullFunction
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:temp_monitor
TEST.NEW
TEST.NAME:NullFunction
TEST.VALUE:advanced_stubbing.temp_monitor.func_ptr:<<null>>
TEST.EXPECTED:advanced_stubbing.temp_monitor.return:BAD_GAUGE
TEST.END

-- Subprogram: use_malloc

-- Test Case: Real
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:use_malloc
TEST.NEW
TEST.NAME:Real
TEST.EXPECTED:advanced_stubbing.use_malloc.return:"ok"
TEST.END

-- Test Case: Stub
TEST.UNIT:advanced_stubbing
TEST.SUBPROGRAM:use_malloc
TEST.NEW
TEST.NAME:Stub
TEST.STUB:uut_prototype_stubs.malloc
TEST.VALUE:uut_prototype_stubs.malloc.return:<<null>>
TEST.EXPECTED:advanced_stubbing.use_malloc.return:<<null>>
TEST.END
