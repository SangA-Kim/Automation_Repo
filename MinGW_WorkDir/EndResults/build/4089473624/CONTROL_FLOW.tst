-- VectorCAST 20.sp6 (02/02/21)
-- Test Case Script
--
-- Environment    : CONTROL_FLOW
-- Unit(s) Under Test: control_flow
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

-- Unit: control_flow

-- Subprogram: computeBaseArea

-- Test Case: AreaTest
TEST.UNIT:control_flow
TEST.SUBPROGRAM:computeBaseArea
TEST.NEW
TEST.NAME:AreaTest
TEST.VALUE:control_flow.<<GLOBAL>>.widthX:2.0
TEST.VALUE:control_flow.<<GLOBAL>>.lengthY:3.0
TEST.VALUE:control_flow.<<GLOBAL>>.heightZ:4.0
TEST.VALUE:control_flow.computeBaseArea.shape:BOX
TEST.VALUE:uut_prototype_stubs.validShape.return:1
TEST.EXPECTED:control_flow.computeBaseArea.return:6.0
TEST.END

-- Subprogram: computeVolume

-- Test Case: VolumeTest1
TEST.UNIT:control_flow
TEST.SUBPROGRAM:computeVolume
TEST.NEW
TEST.NAME:VolumeTest1
TEST.VALUE:control_flow.<<GLOBAL>>.widthX:2.0
TEST.VALUE:control_flow.<<GLOBAL>>.lengthY:3.0
TEST.VALUE:control_flow.<<GLOBAL>>.heightZ:4.0
TEST.VALUE:control_flow.computeVolume.shape:BOX
TEST.VALUE:uut_prototype_stubs.validShape.return:1
TEST.EXPECTED:control_flow.computeVolume.return:24.0
TEST.END

-- Test Case: VolumeTest1.001
TEST.UNIT:control_flow
TEST.SUBPROGRAM:computeVolume
TEST.NEW
TEST.NAME:VolumeTest1.001
TEST.VALUE:control_flow.<<GLOBAL>>.widthX:2.0
TEST.VALUE:control_flow.<<GLOBAL>>.lengthY:3.0
TEST.VALUE:control_flow.<<GLOBAL>>.heightZ:4.0
TEST.VALUE:control_flow.computeVolume.shape:BOX
TEST.VALUE:uut_prototype_stubs.validShape.return:1
TEST.EXPECTED:control_flow.computeVolume.return:24.0
TEST.END

-- Subprogram: partitionExample

-- Test Case: partitionExample-PARTITIONS
TEST.UNIT:control_flow
TEST.SUBPROGRAM:partitionExample
TEST.NEW
TEST.NAME:partitionExample-PARTITIONS
TEST.VALUE:<<OPTIONS>>.DATA_PARTITIONS:5
TEST.VALUE:control_flow.partitionExample.numberOfIterations:VARY FROM:<<MIN>> TO:<<MAX>> BY: <<PARTITION>>
TEST.END

-- Test Case: partitionExample-PARTITIONS.001
TEST.UNIT:control_flow
TEST.SUBPROGRAM:partitionExample
TEST.NEW
TEST.NAME:partitionExample-PARTITIONS.001
TEST.VALUE:<<OPTIONS>>.DATA_PARTITIONS:10
TEST.VALUE:control_flow.partitionExample.numberOfIterations:VARY FROM:<<MIN>> TO:<<MAX>> BY: <<PARTITION>>
TEST.END
