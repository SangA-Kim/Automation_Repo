-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : MGR_COVER
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

-- Test Case: FreeCake
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:FreeCake
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:GREEN
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:LOBSTER
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:WINE
TEST.EXPECTED:manager.Add_Included_Dessert.Order[0].Dessert:CAKE
TEST.EXPECTED:manager.Add_Included_Dessert.return:2
TEST.END

-- Test Case: FreePie
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:FreePie
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Salad:CAESAR
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:STEAK
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Beverage:MIXED_DRINK
TEST.EXPECTED:manager.Add_Included_Dessert.Order[0].Dessert:PIE
TEST.END

-- Test Case: NoDessert
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Included_Dessert
TEST.NEW
TEST.NAME:NoDessert
TEST.VALUE:manager.Add_Included_Dessert.Order:<<malloc 1>>
TEST.VALUE:manager.Add_Included_Dessert.Order[0].Entree:NO_ENTREE
TEST.EXPECTED:manager.Add_Included_Dessert.return:0
TEST.END

-- Subprogram: Add_Tax_Tip

-- Test Case: Add_Tax_Tip.001
TEST.UNIT:manager
TEST.SUBPROGRAM:Add_Tax_Tip
TEST.NEW
TEST.NAME:Add_Tax_Tip.001
TEST.END

-- Subprogram: Place_Order

-- Test Case: Chicken
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Chicken
TEST.VALUE:manager.Place_Order.Order.Entree:CHICKEN
TEST.EXPECTED:manager.Place_Order.return:MACRO=COST_OF_CHICKEN
TEST.END

-- Test Case: InvalidOrder
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:InvalidOrder
TEST.VALUE:manager.Place_Order.Order.Entree:1000
TEST.EXPECTED:manager.Place_Order.return:0.0
TEST.END

-- Test Case: Lobster
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Lobster
TEST.VALUE:manager.Place_Order.Order.Entree:LOBSTER
TEST.EXPECTED:manager.Place_Order.return:MACRO=COST_OF_LOBSTER
TEST.END

-- Test Case: NoEntree
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:NoEntree
TEST.VALUE:manager.Place_Order.Order.Entree:NO_ENTREE
TEST.EXPECTED:manager.Place_Order.return:0.0
TEST.END

-- Test Case: Pasta
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Pasta
TEST.VALUE:manager.Place_Order.Order.Entree:PASTA
TEST.EXPECTED:manager.Place_Order.return:MACRO=COST_OF_PASTA
TEST.END

-- Test Case: SEG_FAULT
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:SEG_FAULT
TEST.VALUE:manager.Place_Order.Table:1
TEST.VALUE:manager.Place_Order.Seat:10000
TEST.END

-- Test Case: Steak
TEST.UNIT:manager
TEST.SUBPROGRAM:Place_Order
TEST.NEW
TEST.NAME:Steak
TEST.VALUE:manager.Place_Order.Order.Entree:STEAK
TEST.EXPECTED:manager.Place_Order.return:MACRO=COST_OF_STEAK
TEST.END
