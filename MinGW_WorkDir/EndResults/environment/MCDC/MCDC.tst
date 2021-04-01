-- VectorCAST 18.sp3 (10/18/18)
-- Test Case Script
-- 
-- Environment    : MCDC
-- Unit(s) Under Test: mcdc_example
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

-- Unit: mcdc_example

-- Subprogram: Conditional_Example

-- Test Case: PairA_Row1_TTT_T
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairA_Row1_TTT_T
TEST.VALUE:mcdc_example.Conditional_Example.a:1
TEST.VALUE:mcdc_example.Conditional_Example.b:1
TEST.VALUE:mcdc_example.Conditional_Example.c:1
TEST.EXPECTED:mcdc_example.Conditional_Example.return:1
TEST.END

-- Test Case: PairA_Row5_FTT_F
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairA_Row5_FTT_F
TEST.VALUE:mcdc_example.Conditional_Example.a:0
TEST.VALUE:mcdc_example.Conditional_Example.b:1
TEST.VALUE:mcdc_example.Conditional_Example.c:1
TEST.EXPECTED:mcdc_example.Conditional_Example.return:0
TEST.END

-- Test Case: PairB_Row2_TTF_T
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairB_Row2_TTF_T
TEST.VALUE:mcdc_example.Conditional_Example.a:1
TEST.VALUE:mcdc_example.Conditional_Example.b:1
TEST.VALUE:mcdc_example.Conditional_Example.c:0
TEST.EXPECTED:mcdc_example.Conditional_Example.return:1
TEST.END

-- Test Case: PairB_Row4_TFF_F
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairB_Row4_TFF_F
TEST.VALUE:mcdc_example.Conditional_Example.a:1
TEST.VALUE:mcdc_example.Conditional_Example.b:0
TEST.VALUE:mcdc_example.Conditional_Example.c:0
TEST.EXPECTED:mcdc_example.Conditional_Example.return:0
TEST.END

-- Test Case: PairC_Row4_TFF_F
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairC_Row4_TFF_F
TEST.VALUE:mcdc_example.Conditional_Example.a:1
TEST.VALUE:mcdc_example.Conditional_Example.b:0
TEST.VALUE:mcdc_example.Conditional_Example.c:0
TEST.EXPECTED:mcdc_example.Conditional_Example.return:0
TEST.END

-- Test Case: PairC_Row4_TFT_T
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:Conditional_Example
TEST.NEW
TEST.NAME:PairC_Row4_TFT_T
TEST.VALUE:mcdc_example.Conditional_Example.a:1
TEST.VALUE:mcdc_example.Conditional_Example.b:0
TEST.VALUE:mcdc_example.Conditional_Example.c:1
TEST.EXPECTED:mcdc_example.Conditional_Example.return:1
TEST.END

-- Subprogram: open_for_business

-- Test Case: Closed_Mon_1701
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:open_for_business
TEST.NEW
TEST.NAME:Closed_Mon_1701
TEST.VALUE:mcdc_example.open_for_business.time:1701
TEST.VALUE:mcdc_example.open_for_business.day:MONDAY
TEST.EXPECTED:mcdc_example.open_for_business.return:0
TEST.END

-- Test Case: Closed_Mon_759
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:open_for_business
TEST.NEW
TEST.NAME:Closed_Mon_759
TEST.VALUE:mcdc_example.open_for_business.time:759
TEST.VALUE:mcdc_example.open_for_business.day:MONDAY
TEST.EXPECTED:mcdc_example.open_for_business.return:0
TEST.END

-- Test Case: Closed_Sun_1000
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:open_for_business
TEST.NEW
TEST.NAME:Closed_Sun_1000
TEST.VALUE:mcdc_example.open_for_business.time:1000
TEST.VALUE:mcdc_example.open_for_business.day:SUNDAY
TEST.EXPECTED:mcdc_example.open_for_business.return:0
TEST.END

-- Test Case: Open_Mon_1000
TEST.UNIT:mcdc_example
TEST.SUBPROGRAM:open_for_business
TEST.NEW
TEST.NAME:Open_Mon_1000
TEST.VALUE:mcdc_example.open_for_business.time:1000
TEST.VALUE:mcdc_example.open_for_business.day:MONDAY
TEST.EXPECTED:mcdc_example.open_for_business.return:1
TEST.END
