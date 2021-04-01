-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : IO_CHAINING
-- Unit(s) Under Test: io_wrapper
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

-- Unit: io_wrapper

-- Subprogram: CloseFile

-- Test Case: CLOSE
TEST.UNIT:io_wrapper
TEST.SUBPROGRAM:CloseFile
TEST.NEW
TEST.NAME:CLOSE
TEST.COMPOUND_ONLY
TEST.EXPECTED:io_wrapper.CloseFile.return:True
TEST.VALUE_USER_CODE:io_wrapper.CloseFile.fp
<<io_wrapper.CloseFile.fp>> = ( <<io_wrapper.OpenFile.return>> );
TEST.END_VALUE_USER_CODE:
TEST.END

-- Subprogram: OpenFile

-- Test Case: OPEN_READ
TEST.UNIT:io_wrapper
TEST.SUBPROGRAM:OpenFile
TEST.NEW
TEST.NAME:OPEN_READ
TEST.COMPOUND_ONLY
TEST.NOTES:
<<io_wrapper.OpenFile.return>>
TEST.END_NOTES:
TEST.VALUE:io_wrapper.OpenFile.filename:<<malloc 15>>
TEST.VALUE:io_wrapper.OpenFile.filename:"TestOutput.txt"
TEST.VALUE:io_wrapper.OpenFile.mode:F_READ
TEST.EXPECTED:io_wrapper.OpenFile.return[0].isOpen:True
TEST.END

-- Test Case: OPEN_WRITE
TEST.UNIT:io_wrapper
TEST.SUBPROGRAM:OpenFile
TEST.NEW
TEST.NAME:OPEN_WRITE
TEST.COMPOUND_ONLY
TEST.NOTES:
<<io_wrapper.OpenFile.return>>
TEST.END_NOTES:
TEST.VALUE:io_wrapper.OpenFile.filename:<<malloc 15>>
TEST.VALUE:io_wrapper.OpenFile.filename:"TestOutput.txt"
TEST.VALUE:io_wrapper.OpenFile.mode:F_WRITE
TEST.EXPECTED:io_wrapper.OpenFile.return[0].isOpen:True
TEST.VALUE_USER_CODE:<<testcase>>
system("del TestOutput.txt");

TEST.END_VALUE_USER_CODE:
TEST.END

-- Subprogram: ReadLine

-- Test Case: READ_DATA
TEST.UNIT:io_wrapper
TEST.SUBPROGRAM:ReadLine
TEST.NEW
TEST.NAME:READ_DATA
TEST.COMPOUND_ONLY
TEST.VALUE:io_wrapper.ReadLine.line:<<malloc 6>>
TEST.VALUE:io_wrapper.ReadLine.line:"XXXXX"
TEST.EXPECTED:io_wrapper.ReadLine.line:"Hello"
TEST.EXPECTED:io_wrapper.ReadLine.return:True
TEST.VALUE_USER_CODE:io_wrapper.ReadLine.fp
<<io_wrapper.ReadLine.fp>> = ( <<io_wrapper.OpenFile.return>> );
TEST.END_VALUE_USER_CODE:
TEST.END

-- Subprogram: WriteString

-- Test Case: WRITE_DATA
TEST.UNIT:io_wrapper
TEST.SUBPROGRAM:WriteString
TEST.NEW
TEST.NAME:WRITE_DATA
TEST.COMPOUND_ONLY
TEST.VALUE:io_wrapper.WriteString.line:<<malloc 6>>
TEST.VALUE:io_wrapper.WriteString.line:"Hello"
TEST.EXPECTED:io_wrapper.WriteString.return:True
TEST.VALUE_USER_CODE:io_wrapper.WriteString.fp
<<io_wrapper.WriteString.fp>> = ( <<io_wrapper.OpenFile.return>> );
TEST.END_VALUE_USER_CODE:
TEST.END

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:READ_FILE
TEST.SLOT: "1", "io_wrapper", "OpenFile", "1", "OPEN_READ"
TEST.SLOT: "2", "io_wrapper", "ReadLine", "1", "READ_DATA"
TEST.SLOT: "3", "io_wrapper", "CloseFile", "1", "CLOSE"
TEST.END
--

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:WRITE_AND_READ
TEST.SLOT: "1", "<<COMPOUND>>", "<<COMPOUND>>", "1", "WRITE_FILE"
TEST.SLOT: "2", "<<COMPOUND>>", "<<COMPOUND>>", "1", "READ_FILE"
TEST.END
--

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:WRITE_FILE
TEST.SLOT: "1", "io_wrapper", "OpenFile", "1", "OPEN_WRITE"
TEST.SLOT: "2", "io_wrapper", "WriteString", "1", "WRITE_DATA"
TEST.SLOT: "3", "io_wrapper", "CloseFile", "1", "CLOSE"
TEST.END
--
