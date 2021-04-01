-- VectorCAST 18.sp3 (10/18/18)
-- Test Case Script
-- 
-- Environment    : SHAPES
-- Unit(s) Under Test: rectangle shape
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

-- Subprogram: <<INIT>>

-- Test Case: RECTANGLE_INIT
TEST.SUBPROGRAM:<<INIT>>
TEST.NEW
TEST.NAME:RECTANGLE_INIT
TEST.AUTOMATIC_FINALIZATION
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle().<<call>>:0
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mX:3
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mY:4
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mHeight:5
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mWidth:10
TEST.END

-- Unit: rectangle

-- Subprogram: (cl)Rectangle::Rectangle(int,int,int,int)

-- Test Case: (cl)Rectangle::Rectangle(int,int,int,int).001
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::Rectangle(int,int,int,int)
TEST.NEW
TEST.NAME:(cl)Rectangle::Rectangle(int,int,int,int).001
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).x:1
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).y:2
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).height:3
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).width:4
TEST.EXPECTED:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mX:1
TEST.EXPECTED:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mY:2
TEST.EXPECTED:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mHeight:3
TEST.EXPECTED:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mWidth:4
TEST.END

-- Test Case: BUILD_RECT1
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::Rectangle(int,int,int,int)
TEST.NEW
TEST.NAME:BUILD_RECT1
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).x:1
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).y:2
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).height:3
TEST.VALUE:rectangle.(cl)Rectangle::Rectangle(int,int,int,int).width:4
TEST.END

-- Subprogram: (cl)Rectangle::getArea

-- Test Case: Default
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::getArea
TEST.NEW
TEST.NAME:Default
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle().<<call>>:0
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mX:3
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mY:4
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mHeight:5
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.mWidth:10
TEST.EXPECTED:rectangle.(cl)Rectangle::getArea.return:50.0
TEST.END

-- Test Case: GetArea_RECT1
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::getArea
TEST.NEW
TEST.NAME:GetArea_RECT1
TEST.EXPECTED:rectangle.(cl)Rectangle::getArea.return:12.0
TEST.END

-- Test Case: Normal
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::getArea
TEST.NEW
TEST.NAME:Normal
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle(int,int,int,int).x:3
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle(int,int,int,int).y:4
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle(int,int,int,int).height:5
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle(int,int,int,int).width:10
TEST.VALUE:rectangle.<<GLOBAL>>.(cl).Rectangle.Rectangle.<<constructor>>.Rectangle(int,int,int,int).<<call>>:0
TEST.EXPECTED:rectangle.(cl)Rectangle::getArea.return:50.0
TEST.END

-- Test Case: SegFault
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::getArea
TEST.NEW
TEST.NAME:SegFault
TEST.END

-- Subprogram: (cl)Rectangle::getY

-- Test Case: GetY_RECT1
TEST.UNIT:rectangle
TEST.SUBPROGRAM:(cl)Rectangle::getY
TEST.NEW
TEST.NAME:GetY_RECT1
TEST.EXPECTED:rectangle.(cl)Rectangle::getY.return:2
TEST.END

-- COMPOUND TESTS

TEST.SUBPROGRAM:<<COMPOUND>>
TEST.NEW
TEST.NAME:RECT1
TEST.SLOT: "1", "rectangle", "(cl)Rectangle::Rectangle(int,int,int,int)", "1", "BUILD_RECT1"
TEST.SLOT: "2", "rectangle", "(cl)Rectangle::getArea", "1", "GetArea_RECT1"
TEST.SLOT: "3", "rectangle", "(cl)Rectangle::getY", "1", "GetY_RECT1"
TEST.END
--
