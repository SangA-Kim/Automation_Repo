-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : MGR_UT1
-- Unit(s) Under Test: manager
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

-- Unit: manager

-- Subprogram: Add_Included_Dessert

-- Test Case: COND_1_ROW_1_PAIR_a_TTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_1_ROW_1_PAIR_a_TTT
TEST.MCDC_BASIS_PATH:2 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 2
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> TRUE
      Row number 1 forms a pair with Row 5 for Condition #1, subcondition "a".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:CAESAR
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:STEAK
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:MIXED_DRINK
TEST.END

-- Test Case: COND_1_ROW_2_PAIR_c_TTF
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_1_ROW_2_PAIR_c_TTF
TEST.MCDC_BASIS_PATH:4 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 4
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      Row number 2 forms a pair with Row 1 for Condition #1, subcondition "c".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:CAESAR
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:STEAK
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:NO_BEVERAGE
TEST.END

-- Test Case: COND_1_ROW_3_PAIR_b_TFT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_1_ROW_3_PAIR_b_TFT
TEST.MCDC_BASIS_PATH:3 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 3
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      Row number 3 forms a pair with Row 1 for Condition #1, subcondition "b".
         Condition a ==> TRUE
         Condition b ==> FALSE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:NO_SALAD
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:STEAK
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:MIXED_DRINK
TEST.END

-- Test Case: COND_1_ROW_5_PAIR_a_FTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_1_ROW_5_PAIR_a_FTT
TEST.MCDC_BASIS_PATH:1 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      Row number 5 forms a pair with Row 1 for Condition #1, subcondition "a".
         Condition a ==> FALSE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:CAESAR
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:NO_ENTREE
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:MIXED_DRINK
TEST.END

-- Test Case: COND_2_ROW_1_PAIR_a_TTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_2_ROW_1_PAIR_a_TTT
TEST.MCDC_BASIS_PATH:6 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 6
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      (2) if ((Order->Entree == (LOBSTER) && Order->Salad == (GREEN)) && Order->Beverage == (WINE)) ==> TRUE
      Row number 1 forms a pair with Row 5 for Condition #2, subcondition "a".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:LOBSTER
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.END

-- Test Case: COND_2_ROW_2_PAIR_c_TTF
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_2_ROW_2_PAIR_c_TTF
TEST.MCDC_BASIS_PATH:8 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 8
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      (2) if ((Order->Entree == (LOBSTER) && Order->Salad == (GREEN)) && Order->Beverage == (WINE)) ==> FALSE
      Row number 2 forms a pair with Row 1 for Condition #2, subcondition "c".
         Condition a ==> TRUE
         Condition b ==> TRUE
         Condition c ==> FALSE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:LOBSTER
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:NO_BEVERAGE
TEST.END

-- Test Case: COND_2_ROW_3_PAIR_b_TFT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_2_ROW_3_PAIR_b_TFT
TEST.MCDC_BASIS_PATH:7 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 7
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      (2) if ((Order->Entree == (LOBSTER) && Order->Salad == (GREEN)) && Order->Beverage == (WINE)) ==> FALSE
      Row number 3 forms a pair with Row 1 for Condition #2, subcondition "b".
         Condition a ==> TRUE
         Condition b ==> FALSE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:NO_SALAD
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:LOBSTER
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.END

-- Test Case: COND_2_ROW_5_PAIR_a_FTT
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:COND_2_ROW_5_PAIR_a_FTT
TEST.MCDC_BASIS_PATH:5 of 8
TEST.NOTES:
This is an automatically generated test case.
   Test Path 5
      (1) if ((Order->Entree == (STEAK) && Order->Salad == (CAESAR)) && Order->Beverage == (MIXED_DRINK)) ==> FALSE
      (2) if ((Order->Entree == (LOBSTER) && Order->Salad == (GREEN)) && Order->Beverage == (WINE)) ==> FALSE
      Row number 5 forms a pair with Row 1 for Condition #2, subcondition "a".
         Condition a ==> FALSE
         Condition b ==> TRUE
         Condition c ==> TRUE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:NO_ENTREE
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.END

-- Test Case: Cake
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:Cake
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:LOBSTER
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.EXPECTED:manager.Add_Included_Dessert.Order[0].Dessert:CAKE
TEST.EXPECTED:manager.Add_Included_Dessert.return:2
TEST.END

-- Test Case: Neither
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:Neither
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:NO_ENTREE
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.EXPECTED:manager.Add_Included_Dessert.return:0
TEST.END

-- Test Case: Pie
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:Pie
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:CAESAR
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:STEAK
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:MIXED_DRINK
TEST.EXPECTED:manager.Add_Included_Dessert.Order[0].Dessert:PIE
TEST.EXPECTED:manager.Add_Included_Dessert.return:1
TEST.END

-- Subprogram: Add_Party_To_Waiting_List

-- Test Case: Add_Party_To_Waiting_List.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Party_To_Waiting_List
TEST.NEW
TEST.NAME:Add_Party_To_Waiting_List.001
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name:<<malloc 4>>
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[0]:'T'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[1]:'o'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[2]:'m'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[3]:8#0#
TEST.EXPECTED:manager.<<GLOBAL>>.WaitingList[0]:"Tom"
TEST.END

-- Test Case: Add_Party_To_Waiting_List.002
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Party_To_Waiting_List
TEST.NEW
TEST.NAME:Add_Party_To_Waiting_List.002
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[0]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[0]:"John"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[1]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[1]:"John"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[2]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[2]:"John"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[3]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[3]:"Mary"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[4]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[4]:"Mary"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[5]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[5]:"Mary"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[6]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[6]:"Mary"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[7]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[7]:"Mary"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[8]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[8]:"John"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[9]:<<malloc 5>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[9]:"John"
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name:<<malloc 4>>
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[0]:'T'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[1]:'i'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[2]:'m'
TEST.VALUE:manager.Add_Party_To_Waiting_List.Name[3]:8#0#
TEST.EXPECTED:manager.<<GLOBAL>>.WaitingList[0]:"Tom"
TEST.END

-- Subprogram: Add_Tax_Tip

-- Test Case: CheckStubValues
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:CheckStubValues
TEST.NOTES:
note2
TEST.END_NOTES:
TEST.VALUE:manager.<<GLOBAL>>.default_tax:0.10
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.0
TEST.VALUE:manager.Add_Tax_Tip.tip:0.0
TEST.VALUE:uut_prototype_stubs.log_tax_receipts.return:1
TEST.EXPECTED:manager.<<GLOBAL>>.log_err_cnt:0
TEST.EXPECTED:manager.<<GLOBAL>>.default_tax:0.10
TEST.EXPECTED:manager.Add_Tax_Tip.return:11.0
TEST.EXPECTED:uut_prototype_stubs.log_tax_receipts.this_tax_ttl:1.0
TEST.END

-- Test Case: Normal
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:Normal
TEST.VALUE:<<OPTIONS>>.DATA_PARTITIONS:5
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.05
TEST.VALUE:manager.Add_Tax_Tip.tip:0.15
TEST.EXPECTED:manager.Add_Tax_Tip.return:12.0
TEST.ATTRIBUTES:manager.Add_Tax_Tip.check_total:DISPLAY_STATE=DISPLAY
TEST.END

-- Test Case: Normal.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:Normal.001
TEST.NOTES:
ddda kdfjkajdlgkjalgjlk
TEST.END_NOTES:
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.05
TEST.VALUE:manager.Add_Tax_Tip.tip:0.15
TEST.EXPECTED_USER_CODE:manager.Add_Tax_Tip.return
{{ <<manager.Add_Tax_Tip.return>> <= ( 11 ) }}
TEST.END_EXPECTED_USER_CODE:
TEST.END

-- Test Case: TenPercentTax
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:TenPercentTax
TEST.VALUE:manager.<<GLOBAL>>.default_tax:0.10
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.0
TEST.VALUE:manager.Add_Tax_Tip.tip:0.0
TEST.EXPECTED:manager.<<GLOBAL>>.log_err_cnt:0
TEST.EXPECTED:manager.<<GLOBAL>>.default_tax:0.10
TEST.EXPECTED:manager.Add_Tax_Tip.return:11.0
TEST.END

-- Test Case: ZeroTax
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:ZeroTax
TEST.VALUE:manager.Add_Tax_Tip.check_total:10.0
TEST.VALUE:manager.Add_Tax_Tip.sales_tax:0.0
TEST.VALUE:manager.Add_Tax_Tip.tip:0.15
TEST.EXPECTED:manager.Add_Tax_Tip.return:10.0
TEST.END

-- Subprogram: Clear_Table

-- Test Case: Clear_Table.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Clear_Table
TEST.NEW
TEST.NAME:Clear_Table.001
TEST.VALUE:manager.Clear_Table.Table:5
TEST.END

-- Subprogram: Place_Order

-- Test Case: BASIS-PATH-001
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-001
TEST.BASIS_PATH:1 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 1
      (6) case (Order.Entree) ==> default
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:5
TEST.END

-- Test Case: BASIS-PATH-002
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-002
TEST.BASIS_PATH:2 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 2
      (1) case (Order.Entree) ==> NO_ENTREE
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:NO_ENTREE
TEST.END

-- Test Case: BASIS-PATH-003
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-003
TEST.BASIS_PATH:3 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 3
      (2) case (Order.Entree) ==> STEAK
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:STEAK
TEST.END

-- Test Case: BASIS-PATH-004
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-004
TEST.BASIS_PATH:4 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 4
      (3) case (Order.Entree) ==> CHICKEN
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:CHICKEN
TEST.END

-- Test Case: BASIS-PATH-005
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-005
TEST.BASIS_PATH:5 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 5
      (4) case (Order.Entree) ==> LOBSTER
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:LOBSTER
TEST.END

-- Test Case: BASIS-PATH-006
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:BASIS-PATH-006
TEST.BASIS_PATH:6 of 6
TEST.NOTES:
This is an automatically generated test case.
   Test Path 6
      (5) case (Order.Entree) ==> PASTA
   Test Case Generation Notes:
TEST.END_NOTES:
TEST.VALUE:manager.Place_Order.Table:<<MIN>>
TEST.VALUE:manager.Place_Order.Seat:<<MIN>>
TEST.VALUE:manager.Place_Order.Order.Entree:PASTA
TEST.END

-- Test Case: Place_Order.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Place_Order.001
TEST.VALUE:<<OPTIONS>>.GLOBAL_DATA_DISPLAY:EACH_EVENT
TEST.EXPECTED:manager.Place_Order.return:MACRO=COST_OF_STEAK
TEST.VALUE_USER_CODE:<<testcase>>
printf("Test Case User Code Input!\n");
TEST.END_VALUE_USER_CODE:
TEST.VALUE_USER_CODE:manager.Place_Order.Order.Entree
printf("input parameter user code\n");
TEST.END_VALUE_USER_CODE:
TEST.EXPECTED_USER_CODE:<<testcase>>
printf("Test Case User Code Expected!\n");
TEST.END_EXPECTED_USER_CODE:
TEST.END

-- Test Case: Place_Order.002
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Place_Order.002
TEST.VALUE:<<OPTIONS>>.GLOBAL_DATA_DISPLAY:EACH_EVENT
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[0]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[0]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[1]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[1]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[2]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[2]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[4]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[4]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[5]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[5]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[6]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[6]:"aaa"
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[7]:<<malloc 4>>
TEST.VALUE:manager.<<GLOBAL>>.WaitingList[7]:"aaa"
TEST.VALUE:manager.Place_Order.Table:1
TEST.VALUE:manager.Place_Order.Seat:1
TEST.VALUE:manager.Place_Order.Order.Salad:CAESAR
TEST.VALUE:manager.Place_Order.Order.Entree:STEAK
TEST.VALUE:manager.Place_Order.Order.Beverage:MIXED_DRINK
TEST.VALUE:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Salad:CAESAR
TEST.VALUE:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Entree:STEAK
TEST.VALUE:uut_prototype_stubs.Update_Table_Record.Data.Order[1].Beverage:MIXED_DRINK
TEST.END

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:<<COMPOUND>>.001
TEST.END
--
