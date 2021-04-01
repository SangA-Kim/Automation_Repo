-- VectorCAST 20.sp5 (12/16/20)
-- Test Case Script
--
-- Environment    : CSV_IMPORT
-- Unit(s) Under Test: line
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

-- Unit: line

-- Subprogram: findX

-- Test Case: (MAP)findX.001
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:(MAP)findX.001
TEST.CSV_FILENAME:C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
TEST.CSV_DELIMITER:COMMA
TEST.CSV_HEADER_ROWS: 1
TEST.CSV_SKIPPED_ROWS: 1
TEST.CSV_ROWS_PER_TESTCASE: 1
TEST.CSV_COLUMN_INFO: 1 , TEST.VALUE:line.findX.y
TEST.CSV_COLUMN_INFO: 2 , TEST.VALUE:line.findX.m
TEST.CSV_COLUMN_INFO: 4 , TEST.VALUE:line.findX.b
TEST.CSV_COLUMN_INFO: 3 , TEST.EXPECTED:line.findX.return
TEST.END

-- Test Case: findX-ROW_0001
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0001
TEST.NOTES:
Row 1 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:15.0
TEST.VALUE:line.findX.m:-1.0
TEST.VALUE:line.findX.b:5.0
TEST.EXPECTED:line.findX.return:-10.0
TEST.END

-- Test Case: findX-ROW_0002
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0002
TEST.NOTES:
Row 2 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:12.6
TEST.VALUE:line.findX.m:-0.9
TEST.VALUE:line.findX.b:4.5
TEST.EXPECTED:line.findX.return:-9.0
TEST.END

-- Test Case: findX-ROW_0003
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0003
TEST.NOTES:
Row 3 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:10.4
TEST.VALUE:line.findX.m:-0.8
TEST.VALUE:line.findX.b:4.0
TEST.EXPECTED:line.findX.return:-8.0
TEST.END

-- Test Case: findX-ROW_0004
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0004
TEST.NOTES:
Row 4 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:8.4
TEST.VALUE:line.findX.m:-0.7
TEST.VALUE:line.findX.b:3.5
TEST.EXPECTED:line.findX.return:-7.0
TEST.END

-- Test Case: findX-ROW_0005
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0005
TEST.NOTES:
Row 5 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:6.6
TEST.VALUE:line.findX.m:-0.6
TEST.VALUE:line.findX.b:3.0
TEST.EXPECTED:line.findX.return:-6.0
TEST.END

-- Test Case: findX-ROW_0006
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0006
TEST.NOTES:
Row 6 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:5.0
TEST.VALUE:line.findX.m:-0.5
TEST.VALUE:line.findX.b:2.5
TEST.EXPECTED:line.findX.return:-5.0
TEST.END

-- Test Case: findX-ROW_0007
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0007
TEST.NOTES:
Row 7 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:3.6
TEST.VALUE:line.findX.m:-0.4
TEST.VALUE:line.findX.b:2.0
TEST.EXPECTED:line.findX.return:-4.0
TEST.END

-- Test Case: findX-ROW_0008
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0008
TEST.NOTES:
Row 8 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:2.4
TEST.VALUE:line.findX.m:-0.3
TEST.VALUE:line.findX.b:1.5
TEST.EXPECTED:line.findX.return:-3.0
TEST.END

-- Test Case: findX-ROW_0009
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0009
TEST.NOTES:
Row 9 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:1.4
TEST.VALUE:line.findX.m:-0.2
TEST.VALUE:line.findX.b:1.0
TEST.EXPECTED:line.findX.return:-2.0
TEST.END

-- Test Case: findX-ROW_0010
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0010
TEST.NOTES:
Row 10 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:0.6
TEST.VALUE:line.findX.m:-0.1
TEST.VALUE:line.findX.b:0.5
TEST.EXPECTED:line.findX.return:-1.0
TEST.END

-- Test Case: findX-ROW_0011
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0011
TEST.NOTES:
Row 11 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:0.0
TEST.VALUE:line.findX.m:0.0
TEST.VALUE:line.findX.b:0.0
TEST.EXPECTED:line.findX.return:0.0
TEST.END

-- Test Case: findX-ROW_0012
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0012
TEST.NOTES:
Row 12 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-0.4
TEST.VALUE:line.findX.m:0.1
TEST.VALUE:line.findX.b:-0.5
TEST.EXPECTED:line.findX.return:1.0
TEST.END

-- Test Case: findX-ROW_0013
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0013
TEST.NOTES:
Row 13 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-0.6
TEST.VALUE:line.findX.m:0.2
TEST.VALUE:line.findX.b:-1.0
TEST.EXPECTED:line.findX.return:2.0
TEST.END

-- Test Case: findX-ROW_0014
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0014
TEST.NOTES:
Row 14 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-0.6
TEST.VALUE:line.findX.m:0.3
TEST.VALUE:line.findX.b:-1.5
TEST.EXPECTED:line.findX.return:3.0
TEST.END

-- Test Case: findX-ROW_0015
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0015
TEST.NOTES:
Row 15 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-0.4
TEST.VALUE:line.findX.m:0.4
TEST.VALUE:line.findX.b:-2.0
TEST.EXPECTED:line.findX.return:4.0
TEST.END

-- Test Case: findX-ROW_0016
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0016
TEST.NOTES:
Row 16 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:0.0
TEST.VALUE:line.findX.m:0.5
TEST.VALUE:line.findX.b:-2.5
TEST.EXPECTED:line.findX.return:5.0
TEST.END

-- Test Case: findX-ROW_0017
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0017
TEST.NOTES:
Row 17 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:0.6
TEST.VALUE:line.findX.m:0.6
TEST.VALUE:line.findX.b:-3.0
TEST.EXPECTED:line.findX.return:6.0
TEST.END

-- Test Case: findX-ROW_0018
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0018
TEST.NOTES:
Row 18 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:1.4
TEST.VALUE:line.findX.m:0.7
TEST.VALUE:line.findX.b:-3.5
TEST.EXPECTED:line.findX.return:7.0
TEST.END

-- Test Case: findX-ROW_0019
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0019
TEST.NOTES:
Row 19 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:2.4
TEST.VALUE:line.findX.m:0.8
TEST.VALUE:line.findX.b:-4.0
TEST.EXPECTED:line.findX.return:8.0
TEST.END

-- Test Case: findX-ROW_0020
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0020
TEST.NOTES:
Row 20 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:3.6
TEST.VALUE:line.findX.m:0.9
TEST.VALUE:line.findX.b:-4.5
TEST.EXPECTED:line.findX.return:9.0
TEST.END

-- Test Case: findX-ROW_0021
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0021
TEST.NOTES:
Row 21 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:5.0
TEST.VALUE:line.findX.m:1.0
TEST.VALUE:line.findX.b:-5.0
TEST.EXPECTED:line.findX.return:10.0
TEST.END

-- Test Case: findX-ROW_0022
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0022
TEST.NOTES:
Row 22 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-10.0
TEST.VALUE:line.findX.m:-1.0
TEST.VALUE:line.findX.b:-5.0
TEST.EXPECTED:line.findX.return:5.0
TEST.END

-- Test Case: findX-ROW_0023
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0023
TEST.NOTES:
Row 23 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-9.0
TEST.VALUE:line.findX.m:-0.9
TEST.VALUE:line.findX.b:-4.95
TEST.EXPECTED:line.findX.return:4.5
TEST.END

-- Test Case: findX-ROW_0024
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0024
TEST.NOTES:
Row 24 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-8.0
TEST.VALUE:line.findX.m:-0.8
TEST.VALUE:line.findX.b:-4.8
TEST.EXPECTED:line.findX.return:4.0
TEST.END

-- Test Case: findX-ROW_0025
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0025
TEST.NOTES:
Row 25 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-7.0
TEST.VALUE:line.findX.m:-0.7
TEST.VALUE:line.findX.b:-4.55
TEST.EXPECTED:line.findX.return:3.5
TEST.END

-- Test Case: findX-ROW_0026
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0026
TEST.NOTES:
Row 26 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-6.0
TEST.VALUE:line.findX.m:-0.6
TEST.VALUE:line.findX.b:-4.2
TEST.EXPECTED:line.findX.return:3.0
TEST.END

-- Test Case: findX-ROW_0027
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0027
TEST.NOTES:
Row 27 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-5.0
TEST.VALUE:line.findX.m:-0.5
TEST.VALUE:line.findX.b:-3.75
TEST.EXPECTED:line.findX.return:2.5
TEST.END

-- Test Case: findX-ROW_0028
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0028
TEST.NOTES:
Row 28 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-4.0
TEST.VALUE:line.findX.m:-0.4
TEST.VALUE:line.findX.b:-3.2
TEST.EXPECTED:line.findX.return:2.0
TEST.END

-- Test Case: findX-ROW_0029
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0029
TEST.NOTES:
Row 29 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-3.0
TEST.VALUE:line.findX.m:-0.3
TEST.VALUE:line.findX.b:-2.55
TEST.EXPECTED:line.findX.return:1.5
TEST.END

-- Test Case: findX-ROW_0030
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0030
TEST.NOTES:
Row 30 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-2.0
TEST.VALUE:line.findX.m:-0.2
TEST.VALUE:line.findX.b:-1.8
TEST.EXPECTED:line.findX.return:1.0
TEST.END

-- Test Case: findX-ROW_0031
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0031
TEST.NOTES:
Row 31 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:-1.0
TEST.VALUE:line.findX.m:-0.1
TEST.VALUE:line.findX.b:-0.95
TEST.EXPECTED:line.findX.return:0.5
TEST.END

-- Test Case: findX-ROW_0032
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0032
TEST.NOTES:
Row 32 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:0.0
TEST.VALUE:line.findX.m:0.0
TEST.VALUE:line.findX.b:0.0
TEST.EXPECTED:line.findX.return:0.0
TEST.END

-- Test Case: findX-ROW_0033
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0033
TEST.NOTES:
Row 33 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:1.0
TEST.VALUE:line.findX.m:0.1
TEST.VALUE:line.findX.b:1.05
TEST.EXPECTED:line.findX.return:-0.5
TEST.END

-- Test Case: findX-ROW_0034
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0034
TEST.NOTES:
Row 34 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:2.0
TEST.VALUE:line.findX.m:0.2
TEST.VALUE:line.findX.b:2.2
TEST.EXPECTED:line.findX.return:-1.0
TEST.END

-- Test Case: findX-ROW_0035
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0035
TEST.NOTES:
Row 35 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:3.0
TEST.VALUE:line.findX.m:0.3
TEST.VALUE:line.findX.b:3.45
TEST.EXPECTED:line.findX.return:-1.5
TEST.END

-- Test Case: findX-ROW_0036
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0036
TEST.NOTES:
Row 36 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:4.0
TEST.VALUE:line.findX.m:0.4
TEST.VALUE:line.findX.b:4.8
TEST.EXPECTED:line.findX.return:-2.0
TEST.END

-- Test Case: findX-ROW_0037
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0037
TEST.NOTES:
Row 37 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:5.0
TEST.VALUE:line.findX.m:0.5
TEST.VALUE:line.findX.b:6.25
TEST.EXPECTED:line.findX.return:-2.5
TEST.END

-- Test Case: findX-ROW_0038
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0038
TEST.NOTES:
Row 38 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:6.0
TEST.VALUE:line.findX.m:0.6
TEST.VALUE:line.findX.b:7.8
TEST.EXPECTED:line.findX.return:-3.0
TEST.END

-- Test Case: findX-ROW_0039
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0039
TEST.NOTES:
Row 39 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:7.0
TEST.VALUE:line.findX.m:0.7
TEST.VALUE:line.findX.b:9.45
TEST.EXPECTED:line.findX.return:-3.5
TEST.END

-- Test Case: findX-ROW_0040
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0040
TEST.NOTES:
Row 40 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:8.0
TEST.VALUE:line.findX.m:0.8
TEST.VALUE:line.findX.b:11.2
TEST.EXPECTED:line.findX.return:-4.0
TEST.END

-- Test Case: findX-ROW_0041
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0041
TEST.NOTES:
Row 41 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:9.0
TEST.VALUE:line.findX.m:0.9
TEST.VALUE:line.findX.b:13.05
TEST.EXPECTED:line.findX.return:-4.5
TEST.END

-- Test Case: findX-ROW_0042
TEST.UNIT:line
TEST.SUBPROGRAM:findX
TEST.NEW
TEST.NAME:findX-ROW_0042
TEST.NOTES:
Row 42 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    1: TEST.VALUE:line.findX.y
Column    2: TEST.VALUE:line.findX.m
Column    4: TEST.VALUE:line.findX.b
Column    3: TEST.EXPECTED:line.findX.return
TEST.END_NOTES:
TEST.VALUE:line.findX.y:10.0
TEST.VALUE:line.findX.m:1.0
TEST.VALUE:line.findX.b:15.0
TEST.EXPECTED:line.findX.return:-5.0
TEST.END

-- Subprogram: findY

-- Test Case: (MAP)findY.001
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:(MAP)findY.001
TEST.CSV_FILENAME:C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
TEST.CSV_DELIMITER:COMMA
TEST.CSV_HEADER_ROWS: 1
TEST.CSV_SKIPPED_ROWS: 1
TEST.CSV_ROWS_PER_TESTCASE: 1
TEST.CSV_COLUMN_INFO: 3 , TEST.VALUE:line.findY.x
TEST.CSV_COLUMN_INFO: 2 , TEST.VALUE:line.findY.m
TEST.CSV_COLUMN_INFO: 4 , TEST.VALUE:line.findY.b
TEST.CSV_COLUMN_INFO: 1 , TEST.EXPECTED:line.findY.return
TEST.END

-- Test Case: findY-ROW_0001
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0001
TEST.NOTES:
Row 1 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-10.0
TEST.VALUE:line.findY.m:-1.0
TEST.VALUE:line.findY.b:5.0
TEST.EXPECTED:line.findY.return:15.0
TEST.END

-- Test Case: findY-ROW_0002
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0002
TEST.NOTES:
Row 2 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-9.0
TEST.VALUE:line.findY.m:-0.9
TEST.VALUE:line.findY.b:4.5
TEST.EXPECTED:line.findY.return:12.6
TEST.END

-- Test Case: findY-ROW_0003
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0003
TEST.NOTES:
Row 3 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-8.0
TEST.VALUE:line.findY.m:-0.8
TEST.VALUE:line.findY.b:4.0
TEST.EXPECTED:line.findY.return:10.4
TEST.END

-- Test Case: findY-ROW_0004
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0004
TEST.NOTES:
Row 4 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-7.0
TEST.VALUE:line.findY.m:-0.7
TEST.VALUE:line.findY.b:3.5
TEST.EXPECTED:line.findY.return:8.4
TEST.END

-- Test Case: findY-ROW_0005
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0005
TEST.NOTES:
Row 5 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-6.0
TEST.VALUE:line.findY.m:-0.6
TEST.VALUE:line.findY.b:3.0
TEST.EXPECTED:line.findY.return:6.6
TEST.END

-- Test Case: findY-ROW_0006
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0006
TEST.NOTES:
Row 6 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-5.0
TEST.VALUE:line.findY.m:-0.5
TEST.VALUE:line.findY.b:2.5
TEST.EXPECTED:line.findY.return:5.0
TEST.END

-- Test Case: findY-ROW_0007
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0007
TEST.NOTES:
Row 7 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-4.0
TEST.VALUE:line.findY.m:-0.4
TEST.VALUE:line.findY.b:2.0
TEST.EXPECTED:line.findY.return:3.6
TEST.END

-- Test Case: findY-ROW_0008
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0008
TEST.NOTES:
Row 8 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-3.0
TEST.VALUE:line.findY.m:-0.3
TEST.VALUE:line.findY.b:1.5
TEST.EXPECTED:line.findY.return:2.4
TEST.END

-- Test Case: findY-ROW_0009
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0009
TEST.NOTES:
Row 9 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-2.0
TEST.VALUE:line.findY.m:-0.2
TEST.VALUE:line.findY.b:1.0
TEST.EXPECTED:line.findY.return:1.4
TEST.END

-- Test Case: findY-ROW_0010
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0010
TEST.NOTES:
Row 10 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-1.0
TEST.VALUE:line.findY.m:-0.1
TEST.VALUE:line.findY.b:0.5
TEST.EXPECTED:line.findY.return:0.6
TEST.END

-- Test Case: findY-ROW_0011
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0011
TEST.NOTES:
Row 11 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:0.0
TEST.VALUE:line.findY.m:0.0
TEST.VALUE:line.findY.b:0.0
TEST.EXPECTED:line.findY.return:0.0
TEST.END

-- Test Case: findY-ROW_0012
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0012
TEST.NOTES:
Row 12 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:1.0
TEST.VALUE:line.findY.m:0.1
TEST.VALUE:line.findY.b:-0.5
TEST.EXPECTED:line.findY.return:-0.4
TEST.END

-- Test Case: findY-ROW_0013
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0013
TEST.NOTES:
Row 13 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:2.0
TEST.VALUE:line.findY.m:0.2
TEST.VALUE:line.findY.b:-1.0
TEST.EXPECTED:line.findY.return:-0.6
TEST.END

-- Test Case: findY-ROW_0014
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0014
TEST.NOTES:
Row 14 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:3.0
TEST.VALUE:line.findY.m:0.3
TEST.VALUE:line.findY.b:-1.5
TEST.EXPECTED:line.findY.return:-0.6
TEST.END

-- Test Case: findY-ROW_0015
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0015
TEST.NOTES:
Row 15 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:4.0
TEST.VALUE:line.findY.m:0.4
TEST.VALUE:line.findY.b:-2.0
TEST.EXPECTED:line.findY.return:-0.4
TEST.END

-- Test Case: findY-ROW_0016
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0016
TEST.NOTES:
Row 16 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:5.0
TEST.VALUE:line.findY.m:0.5
TEST.VALUE:line.findY.b:-2.5
TEST.EXPECTED:line.findY.return:0.0
TEST.END

-- Test Case: findY-ROW_0017
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0017
TEST.NOTES:
Row 17 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:6.0
TEST.VALUE:line.findY.m:0.6
TEST.VALUE:line.findY.b:-3.0
TEST.EXPECTED:line.findY.return:0.6
TEST.END

-- Test Case: findY-ROW_0018
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0018
TEST.NOTES:
Row 18 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:7.0
TEST.VALUE:line.findY.m:0.7
TEST.VALUE:line.findY.b:-3.5
TEST.EXPECTED:line.findY.return:1.4
TEST.END

-- Test Case: findY-ROW_0019
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0019
TEST.NOTES:
Row 19 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:8.0
TEST.VALUE:line.findY.m:0.8
TEST.VALUE:line.findY.b:-4.0
TEST.EXPECTED:line.findY.return:2.4
TEST.END

-- Test Case: findY-ROW_0020
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0020
TEST.NOTES:
Row 20 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:9.0
TEST.VALUE:line.findY.m:0.9
TEST.VALUE:line.findY.b:-4.5
TEST.EXPECTED:line.findY.return:3.6
TEST.END

-- Test Case: findY-ROW_0021
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0021
TEST.NOTES:
Row 21 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:10.0
TEST.VALUE:line.findY.m:1.0
TEST.VALUE:line.findY.b:-5.0
TEST.EXPECTED:line.findY.return:5.0
TEST.END

-- Test Case: findY-ROW_0022
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0022
TEST.NOTES:
Row 22 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:5.0
TEST.VALUE:line.findY.m:-1.0
TEST.VALUE:line.findY.b:-5.0
TEST.EXPECTED:line.findY.return:-10.0
TEST.END

-- Test Case: findY-ROW_0023
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0023
TEST.NOTES:
Row 23 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:4.5
TEST.VALUE:line.findY.m:-0.9
TEST.VALUE:line.findY.b:-4.95
TEST.EXPECTED:line.findY.return:-9.0
TEST.END

-- Test Case: findY-ROW_0024
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0024
TEST.NOTES:
Row 24 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:4.0
TEST.VALUE:line.findY.m:-0.8
TEST.VALUE:line.findY.b:-4.8
TEST.EXPECTED:line.findY.return:-8.0
TEST.END

-- Test Case: findY-ROW_0025
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0025
TEST.NOTES:
Row 25 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:3.5
TEST.VALUE:line.findY.m:-0.7
TEST.VALUE:line.findY.b:-4.55
TEST.EXPECTED:line.findY.return:-7.0
TEST.END

-- Test Case: findY-ROW_0026
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0026
TEST.NOTES:
Row 26 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:3.0
TEST.VALUE:line.findY.m:-0.6
TEST.VALUE:line.findY.b:-4.2
TEST.EXPECTED:line.findY.return:-6.0
TEST.END

-- Test Case: findY-ROW_0027
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0027
TEST.NOTES:
Row 27 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:2.5
TEST.VALUE:line.findY.m:-0.5
TEST.VALUE:line.findY.b:-3.75
TEST.EXPECTED:line.findY.return:-5.0
TEST.END

-- Test Case: findY-ROW_0028
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0028
TEST.NOTES:
Row 28 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:2.0
TEST.VALUE:line.findY.m:-0.4
TEST.VALUE:line.findY.b:-3.2
TEST.EXPECTED:line.findY.return:-4.0
TEST.END

-- Test Case: findY-ROW_0029
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0029
TEST.NOTES:
Row 29 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:1.5
TEST.VALUE:line.findY.m:-0.3
TEST.VALUE:line.findY.b:-2.55
TEST.EXPECTED:line.findY.return:-3.0
TEST.END

-- Test Case: findY-ROW_0030
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0030
TEST.NOTES:
Row 30 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:1.0
TEST.VALUE:line.findY.m:-0.2
TEST.VALUE:line.findY.b:-1.8
TEST.EXPECTED:line.findY.return:-2.0
TEST.END

-- Test Case: findY-ROW_0031
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0031
TEST.NOTES:
Row 31 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:0.5
TEST.VALUE:line.findY.m:-0.1
TEST.VALUE:line.findY.b:-0.95
TEST.EXPECTED:line.findY.return:-1.0
TEST.END

-- Test Case: findY-ROW_0032
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0032
TEST.NOTES:
Row 32 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:0.0
TEST.VALUE:line.findY.m:0.0
TEST.VALUE:line.findY.b:0.0
TEST.EXPECTED:line.findY.return:0.0
TEST.END

-- Test Case: findY-ROW_0033
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0033
TEST.NOTES:
Row 33 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-0.5
TEST.VALUE:line.findY.m:0.1
TEST.VALUE:line.findY.b:1.05
TEST.EXPECTED:line.findY.return:1.0
TEST.END

-- Test Case: findY-ROW_0034
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0034
TEST.NOTES:
Row 34 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-1.0
TEST.VALUE:line.findY.m:0.2
TEST.VALUE:line.findY.b:2.2
TEST.EXPECTED:line.findY.return:2.0
TEST.END

-- Test Case: findY-ROW_0035
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0035
TEST.NOTES:
Row 35 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-1.5
TEST.VALUE:line.findY.m:0.3
TEST.VALUE:line.findY.b:3.45
TEST.EXPECTED:line.findY.return:3.0
TEST.END

-- Test Case: findY-ROW_0036
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0036
TEST.NOTES:
Row 36 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-2.0
TEST.VALUE:line.findY.m:0.4
TEST.VALUE:line.findY.b:4.8
TEST.EXPECTED:line.findY.return:4.0
TEST.END

-- Test Case: findY-ROW_0037
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0037
TEST.NOTES:
Row 37 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-2.5
TEST.VALUE:line.findY.m:0.5
TEST.VALUE:line.findY.b:6.25
TEST.EXPECTED:line.findY.return:5.0
TEST.END

-- Test Case: findY-ROW_0038
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0038
TEST.NOTES:
Row 38 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-3.0
TEST.VALUE:line.findY.m:0.6
TEST.VALUE:line.findY.b:7.8
TEST.EXPECTED:line.findY.return:6.0
TEST.END

-- Test Case: findY-ROW_0039
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0039
TEST.NOTES:
Row 39 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-3.5
TEST.VALUE:line.findY.m:0.7
TEST.VALUE:line.findY.b:9.45
TEST.EXPECTED:line.findY.return:7.0
TEST.END

-- Test Case: findY-ROW_0040
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0040
TEST.NOTES:
Row 40 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-4.0
TEST.VALUE:line.findY.m:0.8
TEST.VALUE:line.findY.b:11.2
TEST.EXPECTED:line.findY.return:8.0
TEST.END

-- Test Case: findY-ROW_0041
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0041
TEST.NOTES:
Row 41 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-4.5
TEST.VALUE:line.findY.m:0.9
TEST.VALUE:line.findY.b:13.05
TEST.EXPECTED:line.findY.return:9.0
TEST.END

-- Test Case: findY-ROW_0042
TEST.UNIT:line
TEST.SUBPROGRAM:findY
TEST.NEW
TEST.NAME:findY-ROW_0042
TEST.NOTES:
Row 42 from C:/VCAST/git/Training/Training/SourceFiles/SupportFiles/line.csv
Column    3: TEST.VALUE:line.findY.x
Column    2: TEST.VALUE:line.findY.m
Column    4: TEST.VALUE:line.findY.b
Column    1: TEST.EXPECTED:line.findY.return
TEST.END_NOTES:
TEST.VALUE:line.findY.x:-5.0
TEST.VALUE:line.findY.m:1.0
TEST.VALUE:line.findY.b:15.0
TEST.EXPECTED:line.findY.return:10.0
TEST.END
