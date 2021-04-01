-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : ACME_PAYROLL
-- Unit(s) Under Test: Acme_PayrollSystem
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

-- Test Case: Verify15K
TEST.SUBPROGRAM:<<INIT>>
TEST.NEW
TEST.NAME:Verify15K
TEST.COMPOUND_ONLY
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mCashOnHand:15000.0
TEST.END

-- Test Case: Verify2K
TEST.SUBPROGRAM:<<INIT>>
TEST.NEW
TEST.NAME:Verify2K
TEST.COMPOUND_ONLY
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mCashOnHand:2000.0
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mNumEmployees:2
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mTotalPayroll:3000.0
TEST.END

-- Test Case: Verify5k
TEST.SUBPROGRAM:<<INIT>>
TEST.NEW
TEST.NAME:Verify5k
TEST.COMPOUND_ONLY
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mCashOnHand:5000.0
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mNumEmployees:3
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mTotalPayroll:5000.0
TEST.END

-- Unit: Acme_PayrollSystem

-- Subprogram: Acme_PayrollSystem::Acme_PayrollSystem

-- Test Case: Init10K.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::Acme_PayrollSystem
TEST.NEW
TEST.NAME:Init10K.001
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 16 TEST.NAME:Init10K
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Init10K.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::Acme_PayrollSystem.InitialCash:10000.0
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mCashOnHand:10000.0
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mTaxRate:0.20
TEST.END

-- Subprogram: Acme_PayrollSystem::addCash

-- Test Case: Add5K.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::addCash
TEST.NEW
TEST.NAME:Add5K.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 25 TEST.NAME:Add5K
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Add5K.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addCash.deposit:5000
TEST.END

-- Subprogram: Acme_PayrollSystem::addEmployee

-- Test Case: Add_Mary1K.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::addEmployee
TEST.NEW
TEST.NAME:Add_Mary1K.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 33 TEST.NAME:Add_Mary1K
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Add_Mary1K.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:<<malloc 5>>
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:"Mary"
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.salary:1000.0
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.age:20
TEST.EXPECTED:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.return:true
TEST.END

-- Test Case: Add_Sue2K.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::addEmployee
TEST.NEW
TEST.NAME:Add_Sue2K.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 45 TEST.NAME:Add_Sue2K
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Add_Sue2K.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:<<malloc 4>>
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:"Sue"
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.salary:2000.0
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.age:25
TEST.EXPECTED:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.return:true
TEST.END

-- Test Case: Add_Tom2K.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::addEmployee
TEST.NEW
TEST.NAME:Add_Tom2K.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 57 TEST.NAME:Add_Tom2K
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Add_Tom2K.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:<<malloc 4>>
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:"Tom"
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.salary:2000.0
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.age:30
TEST.EXPECTED:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.return:true
TEST.END

-- Test Case: Singleton.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::addEmployee
TEST.NEW
TEST.NAME:Singleton.001
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 69 TEST.NAME:Singleton
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: Singleton.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.<<constructor>>.Acme_PayrollSystem(double).<<call>>:0
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:<<malloc 4>>
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.name:"Bob"
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.salary:5000.0
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.age:30
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mNumEmployees:1
TEST.EXPECTED:Acme_PayrollSystem.<<GLOBAL>>.(cl).Acme_PayrollSystem.Acme_PayrollSystem.mTotalPayroll:5000.0
TEST.EXPECTED:Acme_PayrollSystem.Acme_PayrollSystem::addEmployee.return:true
TEST.END

-- Subprogram: Acme_PayrollSystem::removeEmployee

-- Test Case: RemoveSue.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::removeEmployee
TEST.NEW
TEST.NAME:RemoveSue.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 83 TEST.NAME:RemoveSue
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: RemoveSue.001
TEST.END_IMPORT_FAILURES:
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::removeEmployee.name:<<malloc 4>>
TEST.VALUE:Acme_PayrollSystem.Acme_PayrollSystem::removeEmployee.name:"Sue"
TEST.EXPECTED:Acme_PayrollSystem.Acme_PayrollSystem::removeEmployee.return:true
TEST.END

-- Subprogram: Acme_PayrollSystem::runPayroll

-- Test Case: RunPayroll.001
TEST.UNIT:Acme_PayrollSystem
TEST.SUBPROGRAM:Acme_PayrollSystem::runPayroll
TEST.NEW
TEST.NAME:RunPayroll.001
TEST.COMPOUND_ONLY
TEST.IMPORT_FAILURES:
(E) Errors from previous script import(s)
    >>> (E) @LINE: 93 TEST.NAME:RunPayroll
    >>>     >>> Invalid Test Case Name - Duplicate Test Case Name
    >>>     >>> Using Automatic Name: RunPayroll.001
TEST.END_IMPORT_FAILURES:
TEST.END

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:AddCashTest
TEST.SLOT: "1", "Acme_PayrollSystem", "Acme_PayrollSystem::Acme_PayrollSystem", "1", "Init10K.001"
TEST.SLOT: "2", "Acme_PayrollSystem", "Acme_PayrollSystem::addCash", "1", "Add5K.001"
TEST.SLOT: "3", "<<INIT>>", "<<INIT>>", "1", "Verify15K"
TEST.END
--

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:PayrollTest
TEST.SLOT: "1", "Acme_PayrollSystem", "Acme_PayrollSystem::Acme_PayrollSystem", "1", "Init10K.001"
TEST.SLOT: "2", "Acme_PayrollSystem", "Acme_PayrollSystem::addEmployee", "1", "Add_Mary1K.001"
TEST.SLOT: "3", "Acme_PayrollSystem", "Acme_PayrollSystem::addEmployee", "1", "Add_Sue2K.001"
TEST.SLOT: "4", "Acme_PayrollSystem", "Acme_PayrollSystem::addEmployee", "1", "Add_Tom2K.001"
TEST.SLOT: "5", "Acme_PayrollSystem", "Acme_PayrollSystem::runPayroll", "1", "RunPayroll.001"
TEST.SLOT: "6", "<<INIT>>", "<<INIT>>", "1", "Verify5k"
TEST.SLOT: "7", "Acme_PayrollSystem", "Acme_PayrollSystem::removeEmployee", "1", "RemoveSue.001"
TEST.SLOT: "8", "Acme_PayrollSystem", "Acme_PayrollSystem::runPayroll", "1", "RunPayroll.001"
TEST.SLOT: "9", "<<INIT>>", "<<INIT>>", "1", "Verify2K"
TEST.END
--
