-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : ADV_USER_CODE
-- Unit(s) Under Test: datalink_transmit
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

-- Unit: datalink_transmit

-- Subprogram: pkt_transmit

-- Test Case: LARGE
TEST.UNIT:datalink_transmit
TEST.SUBPROGRAM:pkt_transmit
TEST.NEW
TEST.NAME:LARGE
TEST.STUB:datalink_transmit.hw_send_rts
TEST.STUB:datalink_transmit.hw_check_cts
TEST.STUB:datalink_transmit.hw_tx_byte
TEST.VALUE:USER_GLOBALS_VCAST.<<GLOBAL>>.my_stub_ctr:0
TEST.VALUE:datalink_transmit.hw_check_cts.return:1
TEST.VALUE:datalink_transmit.pkt_transmit.msg_len:100
TEST.VALUE:datalink_transmit.pkt_transmit.msg_num:16#1#
TEST.EXPECTED:USER_GLOBALS_VCAST.<<GLOBAL>>.my_stub_ctr:103
TEST.EXPECTED:datalink_transmit.pkt_transmit.return:TX_GOOD
TEST.STUB_VAL_USER_CODE:datalink_transmit.hw_tx_byte.ch
my_stub_ctr++;

TEST.END_STUB_VAL_USER_CODE:
TEST.VALUE_USER_CODE:datalink_transmit.pkt_transmit.msg
<<datalink_transmit.pkt_transmit.msg>> = malloc(100);
memset(<<datalink_transmit.pkt_transmit.msg>>,'A',100);

TEST.END_VALUE_USER_CODE:
TEST.END

-- Test Case: SMALL
TEST.UNIT:datalink_transmit
TEST.SUBPROGRAM:pkt_transmit
TEST.NEW
TEST.NAME:SMALL
TEST.STUB:datalink_transmit.hw_send_rts
TEST.STUB:datalink_transmit.hw_check_cts
TEST.STUB:datalink_transmit.hw_tx_byte
TEST.VALUE:datalink_transmit.hw_check_cts.return:1
TEST.VALUE:datalink_transmit.pkt_transmit.msg:<<malloc 4>>
TEST.VALUE:datalink_transmit.pkt_transmit.msg:"abc"
TEST.VALUE:datalink_transmit.pkt_transmit.msg_len:3
TEST.VALUE:datalink_transmit.pkt_transmit.msg_num:16#99#
TEST.EXPECTED:datalink_transmit.hw_tx_byte.ch:16#6#,16#99#,16#AB#,16#61#,16#62#,16#63#
TEST.EXPECTED:datalink_transmit.pkt_transmit.return:TX_GOOD
TEST.END
